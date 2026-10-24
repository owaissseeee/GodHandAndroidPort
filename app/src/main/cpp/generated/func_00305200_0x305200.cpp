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

// Function: func_00305200
// Address: 0x305200 - 0x305290
void func_00305200_0x305200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305200_0x305200");
#endif

    switch (ctx->pc) {
        case 0x305240u: goto label_305240;
        case 0x305258u: goto label_305258;
        case 0x30526cu: goto label_30526c;
        default: break;
    }

    ctx->pc = 0x305200u;

    // 0x305200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x305200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x305204: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x305204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x305208: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x305208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30520c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30520cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x305210: 0x245165d8  addiu       $s1, $v0, 0x65D8
    ctx->pc = 0x305210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 26072));
    // 0x305214: 0x8c4365d8  lw          $v1, 0x65D8($v0)
    ctx->pc = 0x305214u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7865D8u));
    // 0x305218: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x305218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30521c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x305220: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x305220u;
    {
        const bool branch_taken_0x305220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x305224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305220u;
        // 0x305224: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305220) {
            ctx->pc = 0x30526Cu;
            goto label_30526c;
        }
    }
    ctx->pc = 0x305228u;
    // 0x305228: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x305228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x30522c: 0x8c6265a8  lw          $v0, 0x65A8($v1)
    ctx->pc = 0x30522cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7865A8u));
    // 0x305230: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x305230u;
    {
        const bool branch_taken_0x305230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305230u;
        // 0x305234: 0x247065a8  addiu       $s0, $v1, 0x65A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305230) {
            ctx->pc = 0x305258u;
            goto label_305258;
        }
    }
    ctx->pc = 0x305238u;
    // 0x305238: 0xc0ad94a  jal         func_2B6528
    ctx->pc = 0x305238u;
    SET_GPR_U32(ctx, 31, 0x305240u);
    ctx->pc = 0x2B6528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6528u, 0x305238u, 0x305240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305240u;
label_305240:
    // 0x305240: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x305240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x305244: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x305244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x305248: 0x24a5fdb8  addiu       $a1, $a1, -0x248
    ctx->pc = 0x305248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966712));
    // 0x30524c: 0x24c60d58  addiu       $a2, $a2, 0xD58
    ctx->pc = 0x30524cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3416));
    // 0x305250: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x305250u;
    SET_GPR_U32(ctx, 31, 0x305258u);
    ctx->pc = 0x305254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305250u;
    // 0x305254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x305250u, 0x305258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305258u;
label_305258:
    // 0x305258: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x305258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x30525c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30525cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305260: 0x24a5fde8  addiu       $a1, $a1, -0x218
    ctx->pc = 0x305260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966760));
    // 0x305264: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x305264u;
    SET_GPR_U32(ctx, 31, 0x30526Cu);
    ctx->pc = 0x305268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305264u;
    // 0x305268: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x305264u, 0x30526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30526Cu;
label_30526c:
    // 0x30526c: 0x264265d8  addiu       $v0, $s2, 0x65D8
    ctx->pc = 0x30526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 26072));
    // 0x305270: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x305270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x305274: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x305274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305278: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x305278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30527c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305280: 0x3e00008  jr          $ra
    ctx->pc = 0x305280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305280u;
        // 0x305284: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305288u;
    // 0x305288: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x305288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30528c: 0x0  nop
    ctx->pc = 0x30528cu;
    // NOP
    ctx->pc = 0x305290u;
}
