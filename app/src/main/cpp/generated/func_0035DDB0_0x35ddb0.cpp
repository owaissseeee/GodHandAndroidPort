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

// Function: func_0035DDB0
// Address: 0x35ddb0 - 0x35de38
void func_0035DDB0_0x35ddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035DDB0_0x35ddb0");
#endif

    switch (ctx->pc) {
        case 0x35ddf0u: goto label_35ddf0;
        default: break;
    }

    ctx->pc = 0x35ddb0u;

    // 0x35ddb0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x35ddb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ddb4: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x35ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x35ddb8: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x35DDB8u;
    {
        const bool branch_taken_0x35ddb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DDB8u;
        // 0x35ddbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ddb8) {
            ctx->pc = 0x35DE2Cu;
            goto label_35de2c;
        }
    }
    ctx->pc = 0x35DDC0u;
    // 0x35ddc0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x35ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x35ddc4: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x35DDC4u;
    {
        const bool branch_taken_0x35ddc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35ddc4) {
            ctx->pc = 0x35DDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DDC4u;
            // 0x35ddc8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DE30u;
            goto label_35de30;
        }
    }
    ctx->pc = 0x35DDCCu;
    // 0x35ddcc: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x35DDCCu;
    {
        const bool branch_taken_0x35ddcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ddcc) {
            ctx->pc = 0x35DDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DDCCu;
            // 0x35ddd0: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DE30u;
            goto label_35de30;
        }
    }
    ctx->pc = 0x35DDD4u;
    // 0x35ddd4: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x35ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x35ddd8: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x35ddd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x35dddc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x35DDDCu;
    {
        const bool branch_taken_0x35dddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dddc) {
            ctx->pc = 0x35DDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DDDCu;
            // 0x35dde0: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DE30u;
            goto label_35de30;
        }
    }
    ctx->pc = 0x35DDE4u;
    // 0x35dde4: 0x2408002e  addiu       $t0, $zero, 0x2E
    ctx->pc = 0x35dde4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x35dde8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x35dde8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x35ddec: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x35ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_35ddf0:
    // 0x35ddf0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35ddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35ddf4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x35ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x35ddf8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x35ddfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35de00: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x35de00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35de04: 0x2446ffd0  addiu       $a2, $v0, -0x30
    ctx->pc = 0x35de04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x35de08: 0x10680008  beq         $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35DE08u;
    {
        const bool branch_taken_0x35de08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x35DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE08u;
        // 0x35de0c: 0x2462ffd0  addiu       $v0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35de08) {
            ctx->pc = 0x35DE2Cu;
            goto label_35de2c;
        }
    }
    ctx->pc = 0x35DE10u;
    // 0x35de10: 0x50670007  beql        $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x35DE10u;
    {
        const bool branch_taken_0x35de10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x35de10) {
            ctx->pc = 0x35DE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DE10u;
            // 0x35de14: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DE30u;
            goto label_35de30;
        }
    }
    ctx->pc = 0x35DE18u;
    // 0x35de18: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35DE18u;
    {
        const bool branch_taken_0x35de18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35de18) {
            ctx->pc = 0x35DE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DE18u;
            // 0x35de1c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DE30u;
            goto label_35de30;
        }
    }
    ctx->pc = 0x35DE20u;
    // 0x35de20: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x35de20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x35de24: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x35DE24u;
    {
        const bool branch_taken_0x35de24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35de24) {
            ctx->pc = 0x35DE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DE24u;
            // 0x35de28: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ddf0;
        }
    }
    ctx->pc = 0x35DE2Cu;
label_35de2c:
    // 0x35de2c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x35de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_35de30:
    // 0x35de30: 0x3e00008  jr          $ra
    ctx->pc = 0x35DE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE30u;
        // 0x35de34: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DE38u;
}
