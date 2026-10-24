#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: litodp
// Address: 0x79d550 - 0x79d608
void litodp_0x79d550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("litodp_0x79d550");
#endif

    switch (ctx->pc) {
        case 0x79d5d0u: goto label_79d5d0;
        case 0x79d5fcu: goto label_79d5fc;
        default: break;
    }

    ctx->pc = 0x79d550u;

    // 0x79d550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79d550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79d554: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79d554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79d558: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x79d558u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x79d55c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79d55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79d560: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x79d560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x79d564: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79D564u;
    {
        const bool branch_taken_0x79d564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D564u;
        // 0x79d568: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d564) {
            ctx->pc = 0x79D578u;
            goto label_79d578;
        }
    }
    ctx->pc = 0x79D56Cu;
    // 0x79d56c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79d570: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79D570u;
    {
        const bool branch_taken_0x79d570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D570u;
        // 0x79d574: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d570) {
            ctx->pc = 0x79D5F4u;
            goto label_79d5f4;
        }
    }
    ctx->pc = 0x79D578u;
label_79d578:
    // 0x79d578: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x79d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x79d57c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x79D57Cu;
    {
        const bool branch_taken_0x79d57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D57Cu;
        // 0x79d580: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d57c) {
            ctx->pc = 0x79D5A8u;
            goto label_79d5a8;
        }
    }
    ctx->pc = 0x79D584u;
    // 0x79d584: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x79d584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x79d588: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D588u;
    {
        const bool branch_taken_0x79d588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x79D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D588u;
        // 0x79d58c: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d588) {
            ctx->pc = 0x79D5A0u;
            goto label_79d5a0;
        }
    }
    ctx->pc = 0x79D590u;
    // 0x79d590: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x79d590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x79d594: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x79d594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x79d598: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x79D598u;
    {
        const bool branch_taken_0x79d598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D598u;
        // 0x79d59c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d598) {
            ctx->pc = 0x79D600u;
            goto label_79d600;
        }
    }
    ctx->pc = 0x79D5A0u;
label_79d5a0:
    // 0x79d5a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79D5A0u;
    {
        const bool branch_taken_0x79d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D5A0u;
        // 0x79d5a4: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d5a0) {
            ctx->pc = 0x79D5ACu;
            goto label_79d5ac;
        }
    }
    ctx->pc = 0x79D5A8u;
label_79d5a8:
    // 0x79d5a8: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x79d5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_79d5ac:
    // 0x79d5ac: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x79d5acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79d5b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79d5b4: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x79d5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x79d5b8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x79d5b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x79d5bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79D5BCu;
    {
        const bool branch_taken_0x79d5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D5BCu;
        // 0x79d5c0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d5bc) {
            ctx->pc = 0x79D5F4u;
            goto label_79d5f4;
        }
    }
    ctx->pc = 0x79D5C4u;
    // 0x79d5c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79d5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79d5c8: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x79d5c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x79d5cc: 0x0  nop
    ctx->pc = 0x79d5ccu;
    // NOP
label_79d5d0:
    // 0x79d5d0: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x79d5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x79d5d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x79d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x79d5d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x79d5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d5dc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x79d5dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79d5e0: 0x0  nop
    ctx->pc = 0x79d5e0u;
    // NOP
    // 0x79d5e4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79D5E4u;
    {
        const bool branch_taken_0x79d5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79d5e4) {
            ctx->pc = 0x79D5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d5d0;
        }
    }
    ctx->pc = 0x79D5ECu;
    // 0x79d5ec: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x79d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x79d5f0: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x79d5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_79d5f4:
    // 0x79d5f4: 0xc1e72c2  jal         func_79CB08
    ctx->pc = 0x79D5F4u;
    SET_GPR_U32(ctx, 31, 0x79D5FCu);
    ctx->pc = 0x79D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D5F4u;
    // 0x79d5f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CB08u, 0x79D5F4u, 0x79D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D5FCu;
label_79d5fc:
    // 0x79d5fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79d5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79d600:
    // 0x79d600: 0x3e00008  jr          $ra
    ctx->pc = 0x79D600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D600u;
        // 0x79d604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D608u;
}
} // namespace gh_r501
