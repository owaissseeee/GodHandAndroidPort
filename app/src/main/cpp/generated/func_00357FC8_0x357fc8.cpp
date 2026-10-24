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

// Function: func_00357FC8
// Address: 0x357fc8 - 0x358090
void func_00357FC8_0x357fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357FC8_0x357fc8");
#endif

    switch (ctx->pc) {
        case 0x358008u: goto label_358008;
        case 0x358018u: goto label_358018;
        case 0x358028u: goto label_358028;
        default: break;
    }

    ctx->pc = 0x357fc8u;

    // 0x357fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357fd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357fd8: 0x26030a0c  addiu       $v1, $s0, 0xA0C
    ctx->pc = 0x357fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2572));
    // 0x357fdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x357fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x357fe0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x357fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x357fe4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x357fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x357fe8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357FE8u;
    {
        const bool branch_taken_0x357fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FE8u;
        // 0x357fec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357fe8) {
            ctx->pc = 0x358000u;
            goto label_358000;
        }
    }
    ctx->pc = 0x357FF0u;
    // 0x357ff0: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x357ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x357ff4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x357FF4u;
    {
        const bool branch_taken_0x357ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x357FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FF4u;
        // 0x357ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357ff4) {
            ctx->pc = 0x358078u;
            goto label_358078;
        }
    }
    ctx->pc = 0x357FFCu;
    // 0x357ffc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x357ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_358000:
    // 0x358000: 0xc0d70da  jal         func_35C368
    ctx->pc = 0x358000u;
    SET_GPR_U32(ctx, 31, 0x358008u);
    ctx->pc = 0x358004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358000u;
    // 0x358004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C368u, 0x358000u, 0x358008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358008u;
label_358008:
    // 0x358008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35800c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35800cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x358010: 0xc0d70da  jal         func_35C368
    ctx->pc = 0x358010u;
    SET_GPR_U32(ctx, 31, 0x358018u);
    ctx->pc = 0x358014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358010u;
    // 0x358014: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C368u, 0x358010u, 0x358018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358018u;
label_358018:
    // 0x358018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35801c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x35801cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x358020: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x358020u;
    SET_GPR_U32(ctx, 31, 0x358028u);
    ctx->pc = 0x358024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358020u;
    // 0x358024: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x358020u, 0x358028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358028u;
label_358028:
    // 0x358028: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x358028u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35802c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35802cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358030: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x358030u;
    {
        const bool branch_taken_0x358030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x358034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358030u;
        // 0x358034: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358030) {
            ctx->pc = 0x358060u;
            goto label_358060;
        }
    }
    ctx->pc = 0x358038u;
    // 0x358038: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x358038u;
    {
        const bool branch_taken_0x358038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x358038) {
            ctx->pc = 0x35803Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358038u;
            // 0x35803c: 0x2322024  and         $a0, $s1, $s2 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358074u;
            goto label_358074;
        }
    }
    ctx->pc = 0x358040u;
    // 0x358040: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x358040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x358044: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x358044u;
    {
        const bool branch_taken_0x358044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x358048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358044u;
        // 0x358048: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358044) {
            ctx->pc = 0x358068u;
            goto label_358068;
        }
    }
    ctx->pc = 0x35804Cu;
    // 0x35804c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35804Cu;
    {
        const bool branch_taken_0x35804c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x358050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35804Cu;
        // 0x358050: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35804c) {
            ctx->pc = 0x358070u;
            goto label_358070;
        }
    }
    ctx->pc = 0x358054u;
    // 0x358054: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x358054u;
    {
        const bool branch_taken_0x358054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358054u;
        // 0x358058: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358054) {
            ctx->pc = 0x35807Cu;
            goto label_35807c;
        }
    }
    ctx->pc = 0x35805Cu;
    // 0x35805c: 0x0  nop
    ctx->pc = 0x35805cu;
    // NOP
label_358060:
    // 0x358060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x358060u;
    {
        const bool branch_taken_0x358060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358060u;
        // 0x358064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358060) {
            ctx->pc = 0x358074u;
            goto label_358074;
        }
    }
    ctx->pc = 0x358068u;
label_358068:
    // 0x358068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x358068u;
    {
        const bool branch_taken_0x358068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358068u;
        // 0x35806c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358068) {
            ctx->pc = 0x358074u;
            goto label_358074;
        }
    }
    ctx->pc = 0x358070u;
label_358070:
    // 0x358070: 0x2322025  or          $a0, $s1, $s2
    ctx->pc = 0x358070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
label_358074:
    // 0x358074: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x358074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_358078:
    // 0x358078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35807c:
    // 0x35807c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35807cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358080: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x358080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358084: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x358084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358088: 0x3e00008  jr          $ra
    ctx->pc = 0x358088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358088u;
        // 0x35808c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358090u;
}
