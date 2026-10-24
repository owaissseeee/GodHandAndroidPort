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

// Function: func_002DD3C0
// Address: 0x2dd3c0 - 0x2dd480
void func_002DD3C0_0x2dd3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DD3C0_0x2dd3c0");
#endif

    switch (ctx->pc) {
        case 0x2dd3d8u: goto label_2dd3d8;
        case 0x2dd3f4u: goto label_2dd3f4;
        case 0x2dd418u: goto label_2dd418;
        case 0x2dd458u: goto label_2dd458;
        case 0x2dd468u: goto label_2dd468;
        default: break;
    }

    ctx->pc = 0x2dd3c0u;

    // 0x2dd3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd3c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dd3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dd3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd3cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd3d0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DD3D0u;
    SET_GPR_U32(ctx, 31, 0x2DD3D8u);
    ctx->pc = 0x2DD3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD3D0u;
    // 0x2dd3d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DD3D0u, 0x2DD3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD3D8u;
label_2dd3d8:
    // 0x2dd3d8: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DD3D8u;
    {
        const bool branch_taken_0x2dd3d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3D8u;
        // 0x2dd3dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd3d8) {
            ctx->pc = 0x2DD468u;
            goto label_2dd468;
        }
    }
    ctx->pc = 0x2DD3E0u;
    // 0x2dd3e0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2dd3e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2dd3e4: 0x58400021  blezl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DD3E4u;
    {
        const bool branch_taken_0x2dd3e4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dd3e4) {
            ctx->pc = 0x2DD3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD3E4u;
            // 0x2dd3e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD46Cu;
            goto label_2dd46c;
        }
    }
    ctx->pc = 0x2DD3ECu;
    // 0x2dd3ec: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DD3ECu;
    SET_GPR_U32(ctx, 31, 0x2DD3F4u);
    ctx->pc = 0x2DD3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD3ECu;
    // 0x2dd3f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DD3ECu, 0x2DD3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD3F4u;
label_2dd3f4:
    // 0x2dd3f4: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DD3F4u;
    {
        const bool branch_taken_0x2dd3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd3f4) {
            ctx->pc = 0x2DD3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD3F4u;
            // 0x2dd3f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD46Cu;
            goto label_2dd46c;
        }
    }
    ctx->pc = 0x2DD3FCu;
    // 0x2dd3fc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dd3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dd400: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dd400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dd404: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dd404u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dd408: 0x5c600018  bgtzl       $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DD408u;
    {
        const bool branch_taken_0x2dd408 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dd408) {
            ctx->pc = 0x2DD40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD408u;
            // 0x2dd40c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD46Cu;
            goto label_2dd46c;
        }
    }
    ctx->pc = 0x2DD410u;
    // 0x2dd410: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DD410u;
    SET_GPR_U32(ctx, 31, 0x2DD418u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DD410u, 0x2DD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD418u;
label_2dd418:
    // 0x2dd418: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DD418u;
    {
        const bool branch_taken_0x2dd418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd418) {
            ctx->pc = 0x2DD41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD418u;
            // 0x2dd41c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD46Cu;
            goto label_2dd46c;
        }
    }
    ctx->pc = 0x2DD420u;
    // 0x2dd420: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2dd420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2dd424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd42c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2dd42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2dd430: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dd430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd434: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dd434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd438: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2dd438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2dd43c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2dd43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2dd440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dd444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd448: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x2dd448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x2dd44c: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x2dd44cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dd450: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2DD450u;
    SET_GPR_U32(ctx, 31, 0x2DD458u);
    ctx->pc = 0x2DD454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD450u;
    // 0x2dd454: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2DD450u, 0x2DD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD458u;
label_2dd458:
    // 0x2dd458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd45c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd460: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2DD460u;
    SET_GPR_U32(ctx, 31, 0x2DD468u);
    ctx->pc = 0x2DD464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD460u;
    // 0x2dd464: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2DD460u, 0x2DD468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD468u;
label_2dd468:
    // 0x2dd468: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dd468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd46c:
    // 0x2dd46c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd474: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD474u;
        // 0x2dd478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD47Cu;
    // 0x2dd47c: 0x0  nop
    ctx->pc = 0x2dd47cu;
    // NOP
    ctx->pc = 0x2dd480u;
}
