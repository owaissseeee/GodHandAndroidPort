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

// Function: func_001AF680
// Address: 0x1af680 - 0x1af870
void func_001AF680_0x1af680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AF680_0x1af680");
#endif

    switch (ctx->pc) {
        case 0x1af710u: goto label_1af710;
        case 0x1af734u: goto label_1af734;
        case 0x1af764u: goto label_1af764;
        case 0x1af784u: goto label_1af784;
        case 0x1af7acu: goto label_1af7ac;
        case 0x1af7bcu: goto label_1af7bc;
        case 0x1af7e8u: goto label_1af7e8;
        case 0x1af7f0u: goto label_1af7f0;
        case 0x1af80cu: goto label_1af80c;
        case 0x1af838u: goto label_1af838;
        default: break;
    }

    ctx->pc = 0x1af680u;

    // 0x1af680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1af680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1af684: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1af684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1af688: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1af68c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af68cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af690: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1af690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1af694: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1af694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af69c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1af69cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1af6a0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1af6a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1af6a4: 0x10720043  beq         $v1, $s2, . + 4 + (0x43 << 2)
    ctx->pc = 0x1AF6A4u;
    {
        const bool branch_taken_0x1af6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1AF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6A4u;
        // 0x1af6a8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6a4) {
            ctx->pc = 0x1AF7B4u;
            goto label_1af7b4;
        }
    }
    ctx->pc = 0x1AF6ACu;
    // 0x1af6ac: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1AF6ACu;
    {
        const bool branch_taken_0x1af6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6ACu;
        // 0x1af6b0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6ac) {
            ctx->pc = 0x1AF84Cu;
            goto label_1af84c;
        }
    }
    ctx->pc = 0x1AF6B4u;
    // 0x1af6b4: 0x54600066  bnel        $v1, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x1AF6B4u;
    {
        const bool branch_taken_0x1af6b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af6b4) {
            ctx->pc = 0x1AF6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF6B4u;
            // 0x1af6b8: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF850u;
            goto label_1af850;
        }
    }
    ctx->pc = 0x1AF6BCu;
    // 0x1af6bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1af6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1af6c0: 0x26300990  addiu       $s0, $s1, 0x990
    ctx->pc = 0x1af6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2448));
    // 0x1af6c4: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x1af6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x1af6c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1af6c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1af6cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1af6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af6d0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1af6d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af6d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1af6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1af6d8: 0x240700d2  addiu       $a3, $zero, 0xD2
    ctx->pc = 0x1af6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x1af6dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1af6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1af6e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af6e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af6e8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1af6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1af6ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1af6ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1af6f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1af6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1af6f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af6f8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1af6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1af6fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af700: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1af700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1af704: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1af704u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1af708: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x1AF708u;
    SET_GPR_U32(ctx, 31, 0x1AF710u);
    ctx->pc = 0x1AF70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF708u;
    // 0x1af70c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x1AF708u, 0x1AF710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF710u;
label_1af710:
    // 0x1af710: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1af710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1af714: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1af714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1af718: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1af718u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1af71c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1af71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1af720: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1af720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1af724: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1af724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1af728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af72c: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x1AF72Cu;
    SET_GPR_U32(ctx, 31, 0x1AF734u);
    ctx->pc = 0x1AF730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF72Cu;
    // 0x1af730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x1AF72Cu, 0x1AF734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF734u;
label_1af734:
    // 0x1af734: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1af734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x1af738: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1af738u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1af73c: 0xa23202f6  sb          $s2, 0x2F6($s1)
    ctx->pc = 0x1af73cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 18));
    // 0x1af740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af744: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1af744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1af748: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af74c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1af74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af750: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1af750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af754: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1af754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1af758: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1af758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af75c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1AF75Cu;
    SET_GPR_U32(ctx, 31, 0x1AF764u);
    ctx->pc = 0x1AF760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF75Cu;
    // 0x1af760: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AF75Cu, 0x1AF764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF764u;
label_1af764:
    // 0x1af764: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1af764u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1af768: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1af768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af76c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1af76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1af770: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1af770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af774: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1af774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af778: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1af778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af77c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1AF77Cu;
    SET_GPR_U32(ctx, 31, 0x1AF784u);
    ctx->pc = 0x1AF780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF77Cu;
    // 0x1af780: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1AF77Cu, 0x1AF784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF784u;
label_1af784:
    // 0x1af784: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1af784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1af788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af78c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1af78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1af790: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x1af790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x1af794: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1af794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1af798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af79c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1af79cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1af7a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7a4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1AF7A4u;
    SET_GPR_U32(ctx, 31, 0x1AF7ACu);
    ctx->pc = 0x1AF7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF7A4u;
    // 0x1af7a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1AF7A4u, 0x1AF7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7ACu;
