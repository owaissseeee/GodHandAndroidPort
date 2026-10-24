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

// Function: func_0037D220
// Address: 0x37d220 - 0x37d298
void func_0037D220_0x37d220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D220_0x37d220");
#endif

    switch (ctx->pc) {
        case 0x37d240u: goto label_37d240;
        default: break;
    }

    ctx->pc = 0x37d220u;

    // 0x37d220: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37d220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37d224: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37d224u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37d228: 0x2443b9c0  addiu       $v1, $v0, -0x4640
    ctx->pc = 0x37d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949312));
    // 0x37d22c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x37d22cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x37d230: 0x24660f00  addiu       $a2, $v1, 0xF00
    ctx->pc = 0x37d230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 3840));
    // 0x37d234: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x37d234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x37d238: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x37d238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37d23c: 0x0  nop
    ctx->pc = 0x37d23cu;
    // NOP
label_37d240:
    // 0x37d240: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x37D240u;
    {
        const bool branch_taken_0x37d240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d240) {
            ctx->pc = 0x37D244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D240u;
            // 0x37d244: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D27Cu;
            goto label_37d27c;
        }
    }
    ctx->pc = 0x37D248u;
    // 0x37d248: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x37d248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x37d24c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x37d24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x37d250: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x37D250u;
    {
        const bool branch_taken_0x37d250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d250) {
            ctx->pc = 0x37D254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D250u;
            // 0x37d254: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D27Cu;
            goto label_37d27c;
        }
    }
    ctx->pc = 0x37D258u;
    // 0x37d258: 0x9062000d  lbu         $v0, 0xD($v1)
    ctx->pc = 0x37d258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x37d25c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x37d25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x37d260: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x37D260u;
    {
        const bool branch_taken_0x37d260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d260) {
            ctx->pc = 0x37D264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D260u;
            // 0x37d264: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D27Cu;
            goto label_37d27c;
        }
    }
    ctx->pc = 0x37D268u;
    // 0x37d268: 0x84620020  lh          $v0, 0x20($v1)
    ctx->pc = 0x37d268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x37d26c: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37D26Cu;
    {
        const bool branch_taken_0x37d26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x37d26c) {
            ctx->pc = 0x37D270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D26Cu;
            // 0x37d270: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D27Cu;
            goto label_37d27c;
        }
    }
    ctx->pc = 0x37D274u;
    // 0x37d274: 0x3e00008  jr          $ra
    ctx->pc = 0x37D274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D274u;
        // 0x37d278: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D27Cu;
label_37d27c:
    // 0x37d27c: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x37d27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x37d280: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x37D280u;
    {
        const bool branch_taken_0x37d280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d280) {
            ctx->pc = 0x37D284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D280u;
            // 0x37d284: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d240;
        }
    }
    ctx->pc = 0x37D288u;
    // 0x37d288: 0x3e00008  jr          $ra
    ctx->pc = 0x37D288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D288u;
        // 0x37d28c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D290u;
    // 0x37d290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d294: 0x0  nop
    ctx->pc = 0x37d294u;
    // NOP
    ctx->pc = 0x37d298u;
}
