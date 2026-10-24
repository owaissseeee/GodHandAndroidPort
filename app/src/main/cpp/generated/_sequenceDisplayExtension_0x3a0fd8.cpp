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

// Function: _sequenceDisplayExtension
// Address: 0x3a0fd8 - 0x3a1068
void _sequenceDisplayExtension_0x3a0fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sequenceDisplayExtension_0x3a0fd8");
#endif

    switch (ctx->pc) {
        case 0x3a0ff0u: goto label_3a0ff0;
        case 0x3a0ffcu: goto label_3a0ffc;
        case 0x3a100cu: goto label_3a100c;
        case 0x3a1018u: goto label_3a1018;
        case 0x3a1024u: goto label_3a1024;
        case 0x3a1034u: goto label_3a1034;
        case 0x3a1044u: goto label_3a1044;
        case 0x3a1050u: goto label_3a1050;
        default: break;
    }

    ctx->pc = 0x3a0fd8u;

    // 0x3a0fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a0fdc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3a0fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a0fe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a0fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a0fe8: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0FE8u;
    SET_GPR_U32(ctx, 31, 0x3A0FF0u);
    ctx->pc = 0x3A0FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0FE8u;
    // 0x3a0fec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0FE8u, 0x3A0FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0FF0u;
label_3a0ff0:
    // 0x3a0ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ff4: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0FF4u;
    SET_GPR_U32(ctx, 31, 0x3A0FFCu);
    ctx->pc = 0x3A0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0FF4u;
    // 0x3a0ff8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0FF4u, 0x3A0FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0FFCu;
label_3a0ffc:
    // 0x3a0ffc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A0FFCu;
    {
        const bool branch_taken_0x3a0ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0FFCu;
        // 0x3a1000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ffc) {
            ctx->pc = 0x3A1028u;
            goto label_3a1028;
        }
    }
    ctx->pc = 0x3A1004u;
    // 0x3a1004: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A1004u;
    SET_GPR_U32(ctx, 31, 0x3A100Cu);
    ctx->pc = 0x3A1008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1004u;
    // 0x3a1008: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A1004u, 0x3A100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A100Cu;
label_3a100c:
    // 0x3a100c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a100cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1010: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A1010u;
    SET_GPR_U32(ctx, 31, 0x3A1018u);
    ctx->pc = 0x3A1014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1010u;
    // 0x3a1014: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A1010u, 0x3A1018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1018u;
label_3a1018:
    // 0x3a1018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a101c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A101Cu;
    SET_GPR_U32(ctx, 31, 0x3A1024u);
    ctx->pc = 0x3A1020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A101Cu;
    // 0x3a1020: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A101Cu, 0x3A1024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1024u;
label_3a1024:
    // 0x3a1024: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x3a1024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_3a1028:
    // 0x3a1028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a102c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A102Cu;
    SET_GPR_U32(ctx, 31, 0x3A1034u);
    ctx->pc = 0x3A1030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A102Cu;
    // 0x3a1030: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A102Cu, 0x3A1034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1034u;
label_3a1034:
    // 0x3a1034: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x3a1034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x3a1038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a103c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A103Cu;
    SET_GPR_U32(ctx, 31, 0x3A1044u);
    ctx->pc = 0x3A1040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A103Cu;
    // 0x3a1040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A103Cu, 0x3A1044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1044u;
label_3a1044:
    // 0x3a1044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1048: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A1048u;
    SET_GPR_U32(ctx, 31, 0x3A1050u);
    ctx->pc = 0x3A104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1048u;
    // 0x3a104c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A1048u, 0x3A1050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1050u;
label_3a1050:
    // 0x3a1050: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x3a1050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x3a1054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a1054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a1058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a1058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a105c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A105Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A105Cu;
        // 0x3a1060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A105Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1064u;
    // 0x3a1064: 0x0  nop
    ctx->pc = 0x3a1064u;
    // NOP
    ctx->pc = 0x3a1068u;
}