label_1af7ac:
    // 0x1af7ac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1AF7ACu;
    {
        const bool branch_taken_0x1af7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7ACu;
        // 0x1af7b0: 0xae220af4  sw          $v0, 0xAF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2804), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7ac) {
            ctx->pc = 0x1AF848u;
            goto label_1af848;
        }
    }
    ctx->pc = 0x1AF7B4u;
label_1af7b4:
    // 0x1af7b4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1AF7B4u;
    SET_GPR_U32(ctx, 31, 0x1AF7BCu);
    ctx->pc = 0x1AF7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF7B4u;
    // 0x1af7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1AF7B4u, 0x1AF7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7BCu;
label_1af7bc:
    // 0x1af7bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AF7BCu;
    {
        const bool branch_taken_0x1af7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7BCu;
        // 0x1af7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7bc) {
            ctx->pc = 0x1AF7E8u;
            goto label_1af7e8;
        }
    }
    ctx->pc = 0x1AF7C4u;
    // 0x1af7c4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1af7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x1af7c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1af7c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1af7cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7d0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1af7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1af7d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1af7d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1af7d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1af7dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7e0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1AF7E0u;
    SET_GPR_U32(ctx, 31, 0x1AF7E8u);
    ctx->pc = 0x1AF7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF7E0u;
    // 0x1af7e4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AF7E0u, 0x1AF7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7E8u;
label_1af7e8:
    // 0x1af7e8: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x1AF7E8u;
    SET_GPR_U32(ctx, 31, 0x1AF7F0u);
    ctx->pc = 0x1AF7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF7E8u;
    // 0x1af7ec: 0x26240990  addiu       $a0, $s1, 0x990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x1AF7E8u, 0x1AF7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7F0u;
label_1af7f0:
    // 0x1af7f0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AF7F0u;
    {
        const bool branch_taken_0x1af7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7F0u;
        // 0x1af7f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7f0) {
            ctx->pc = 0x1AF84Cu;
            goto label_1af84c;
        }
    }
    ctx->pc = 0x1AF7F8u;
    // 0x1af7f8: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1af7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1af7fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF7FCu;
    {
        const bool branch_taken_0x1af7fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7FCu;
        // 0x1af800: 0xa2200af0  sb          $zero, 0xAF0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2800), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7fc) {
            ctx->pc = 0x1AF80Cu;
            goto label_1af80c;
        }
    }
    ctx->pc = 0x1AF804u;
    // 0x1af804: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AF804u;
    SET_GPR_U32(ctx, 31, 0x1AF80Cu);
    ctx->pc = 0x1AF808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF804u;
    // 0x1af808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AF804u, 0x1AF80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF80Cu;
label_1af80c:
    // 0x1af80c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1af80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1af810: 0x8e2305b8  lw          $v1, 0x5B8($s1)
    ctx->pc = 0x1af810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x1af814: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1af814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1af818: 0x8e250af4  lw          $a1, 0xAF4($s1)
    ctx->pc = 0x1af818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2804)));
    // 0x1af81c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1af81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1af820: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1af820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x1af824: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF824u;
    {
        const bool branch_taken_0x1af824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF824u;
        // 0x1af828: 0xae2305b8  sw          $v1, 0x5B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af824) {
            ctx->pc = 0x1AF83Cu;
            goto label_1af83c;
        }
    }
    ctx->pc = 0x1AF82Cu;
    // 0x1af82c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1af82cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1af830: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1AF830u;
    SET_GPR_U32(ctx, 31, 0x1AF838u);
    ctx->pc = 0x1AF834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF830u;
    // 0x1af834: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1AF830u, 0x1AF838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF838u;
label_1af838:
    // 0x1af838: 0xae200af4  sw          $zero, 0xAF4($s1)
    ctx->pc = 0x1af838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2804), GPR_U32(ctx, 0));
label_1af83c:
    // 0x1af83c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1af83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af840: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1af840u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1af844: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1af844u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1af848:
    // 0x1af848: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1af848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1af84c:
    // 0x1af84c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1af84cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1af850:
    // 0x1af850: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af858: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1af858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1af85c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF85Cu;
        // 0x1af860: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF864u;
    // 0x1af864: 0x0  nop
    ctx->pc = 0x1af864u;
    // NOP
    // 0x1af868: 0x0  nop
    ctx->pc = 0x1af868u;
    // NOP
    // 0x1af86c: 0x0  nop
    ctx->pc = 0x1af86cu;
    // NOP
    ctx->pc = 0x1af870u;
}
