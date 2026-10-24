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

// Function: func_0030A200
// Address: 0x30a200 - 0x30a298
void func_0030A200_0x30a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030A200_0x30a200");
#endif

    switch (ctx->pc) {
        case 0x30a244u: goto label_30a244;
        case 0x30a254u: goto label_30a254;
        case 0x30a268u: goto label_30a268;
        case 0x30a278u: goto label_30a278;
        default: break;
    }

    ctx->pc = 0x30a200u;

    // 0x30a200: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x30a200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x30a204: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30a204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30a208: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x30a208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30a20c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x30a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x30a210: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30a210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30a214: 0x24427ba0  addiu       $v0, $v0, 0x7BA0
    ctx->pc = 0x30a214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31648));
    // 0x30a218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30a218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30a21c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30a21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a220: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x30a220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30a224: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x30a224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x30a228: 0x54650014  bnel        $v1, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30A228u;
    {
        const bool branch_taken_0x30a228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x30a228) {
            ctx->pc = 0x30A22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A228u;
            // 0x30a22c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A27Cu;
            goto label_30a27c;
        }
    }
    ctx->pc = 0x30A230u;
    // 0x30a230: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30a230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30a234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30a234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a238: 0x3484a000  ori         $a0, $a0, 0xA000
    ctx->pc = 0x30a238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    // 0x30a23c: 0xc0e5d54  jal         func_397550
    ctx->pc = 0x30A23Cu;
    SET_GPR_U32(ctx, 31, 0x30A244u);
    ctx->pc = 0x30A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A23Cu;
    // 0x30a240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397550u, 0x30A23Cu, 0x30A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A244u;
label_30a244:
    // 0x30a244: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x30a244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30a248: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30a248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30a24c: 0xc0e5cfa  jal         func_3973E8
    ctx->pc = 0x30A24Cu;
    SET_GPR_U32(ctx, 31, 0x30A254u);
    ctx->pc = 0x30A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A24Cu;
    // 0x30a250: 0x3484a000  ori         $a0, $a0, 0xA000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3973E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3973E8u, 0x30A24Cu, 0x30A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A254u;
label_30a254:
    // 0x30a254: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30a254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30a258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30a258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a25c: 0x3484a000  ori         $a0, $a0, 0xA000
    ctx->pc = 0x30a25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    // 0x30a260: 0xc0e5d54  jal         func_397550
    ctx->pc = 0x30A260u;
    SET_GPR_U32(ctx, 31, 0x30A268u);
    ctx->pc = 0x30A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A260u;
    // 0x30a264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397550u, 0x30A260u, 0x30A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A268u;
label_30a268:
    // 0x30a268: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30a268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30a26c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x30a26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x30a270: 0xc0e5cfa  jal         func_3973E8
    ctx->pc = 0x30A270u;
    SET_GPR_U32(ctx, 31, 0x30A278u);
    ctx->pc = 0x30A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A270u;
    // 0x30a274: 0x3484a000  ori         $a0, $a0, 0xA000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3973E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3973E8u, 0x30A270u, 0x30A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A278u;
label_30a278:
    // 0x30a278: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30a278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30a27c:
    // 0x30a27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30a27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a280: 0x3e00008  jr          $ra
    ctx->pc = 0x30A280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A280u;
        // 0x30a284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A288u;
    // 0x30a288: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30a288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30a28c: 0x0  nop
    ctx->pc = 0x30a28cu;
    // NOP
    // 0x30a290: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30a294: 0x0  nop
    ctx->pc = 0x30a294u;
    // NOP
    ctx->pc = 0x30a298u;
}
