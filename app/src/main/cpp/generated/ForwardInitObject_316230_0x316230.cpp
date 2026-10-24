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

// Function: ForwardInitObject_316230
// Address: 0x316230 - 0x3162a0
void ForwardInitObject_316230_0x316230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_316230_0x316230");
#endif

    switch (ctx->pc) {
        case 0x316264u: goto label_316264;
        case 0x31627cu: goto label_31627c;
        case 0x316284u: goto label_316284;
        default: break;
    }

    ctx->pc = 0x316230u;

    // 0x316230: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316234: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316238: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316238u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31623c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31623cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316240: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316244: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316248: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316248u;
    {
        const bool branch_taken_0x316248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316248u;
        // 0x31624c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316248) {
            ctx->pc = 0x31628Cu;
            goto label_31628c;
        }
    }
    ctx->pc = 0x316250u;
    // 0x316250: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316254: 0x24040980  addiu       $a0, $zero, 0x980
    ctx->pc = 0x316254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2432));
    // 0x316258: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31625c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31625Cu;
    SET_GPR_U32(ctx, 31, 0x316264u);
    ctx->pc = 0x316260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31625Cu;
    // 0x316260: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31625Cu, 0x316264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316264u;
label_316264:
    // 0x316264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316268: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316268u;
    {
        const bool branch_taken_0x316268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316268u;
        // 0x31626c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316268) {
            ctx->pc = 0x31628Cu;
            goto label_31628c;
        }
    }
    ctx->pc = 0x316270u;
    // 0x316270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316274: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316274u;
    SET_GPR_U32(ctx, 31, 0x31627Cu);
    ctx->pc = 0x316278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316274u;
    // 0x316278: 0x24060980  addiu       $a2, $zero, 0x980 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316274u, 0x31627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31627Cu;
label_31627c:
    // 0x31627c: 0xc06c888  jal         func_1B2220
    ctx->pc = 0x31627Cu;
    SET_GPR_U32(ctx, 31, 0x316284u);
    ctx->pc = 0x316280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31627Cu;
    // 0x316280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2220u, 0x31627Cu, 0x316284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316284u;
label_316284:
    // 0x316284: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316284u;
    {
        const bool branch_taken_0x316284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316284u;
        // 0x316288: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316284) {
            ctx->pc = 0x316294u;
            goto label_316294;
        }
    }
    ctx->pc = 0x31628Cu;
label_31628c:
    // 0x31628c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31628cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316290: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316294:
    // 0x316294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316298: 0x3e00008  jr          $ra
    ctx->pc = 0x316298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316298u;
        // 0x31629c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3162A0u;
}
