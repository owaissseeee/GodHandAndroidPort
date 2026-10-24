#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlay__14cEventScrLight
// Address: 0x7b0f78 - 0x7b1070
void movePlay__14cEventScrLight_0x7b0f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__14cEventScrLight_0x7b0f78");
#endif

    switch (ctx->pc) {
        case 0x7b0f98u: goto label_7b0f98;
        case 0x7b0fa8u: goto label_7b0fa8;
        case 0x7b0fd4u: goto label_7b0fd4;
        case 0x7b0ff4u: goto label_7b0ff4;
        case 0x7b101cu: goto label_7b101c;
        case 0x7b102cu: goto label_7b102c;
        default: break;
    }

    ctx->pc = 0x7b0f78u;

    // 0x7b0f78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7b0f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7b0f7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7b0f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b0f80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7b0f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7b0f84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7b0f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7b0f88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7b0f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7b0f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b0f90: 0xc1ecd98  jal         func_7B3660
    ctx->pc = 0x7B0F90u;
    SET_GPR_U32(ctx, 31, 0x7B0F98u);
    ctx->pc = 0x7B0F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0F90u;
    // 0x7b0f94: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B3660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B3660u, 0x7B0F90u, 0x7B0F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0F98u;
label_7b0f98:
    // 0x7b0f98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7b0f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7b0f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0fa0: 0xc1ecd34  jal         func_7B34D0
    ctx->pc = 0x7B0FA0u;
    SET_GPR_U32(ctx, 31, 0x7B0FA8u);
    ctx->pc = 0x7B0FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0FA0u;
    // 0x7b0fa4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B34D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B34D0u, 0x7B0FA0u, 0x7B0FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0FA8u;
label_7b0fa8:
    // 0x7b0fa8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b0fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0fac: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x7b0facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x7b0fb0: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x7b0fb0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x7b0fb4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B0FB4u;
    {
        const bool branch_taken_0x7b0fb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b0fb4) {
            ctx->pc = 0x7B0FD4u;
            goto label_7b0fd4;
        }
    }
    ctx->pc = 0x7B0FBCu;
    // 0x7b0fbc: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x7b0fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7b0fc0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x7b0fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x7b0fc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B0FC4u;
    {
        const bool branch_taken_0x7b0fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B0FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0FC4u;
        // 0x7b0fc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0fc4) {
            ctx->pc = 0x7B0FD4u;
            goto label_7b0fd4;
        }
    }
    ctx->pc = 0x7B0FCCu;
    // 0x7b0fcc: 0xc1ec618  jal         func_7B1860
    ctx->pc = 0x7B0FCCu;
    SET_GPR_U32(ctx, 31, 0x7B0FD4u);
    ctx->pc = 0x7B0FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0FCCu;
    // 0x7b0fd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1860u, 0x7B0FCCu, 0x7B0FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0FD4u;
label_7b0fd4:
    // 0x7b0fd4: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x7B0FD4u;
    {
        const bool branch_taken_0x7b0fd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b0fd4) {
            ctx->pc = 0x7B0FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B0FD4u;
            // 0x7b0fd8: 0x92020008  lbu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B0FF8u;
            goto label_7b0ff8;
        }
    }
    ctx->pc = 0x7B0FDCu;
    // 0x7b0fdc: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x7b0fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x7b0fe0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x7b0fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x7b0fe4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B0FE4u;
    {
        const bool branch_taken_0x7b0fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B0FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0FE4u;
        // 0x7b0fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0fe4) {
            ctx->pc = 0x7B0FF4u;
            goto label_7b0ff4;
        }
    }
    ctx->pc = 0x7B0FECu;
    // 0x7b0fec: 0xc1ec618  jal         func_7B1860
    ctx->pc = 0x7B0FECu;
    SET_GPR_U32(ctx, 31, 0x7B0FF4u);
    ctx->pc = 0x7B0FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0FECu;
    // 0x7b0ff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1860u, 0x7B0FECu, 0x7B0FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0FF4u;
label_7b0ff4:
    // 0x7b0ff4: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x7b0ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_7b0ff8:
    // 0x7b0ff8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7b0ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7b0ffc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B0FFCu;
    {
        const bool branch_taken_0x7b0ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0FFCu;
        // 0x7b1000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0ffc) {
            ctx->pc = 0x7B1024u;
            goto label_7b1024;
        }
    }
    ctx->pc = 0x7B1004u;
    // 0x7b1004: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B1004u;
    {
        const bool branch_taken_0x7b1004 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b1004) {
            ctx->pc = 0x7B1024u;
            goto label_7b1024;
        }
    }
    ctx->pc = 0x7B100Cu;
    // 0x7b100c: 0x12120005  beq         $s0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B100Cu;
    {
        const bool branch_taken_0x7b100c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x7B1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B100Cu;
        // 0x7b1010: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b100c) {
            ctx->pc = 0x7B1024u;
            goto label_7b1024;
        }
    }
    ctx->pc = 0x7B1014u;
    // 0x7b1014: 0xc1ec468  jal         func_7B11A0
    ctx->pc = 0x7B1014u;
    SET_GPR_U32(ctx, 31, 0x7B101Cu);
    ctx->pc = 0x7B1018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1014u;
    // 0x7b1018: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B11A0u, 0x7B1014u, 0x7B101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B101Cu;
label_7b101c:
    // 0x7b101c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B101Cu;
    {
        const bool branch_taken_0x7b101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B101Cu;
        // 0x7b1020: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b101c) {
            ctx->pc = 0x7B1030u;
            goto label_7b1030;
        }
    }
    ctx->pc = 0x7B1024u;
label_7b1024:
    // 0x7b1024: 0xc1ec41c  jal         func_7B1070
    ctx->pc = 0x7B1024u;
    SET_GPR_U32(ctx, 31, 0x7B102Cu);
    ctx->pc = 0x7B1028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1024u;
    // 0x7b1028: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1070u, 0x7B1024u, 0x7B102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B102Cu;
label_7b102c:
    // 0x7b102c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x7b102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_7b1030:
    // 0x7b1030: 0x24030102  addiu       $v1, $zero, 0x102
    ctx->pc = 0x7b1030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x7b1034: 0x3042ff02  andi        $v0, $v0, 0xFF02
    ctx->pc = 0x7b1034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65282);
    // 0x7b1038: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B1038u;
    {
        const bool branch_taken_0x7b1038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7B103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1038u;
        // 0x7b103c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1038) {
            ctx->pc = 0x7B1058u;
            goto label_7b1058;
        }
    }
    ctx->pc = 0x7B1040u;
    // 0x7b1040: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x7b1040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x7b1044: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x7b1044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x7b1048: 0x8c649b70  lw          $a0, -0x6490($v1)
    ctx->pc = 0x7b1048u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x569B70u));
    // 0x7b104c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x7b104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7b1050: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x7b1050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x7b1054: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x7b1054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_7b1058:
    // 0x7b1058: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7b1058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b105c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7b105cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b1060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b1060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b1064: 0x3e00008  jr          $ra
    ctx->pc = 0x7B1064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1064u;
        // 0x7b1068: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B1064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B106Cu;
    // 0x7b106c: 0x0  nop
    ctx->pc = 0x7b106cu;
    // NOP
    ctx->pc = 0x7b1070u;
}
} // namespace gh_event
