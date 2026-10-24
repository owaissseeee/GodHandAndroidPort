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

// Function: func_0017E4C8
// Address: 0x17e4c8 - 0x17e658
void func_0017E4C8_0x17e4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017E4C8_0x17e4c8");
#endif

    switch (ctx->pc) {
        case 0x17e590u: goto label_17e590;
        case 0x17e5b4u: goto label_17e5b4;
        case 0x17e5ecu: goto label_17e5ec;
        default: break;
    }

    ctx->pc = 0x17e4c8u;

    // 0x17e4c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17e4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17e4cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17e4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17e4d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e4d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17e4d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17e4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17e4dc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17e4dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e4e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e4e4: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x17e4e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x17e4e8: 0x10720037  beq         $v1, $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x17E4E8u;
    {
        const bool branch_taken_0x17e4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x17E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4E8u;
        // 0x17e4ec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e4e8) {
            ctx->pc = 0x17E5C8u;
            goto label_17e5c8;
        }
    }
    ctx->pc = 0x17E4F0u;
    // 0x17e4f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E4F0u;
    {
        const bool branch_taken_0x17e4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e4f0) {
            ctx->pc = 0x17E4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E4F0u;
            // 0x17e4f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E508u;
            goto label_17e508;
        }
    }
    ctx->pc = 0x17E4F8u;
    // 0x17e4f8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E4F8u;
    {
        const bool branch_taken_0x17e4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4F8u;
        // 0x17e4fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e4f8) {
            ctx->pc = 0x17E520u;
            goto label_17e520;
        }
    }
    ctx->pc = 0x17E500u;
    // 0x17e500: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x17E500u;
    {
        const bool branch_taken_0x17e500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E500u;
        // 0x17e504: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e500) {
            ctx->pc = 0x17E648u;
            goto label_17e648;
        }
    }
    ctx->pc = 0x17E508u;
label_17e508:
    // 0x17e508: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x17E508u;
    {
        const bool branch_taken_0x17e508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E508u;
        // 0x17e50c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e508) {
            ctx->pc = 0x17E5E4u;
            goto label_17e5e4;
        }
    }
    ctx->pc = 0x17E510u;
    // 0x17e510: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x17E510u;
    {
        const bool branch_taken_0x17e510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E510u;
        // 0x17e514: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e510) {
            ctx->pc = 0x17E618u;
            goto label_17e618;
        }
    }
    ctx->pc = 0x17E518u;
    // 0x17e518: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x17E518u;
    {
        const bool branch_taken_0x17e518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E518u;
        // 0x17e51c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e518) {
            ctx->pc = 0x17E648u;
            goto label_17e648;
        }
    }
    ctx->pc = 0x17E520u;
label_17e520:
    // 0x17e520: 0x92220601  lbu         $v0, 0x601($s1)
    ctx->pc = 0x17e520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1537)));
    // 0x17e524: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E524u;
    {
        const bool branch_taken_0x17e524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e524) {
            ctx->pc = 0x17E528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E524u;
            // 0x17e528: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E540u;
            goto label_17e540;
        }
    }
    ctx->pc = 0x17E52Cu;
    // 0x17e52c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17e52cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e530: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x17e530u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e534: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x17e534u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e538: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x17E538u;
    {
        const bool branch_taken_0x17e538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E538u;
        // 0x17e53c: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e538) {
            ctx->pc = 0x17E640u;
            goto label_17e640;
        }
    }
    ctx->pc = 0x17E540u;
label_17e540:
    // 0x17e540: 0x26300610  addiu       $s0, $s1, 0x610
    ctx->pc = 0x17e540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    // 0x17e544: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x17e544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x17e548: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x17e548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x17e54c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17e54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e554: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17e554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17e558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17e558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e55c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e560: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x17e560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17e564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e568: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x17e568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x17e56c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17e56cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17e570: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17e570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e574: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x17e574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x17e578: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x17e578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17e57c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x17e57cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e580: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x17e580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17e584: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e584u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e588: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x17E588u;
    SET_GPR_U32(ctx, 31, 0x17E590u);
    ctx->pc = 0x17E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E588u;
    // 0x17e58c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x17E588u, 0x17E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E590u;
