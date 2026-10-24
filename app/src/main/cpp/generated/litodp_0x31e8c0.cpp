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

// Function: litodp
// Address: 0x31e8c0 - 0x31e978
void litodp_0x31e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("litodp_0x31e8c0");
#endif

    switch (ctx->pc) {
        case 0x31e940u: goto label_31e940;
        case 0x31e96cu: goto label_31e96c;
        default: break;
    }

    ctx->pc = 0x31e8c0u;

    // 0x31e8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31e8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31e8c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31e8c8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x31e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x31e8cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31e8d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x31e8d4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E8D4u;
    {
        const bool branch_taken_0x31e8d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8D4u;
        // 0x31e8d8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8d4) {
            ctx->pc = 0x31E8E8u;
            goto label_31e8e8;
        }
    }
    ctx->pc = 0x31E8DCu;
    // 0x31e8dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31e8e0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x31E8E0u;
    {
        const bool branch_taken_0x31e8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8E0u;
        // 0x31e8e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8e0) {
            ctx->pc = 0x31E964u;
            goto label_31e964;
        }
    }
    ctx->pc = 0x31E8E8u;
label_31e8e8:
    // 0x31e8e8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x31e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x31e8ec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31E8ECu;
    {
        const bool branch_taken_0x31e8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8ECu;
        // 0x31e8f0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8ec) {
            ctx->pc = 0x31E918u;
            goto label_31e918;
        }
    }
    ctx->pc = 0x31E8F4u;
    // 0x31e8f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31e8f8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E8F8u;
    {
        const bool branch_taken_0x31e8f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8F8u;
        // 0x31e8fc: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8f8) {
            ctx->pc = 0x31E910u;
            goto label_31e910;
        }
    }
    ctx->pc = 0x31E900u;
    // 0x31e900: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x31e900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x31e904: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31e904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31e908: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x31E908u;
    {
        const bool branch_taken_0x31e908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E908u;
        // 0x31e90c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e908) {
            ctx->pc = 0x31E970u;
            goto label_31e970;
        }
    }
    ctx->pc = 0x31E910u;
label_31e910:
    // 0x31e910: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E910u;
    {
        const bool branch_taken_0x31e910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E910u;
        // 0x31e914: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e910) {
            ctx->pc = 0x31E91Cu;
            goto label_31e91c;
        }
    }
    ctx->pc = 0x31E918u;
label_31e918:
    // 0x31e918: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x31e918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_31e91c:
    // 0x31e91c: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x31e91cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e920: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e924: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x31e924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x31e928: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x31e928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x31e92c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31E92Cu;
    {
        const bool branch_taken_0x31e92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E92Cu;
        // 0x31e930: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e92c) {
            ctx->pc = 0x31E964u;
            goto label_31e964;
        }
    }
    ctx->pc = 0x31E934u;
    // 0x31e934: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x31e934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e938: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x31e938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x31e93c: 0x0  nop
    ctx->pc = 0x31e93cu;
    // NOP
label_31e940:
    // 0x31e940: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x31e940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x31e944: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31e944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31e948: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x31e948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e94c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x31e94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31e950: 0x0  nop
    ctx->pc = 0x31e950u;
    // NOP
    // 0x31e954: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31E954u;
    {
        const bool branch_taken_0x31e954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e954) {
            ctx->pc = 0x31E940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e940;
        }
    }
    ctx->pc = 0x31E95Cu;
    // 0x31e95c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x31e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x31e960: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x31e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_31e964:
    // 0x31e964: 0xc0c779e  jal         func_31DE78
    ctx->pc = 0x31E964u;
    SET_GPR_U32(ctx, 31, 0x31E96Cu);
    ctx->pc = 0x31E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E964u;
    // 0x31e968: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE78u, 0x31E964u, 0x31E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E96Cu;
label_31e96c:
    // 0x31e96c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31e96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31e970:
    // 0x31e970: 0x3e00008  jr          $ra
    ctx->pc = 0x31E970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E970u;
        // 0x31e974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E978u;
}
