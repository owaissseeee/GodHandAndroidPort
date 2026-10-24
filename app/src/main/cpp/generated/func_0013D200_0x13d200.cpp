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

// Function: func_0013D200
// Address: 0x13d200 - 0x13d288
void func_0013D200_0x13d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013D200_0x13d200");
#endif

    ctx->pc = 0x13d200u;

    // 0x13d200: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x13d200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x13d204: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13d204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13d208: 0x244574a0  addiu       $a1, $v0, 0x74A0
    ctx->pc = 0x13d208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x13d20c: 0x94a205b0  lhu         $v0, 0x5B0($a1)
    ctx->pc = 0x13d20cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x747A50u));
    // 0x13d210: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x13D210u;
    {
        const bool branch_taken_0x13d210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13d210) {
            ctx->pc = 0x13D280u;
            goto label_13d280;
        }
    }
    ctx->pc = 0x13D218u;
    // 0x13d218: 0x90820093  lbu         $v0, 0x93($a0)
    ctx->pc = 0x13d218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 147)));
    // 0x13d21c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13D21Cu;
    {
        const bool branch_taken_0x13d21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D21Cu;
        // 0x13d220: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d21c) {
            ctx->pc = 0x13D280u;
            goto label_13d280;
        }
    }
    ctx->pc = 0x13D224u;
    // 0x13d224: 0x8ca205e4  lw          $v0, 0x5E4($a1)
    ctx->pc = 0x13d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1508)));
    // 0x13d228: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13d228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13d22c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D22Cu;
    {
        const bool branch_taken_0x13d22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d22c) {
            ctx->pc = 0x13D230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D22Cu;
            // 0x13d230: 0x90820092  lbu         $v0, 0x92($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D240u;
            goto label_13d240;
        }
    }
    ctx->pc = 0x13D234u;
    // 0x13d234: 0x94820090  lhu         $v0, 0x90($a0)
    ctx->pc = 0x13d234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x13d238: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13D238u;
    {
        const bool branch_taken_0x13d238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D238u;
        // 0x13d23c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d238) {
            ctx->pc = 0x13D254u;
            goto label_13d254;
        }
    }
    ctx->pc = 0x13D240u;
label_13d240:
    // 0x13d240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D240u;
    {
        const bool branch_taken_0x13d240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D240u;
        // 0x13d244: 0x94820090  lhu         $v0, 0x90($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d240) {
            ctx->pc = 0x13D250u;
            goto label_13d250;
        }
    }
    ctx->pc = 0x13D248u;
    // 0x13d248: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13D248u;
    {
        const bool branch_taken_0x13d248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D248u;
        // 0x13d24c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d248) {
            ctx->pc = 0x13D254u;
            goto label_13d254;
        }
    }
    ctx->pc = 0x13D250u;
label_13d250:
    // 0x13d250: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13d250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13d254:
    // 0x13d254: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x13d254u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x13d258: 0x84820090  lh          $v0, 0x90($a0)
    ctx->pc = 0x13d258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x13d25c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D25Cu;
    {
        const bool branch_taken_0x13d25c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x13D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D25Cu;
        // 0x13d260: 0x94830090  lhu         $v1, 0x90($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d25c) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13D264u;
    // 0x13d264: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x13d264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x13d268: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D268u;
    {
        const bool branch_taken_0x13d268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d268) {
            ctx->pc = 0x13D26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D268u;
            // 0x13d26c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D27Cu;
            goto label_13d27c;
        }
    }
    ctx->pc = 0x13D270u;
    // 0x13d270: 0x3e00008  jr          $ra
    ctx->pc = 0x13D270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D270u;
        // 0x13d274: 0xa4830090  sh          $v1, 0x90($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D278u;
label_13d278:
    // 0x13d278: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13d278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d27c:
    // 0x13d27c: 0xa4830090  sh          $v1, 0x90($a0)
    ctx->pc = 0x13d27cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
label_13d280:
    // 0x13d280: 0x3e00008  jr          $ra
    ctx->pc = 0x13D280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D288u;
}