label_17e590:
    // 0x17e590: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x17e590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x17e594: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17e594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e59c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17e59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17e5a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x17e5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e5a4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e5a8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17e5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e5ac: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x17E5ACu;
    SET_GPR_U32(ctx, 31, 0x17E5B4u);
    ctx->pc = 0x17E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E5ACu;
    // 0x17e5b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x17E5ACu, 0x17E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5B4u;
label_17e5b4:
    // 0x17e5b4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x17e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17e5b8: 0xa23202f5  sb          $s2, 0x2F5($s1)
    ctx->pc = 0x17e5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 18));
    // 0x17e5bc: 0xa6220602  sh          $v0, 0x602($s1)
    ctx->pc = 0x17e5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1538), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e5c0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17e5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e5c4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17e5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_17e5c8:
    // 0x17e5c8: 0x86220602  lh          $v0, 0x602($s1)
    ctx->pc = 0x17e5c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1538)));
    // 0x17e5cc: 0x443001a  bgezl       $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x17E5CCu;
    {
        const bool branch_taken_0x17e5cc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x17e5cc) {
            ctx->pc = 0x17E5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E5CCu;
            // 0x17e5d0: 0x96220602  lhu         $v0, 0x602($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1538)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E638u;
            goto label_17e638;
        }
    }
    ctx->pc = 0x17E5D4u;
    // 0x17e5d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e5d8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17e5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e5dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17E5DCu;
    {
        const bool branch_taken_0x17e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5DCu;
        // 0x17e5e0: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5dc) {
            ctx->pc = 0x17E630u;
            goto label_17e630;
        }
    }
    ctx->pc = 0x17E5E4u;
label_17e5e4:
    // 0x17e5e4: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x17E5E4u;
    SET_GPR_U32(ctx, 31, 0x17E5ECu);
    ctx->pc = 0x17E5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E5E4u;
    // 0x17e5e8: 0x26240610  addiu       $a0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x17E5E4u, 0x17E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5ECu;
label_17e5ec:
    // 0x17e5ec: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17E5ECu;
    {
        const bool branch_taken_0x17e5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5ECu;
        // 0x17e5f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5ec) {
            ctx->pc = 0x17E644u;
            goto label_17e644;
        }
    }
    ctx->pc = 0x17E5F4u;
    // 0x17e5f4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x17e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17e5f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17e5fc: 0xa6220602  sh          $v0, 0x602($s1)
    ctx->pc = 0x17e5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1538), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e600: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x17e600u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x17e604: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17e604u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e608: 0xa2200601  sb          $zero, 0x601($s1)
    ctx->pc = 0x17e608u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1537), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e60c: 0xa2200600  sb          $zero, 0x600($s1)
    ctx->pc = 0x17e60cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e610: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17E610u;
    {
        const bool branch_taken_0x17e610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E610u;
        // 0x17e614: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e610) {
            ctx->pc = 0x17E644u;
            goto label_17e644;
        }
    }
    ctx->pc = 0x17E618u;
label_17e618:
    // 0x17e618: 0x86220602  lh          $v0, 0x602($s1)
    ctx->pc = 0x17e618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1538)));
    // 0x17e61c: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E61Cu;
    {
        const bool branch_taken_0x17e61c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x17e61c) {
            ctx->pc = 0x17E620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E61Cu;
            // 0x17e620: 0x96220602  lhu         $v0, 0x602($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1538)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E638u;
            goto label_17e638;
        }
    }
    ctx->pc = 0x17E624u;
    // 0x17e624: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x17e624u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e628: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x17e628u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e62c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17e62cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_17e630:
    // 0x17e630: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17e630u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e634: 0x96220602  lhu         $v0, 0x602($s1)
    ctx->pc = 0x17e634u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1538)));
label_17e638:
    // 0x17e638: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17e638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17e63c: 0xa6220602  sh          $v0, 0x602($s1)
    ctx->pc = 0x17e63cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1538), (uint16_t)GPR_U32(ctx, 2));
label_17e640:
    // 0x17e640: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17e640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17e644:
    // 0x17e644: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17e644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17e648:
    // 0x17e648: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e64c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e650: 0x3e00008  jr          $ra
    ctx->pc = 0x17E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E650u;
        // 0x17e654: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E658u;
}
