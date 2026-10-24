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

// Function: func_00346228
// Address: 0x346228 - 0x3462a8
void func_00346228_0x346228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346228_0x346228");
#endif

    switch (ctx->pc) {
        case 0x346254u: goto label_346254;
        case 0x346290u: goto label_346290;
        default: break;
    }

    ctx->pc = 0x346228u;

    // 0x346228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34622c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x346230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x346230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346234: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x346234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x346238: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x346238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34623c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x34623cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346240: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x346240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346244: 0x8e0601a4  lw          $a2, 0x1A4($s0)
    ctx->pc = 0x346244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x346248: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x346248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x34624c: 0xc0c916c  jal         func_3245B0
    ctx->pc = 0x34624Cu;
    SET_GPR_U32(ctx, 31, 0x346254u);
    ctx->pc = 0x346250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34624Cu;
    // 0x346250: 0x27a90008  addiu       $t1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245B0u, 0x34624Cu, 0x346254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346254u;
label_346254:
    // 0x346254: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x346254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x346258: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x346258u;
    {
        const bool branch_taken_0x346258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346258u;
        // 0x34625c: 0x24848168  addiu       $a0, $a0, -0x7E98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346258) {
            ctx->pc = 0x346288u;
            goto label_346288;
        }
    }
    ctx->pc = 0x346260u;
    // 0x346260: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x346260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x346264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346268: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x346268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34626c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x34626cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346270: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x346270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
    // 0x346274: 0xae0301b0  sw          $v1, 0x1B0($s0)
    ctx->pc = 0x346274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
    // 0x346278: 0xae0401b4  sw          $a0, 0x1B4($s0)
    ctx->pc = 0x346278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 4));
    // 0x34627c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34627Cu;
    {
        const bool branch_taken_0x34627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34627Cu;
        // 0x346280: 0xae0501b8  sw          $a1, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34627c) {
            ctx->pc = 0x346290u;
            goto label_346290;
        }
    }
    ctx->pc = 0x346284u;
    // 0x346284: 0x0  nop
    ctx->pc = 0x346284u;
    // NOP
label_346288:
    // 0x346288: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x346288u;
    SET_GPR_U32(ctx, 31, 0x346290u);
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x346288u, 0x346290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346290u;
label_346290:
    // 0x346290: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x346290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346294: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x346294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346298: 0x3e00008  jr          $ra
    ctx->pc = 0x346298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346298u;
        // 0x34629c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3462A0u;
    // 0x3462a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3462a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3462a4: 0x0  nop
    ctx->pc = 0x3462a4u;
    // NOP
    ctx->pc = 0x3462a8u;
}
