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

// Function: cEmWrap_setAlphaMode
// Address: 0x296230 - 0x2962a8
void cEmWrap_setAlphaMode_0x296230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_setAlphaMode_0x296230");
#endif

    switch (ctx->pc) {
        case 0x29624cu: goto label_29624c;
        case 0x296264u: goto label_296264;
        case 0x296278u: goto label_296278;
        default: break;
    }

    ctx->pc = 0x296230u;

    // 0x296230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296234: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x296234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x296238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29623c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29623cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296244: 0xc0a565e  jal         func_295978
    ctx->pc = 0x296244u;
    SET_GPR_U32(ctx, 31, 0x29624Cu);
    ctx->pc = 0x296248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296244u;
    // 0x296248: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x296244u, 0x29624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29624Cu;
label_29624c:
    // 0x29624c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29624Cu;
    {
        const bool branch_taken_0x29624c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29624Cu;
        // 0x296250: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29624c) {
            ctx->pc = 0x296290u;
            goto label_296290;
        }
    }
    ctx->pc = 0x296254u;
    // 0x296254: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x296254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296258: 0x2484a870  addiu       $a0, $a0, -0x5790
    ctx->pc = 0x296258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944880));
    // 0x29625c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x29625Cu;
    SET_GPR_U32(ctx, 31, 0x296264u);
    ctx->pc = 0x296260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29625Cu;
    // 0x296260: 0x8c4504ac  lw          $a1, 0x4AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x29625Cu, 0x296264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296264u;
label_296264:
    // 0x296264: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x296264u;
    {
        const bool branch_taken_0x296264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296264) {
            ctx->pc = 0x296268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296264u;
            // 0x296268: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296294u;
            goto label_296294;
        }
    }
    ctx->pc = 0x29626Cu;
    // 0x29626c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29626cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296270: 0xc09cf4a  jal         func_273D28
    ctx->pc = 0x296270u;
    SET_GPR_U32(ctx, 31, 0x296278u);
    ctx->pc = 0x296274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296270u;
    // 0x296274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273D28u, 0x296270u, 0x296278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296278u;
label_296278:
    // 0x296278: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x296278u;
    {
        const bool branch_taken_0x296278 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x29627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296278u;
        // 0x29627c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296278) {
            ctx->pc = 0x296288u;
            goto label_296288;
        }
    }
    ctx->pc = 0x296280u;
    // 0x296280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x296280u;
    {
        const bool branch_taken_0x296280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296280u;
        // 0x296284: 0x24021770  addiu       $v0, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296280) {
            ctx->pc = 0x29628Cu;
            goto label_29628c;
        }
    }
    ctx->pc = 0x296288u;
label_296288:
    // 0x296288: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x296288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_29628c:
    // 0x29628c: 0xa46202ae  sh          $v0, 0x2AE($v1)
    ctx->pc = 0x29628cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 686), (uint16_t)GPR_U32(ctx, 2));
label_296290:
    // 0x296290: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x296290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_296294:
    // 0x296294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29629c: 0x3e00008  jr          $ra
    ctx->pc = 0x29629Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2962A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29629Cu;
        // 0x2962a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29629Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2962A4u;
    // 0x2962a4: 0x0  nop
    ctx->pc = 0x2962a4u;
    // NOP
    ctx->pc = 0x2962a8u;
}
