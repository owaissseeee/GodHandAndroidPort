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

// Function: cCoreSave_findFreeReelSlot
// Address: 0x1fc210 - 0x1fc278
void cCoreSave_findFreeReelSlot_0x1fc210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_findFreeReelSlot_0x1fc210");
#endif

    switch (ctx->pc) {
        case 0x1fc240u: goto label_1fc240;
        default: break;
    }

    ctx->pc = 0x1fc210u;

    // 0x1fc210: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc214: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC214u;
    {
        const bool branch_taken_0x1fc214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc214) {
            ctx->pc = 0x1FC218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC214u;
            // 0x1fc218: 0x90430098  lbu         $v1, 0x98($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC224u;
            goto label_1fc224;
        }
    }
    ctx->pc = 0x1FC21Cu;
    // 0x1fc21c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC21Cu;
        // 0x1fc220: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC224u;
label_1fc224:
    // 0x1fc224: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1fc224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1fc228: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FC228u;
    {
        const bool branch_taken_0x1fc228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC228u;
        // 0x1fc22c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc228) {
            ctx->pc = 0x1FC264u;
            goto label_1fc264;
        }
    }
    ctx->pc = 0x1FC230u;
    // 0x1fc230: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x1fc230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1fc234: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1fc234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x1fc238: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x1fc238u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x1fc23c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1fc23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fc240:
    // 0x1fc240: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x1fc240u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1fc244: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x1fc244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc248: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC248u;
    {
        const bool branch_taken_0x1fc248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC248u;
        // 0x1fc24c: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc248) {
            ctx->pc = 0x1FC264u;
            goto label_1fc264;
        }
    }
    ctx->pc = 0x1FC250u;
    // 0x1fc250: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc254: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fc254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fc258: 0x90430098  lbu         $v1, 0x98($v0)
    ctx->pc = 0x1fc258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x1fc25c: 0x5468fff8  bnel        $v1, $t0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FC25Cu;
    {
        const bool branch_taken_0x1fc25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x1fc25c) {
            ctx->pc = 0x1FC260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC25Cu;
            // 0x1fc260: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc240;
        }
    }
    ctx->pc = 0x1FC264u;
label_1fc264:
    // 0x1fc264: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fc264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc268: 0x38a3000a  xori        $v1, $a1, 0xA
    ctx->pc = 0x1fc268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)10);
    // 0x1fc26c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC26Cu;
        // 0x1fc270: 0xa3100b  movn        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC274u;
    // 0x1fc274: 0x0  nop
    ctx->pc = 0x1fc274u;
    // NOP
    ctx->pc = 0x1fc278u;
}
