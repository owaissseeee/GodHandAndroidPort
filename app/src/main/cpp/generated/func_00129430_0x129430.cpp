#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00129430
// Address: 0x129430 - 0x129578
void func_00129430_0x129430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00129430_0x129430");
#endif

    switch (ctx->pc) {
        case 0x1294a8u: goto label_1294a8;
        case 0x1294b4u: goto label_1294b4;
        case 0x1294dcu: goto label_1294dc;
        case 0x129504u: goto label_129504;
        case 0x129550u: goto label_129550;
        case 0x12955cu: goto label_12955c;
        default: break;
    }

    ctx->pc = 0x129430u;

    // 0x129430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x129430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x129434: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x129434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x129438: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x129438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12943c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12943cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129440: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x129440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x129444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x129444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x129448: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x129448u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x12944c: 0x86021616  lh          $v0, 0x1616($s0)
    ctx->pc = 0x12944cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5654)));
    // 0x129450: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129450u;
    {
        const bool branch_taken_0x129450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129450) {
            ctx->pc = 0x129454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129450u;
            // 0x129454: 0xa2001615  sb          $zero, 0x1615($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 5653), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129458u;
            goto label_129458;
        }
    }
    ctx->pc = 0x129458u;
label_129458:
    // 0x129458: 0x92031615  lbu         $v1, 0x1615($s0)
    ctx->pc = 0x129458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5653)));
    // 0x12945c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x12945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x129460: 0xa6021616  sh          $v0, 0x1616($s0)
    ctx->pc = 0x129460u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5654), (uint16_t)GPR_U32(ctx, 2));
    // 0x129464: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x129464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x129468: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x129468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12946c: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x12946cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x129470: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x129470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x129474: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x129474u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x129478: 0x1452000e  bne         $v0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x129478u;
    {
        const bool branch_taken_0x129478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x12947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129478u;
        // 0x12947c: 0xa2031615  sb          $v1, 0x1615($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5653), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129478) {
            ctx->pc = 0x1294B4u;
            goto label_1294b4;
        }
    }
    ctx->pc = 0x129480u;
    // 0x129480: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x129480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x129484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x129484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129488: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x129488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x12948c: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x12948cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x129490: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x129490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129494: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x129494u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129498: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x129498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12949c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12949cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294a0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1294A0u;
    SET_GPR_U32(ctx, 31, 0x1294A8u);
    ctx->pc = 0x1294A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1294A0u;
    // 0x1294a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1294A0u, 0x1294A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1294A8u;
label_1294a8:
    // 0x1294a8: 0x26249b70  addiu       $a0, $s1, -0x6490
    ctx->pc = 0x1294a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x1294ac: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x1294ACu;
    SET_GPR_U32(ctx, 31, 0x1294B4u);
    ctx->pc = 0x1294B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1294ACu;
    // 0x1294b0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x1294ACu, 0x1294B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1294B4u;
label_1294b4:
    // 0x1294b4: 0x82021615  lb          $v0, 0x1615($s0)
    ctx->pc = 0x1294b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5653)));
    // 0x1294b8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1294b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1294bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1294bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1294c0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1294c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1294c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1294C4u;
    {
        const bool branch_taken_0x1294c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1294C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294C4u;
        // 0x1294c8: 0x26319b70  addiu       $s1, $s1, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294c4) {
            ctx->pc = 0x1294D4u;
            goto label_1294d4;
        }
    }
    ctx->pc = 0x1294CCu;
    // 0x1294cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1294ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1294d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1294d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1294d4:
    // 0x1294d4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1294D4u;
    SET_GPR_U32(ctx, 31, 0x1294DCu);
    ctx->pc = 0x1294D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1294D4u;
    // 0x1294d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1294D4u, 0x1294DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1294DCu;
label_1294dc:
    // 0x1294dc: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1294DCu;
    {
        const bool branch_taken_0x1294dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1294E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294DCu;
        // 0x1294e0: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294dc) {
            ctx->pc = 0x1294F4u;
            goto label_1294f4;
        }
    }
    ctx->pc = 0x1294E4u;
    // 0x1294e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1294e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1294e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1294e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1294ec: 0x0  nop
    ctx->pc = 0x1294ecu;
    // NOP
    // 0x1294f0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1294f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1294f4:
    // 0x1294f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1294f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294f8: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x1294f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    // 0x1294fc: 0xc0aa65e  jal         func_2A9978
    ctx->pc = 0x1294FCu;
    SET_GPR_U32(ctx, 31, 0x129504u);
    ctx->pc = 0x129500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1294FCu;
    // 0x129500: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x1294FCu, 0x129504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129504u;
label_129504:
    // 0x129504: 0x82051615  lb          $a1, 0x1615($s0)
    ctx->pc = 0x129504u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5653)));
    // 0x129508: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x129508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12950c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12950Cu;
    {
        const bool branch_taken_0x12950c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12950c) {
            ctx->pc = 0x129510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12950Cu;
            // 0x129510: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x129514u;
            goto label_129514;
        }
    }
    ctx->pc = 0x129514u;
label_129514:
    // 0x129514: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129518: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x129518u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12951c: 0x1810  mfhi        $v1
    ctx->pc = 0x12951cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x129520: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x129520u;
    {
        const bool branch_taken_0x129520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x129524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129520u;
        // 0x129524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129520) {
            ctx->pc = 0x129554u;
            goto label_129554;
        }
    }
    ctx->pc = 0x129528u;
    // 0x129528: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x129528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x12952c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12952cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129530: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x129530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x129534: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x129534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129538: 0x240600ee  addiu       $a2, $zero, 0xEE
    ctx->pc = 0x129538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x12953c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12953cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129540: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x129540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129544: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x129544u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129548: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x129548u;
    SET_GPR_U32(ctx, 31, 0x129550u);
    ctx->pc = 0x12954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129548u;
    // 0x12954c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x129548u, 0x129550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129550u;
label_129550:
    // 0x129550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129554:
    // 0x129554: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x129554u;
    SET_GPR_U32(ctx, 31, 0x12955Cu);
    ctx->pc = 0x129558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129554u;
    // 0x129558: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x129554u, 0x12955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12955Cu;
label_12955c:
    // 0x12955c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12955cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129560: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x129560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129564: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x129564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x129568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12956c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x12956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x129570: 0x3e00008  jr          $ra
    ctx->pc = 0x129570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129570u;
        // 0x129574: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129578u;
}
