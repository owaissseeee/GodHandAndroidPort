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

// Function: arrayAlloc
// Address: 0x2ba1c8 - 0x2ba250
void arrayAlloc_0x2ba1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("arrayAlloc_0x2ba1c8");
#endif

    switch (ctx->pc) {
        case 0x2ba1c8u: goto label_2ba1c8;
        case 0x2ba1ccu: goto label_2ba1cc;
        case 0x2ba1d0u: goto label_2ba1d0;
        case 0x2ba1d4u: goto label_2ba1d4;
        case 0x2ba1d8u: goto label_2ba1d8;
        case 0x2ba1dcu: goto label_2ba1dc;
        case 0x2ba1e0u: goto label_2ba1e0;
        case 0x2ba1e4u: goto label_2ba1e4;
        case 0x2ba1e8u: goto label_2ba1e8;
        case 0x2ba1ecu: goto label_2ba1ec;
        case 0x2ba1f0u: goto label_2ba1f0;
        case 0x2ba1f4u: goto label_2ba1f4;
        case 0x2ba1f8u: goto label_2ba1f8;
        case 0x2ba1fcu: goto label_2ba1fc;
        case 0x2ba200u: goto label_2ba200;
        case 0x2ba204u: goto label_2ba204;
        case 0x2ba208u: goto label_2ba208;
        case 0x2ba20cu: goto label_2ba20c;
        case 0x2ba210u: goto label_2ba210;
        case 0x2ba214u: goto label_2ba214;
        case 0x2ba218u: goto label_2ba218;
        case 0x2ba21cu: goto label_2ba21c;
        case 0x2ba220u: goto label_2ba220;
        case 0x2ba224u: goto label_2ba224;
        case 0x2ba228u: goto label_2ba228;
        case 0x2ba22cu: goto label_2ba22c;
        case 0x2ba230u: goto label_2ba230;
        case 0x2ba234u: goto label_2ba234;
        case 0x2ba238u: goto label_2ba238;
        case 0x2ba23cu: goto label_2ba23c;
        case 0x2ba240u: goto label_2ba240;
        case 0x2ba244u: goto label_2ba244;
        case 0x2ba248u: goto label_2ba248;
        case 0x2ba24cu: goto label_2ba24c;
        default: break;
    }

    ctx->pc = 0x2ba1c8u;

label_2ba1c8:
    // 0x2ba1c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ba1cc:
    // 0x2ba1cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ba1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ba1d0:
    // 0x2ba1d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ba1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba1d4:
    // 0x2ba1d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ba1d8:
    // 0x2ba1d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ba1dc:
    // 0x2ba1dc: 0xc0a9ca0  jal         func_2A7280
label_2ba1e0:
    if (ctx->pc == 0x2BA1E0u) {
        ctx->pc = 0x2BA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1DCu;
        // 0x2ba1e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1E4u;
        goto label_2ba1e4;
    }
    ctx->pc = 0x2BA1DCu;
    SET_GPR_U32(ctx, 31, 0x2BA1E4u);
    ctx->pc = 0x2BA1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA1DCu;
    // 0x2ba1e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7280u, 0x2BA1DCu, 0x2BA1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA1E4u;
label_2ba1e4:
    // 0x2ba1e4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ba1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ba1e8:
    // 0x2ba1e8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2ba1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2ba1ec:
    // 0x2ba1ec: 0xb10018  mult        $zero, $a1, $s1
    ctx->pc = 0x2ba1ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ba1f0:
    // 0x2ba1f0: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x2ba1f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_2ba1f4:
    // 0x2ba1f4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2ba1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2ba1f8:
    // 0x2ba1f8: 0x2812  mflo        $a1
    ctx->pc = 0x2ba1f8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_2ba1fc:
    // 0x2ba1fc: 0x40f809  jalr        $v0
label_2ba200:
    if (ctx->pc == 0x2BA200u) {
        ctx->pc = 0x2BA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1FCu;
        // 0x2ba200: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA204u;
        goto label_2ba204;
    }
    ctx->pc = 0x2BA1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BA204u);
        ctx->pc = 0x2BA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1FCu;
        // 0x2ba200: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA1FCu, 0x2BA204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA204u;
label_2ba204:
    // 0x2ba204: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2ba204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_2ba208:
    // 0x2ba208: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_2ba20c:
    if (ctx->pc == 0x2BA20Cu) {
        ctx->pc = 0x2BA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA208u;
        // 0x2ba20c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA210u;
        goto label_2ba210;
    }
    ctx->pc = 0x2BA208u;
    {
        const bool branch_taken_0x2ba208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA208u;
        // 0x2ba20c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba208) {
            ctx->pc = 0x2BA234u;
            goto label_2ba234;
        }
    }
    ctx->pc = 0x2BA210u;
label_2ba210:
    // 0x2ba210: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2ba210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ba214:
    // 0x2ba214: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba218:
    // 0x2ba218: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2ba218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2ba21c:
    // 0x2ba21c: 0xd10018  mult        $zero, $a2, $s1
    ctx->pc = 0x2ba21cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ba220:
    // 0x2ba220: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2ba220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2ba224:
    // 0x2ba224: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2ba224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2ba228:
    // 0x2ba228: 0x3012  mflo        $a2
    ctx->pc = 0x2ba228u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_2ba22c:
    // 0x2ba22c: 0x60f809  jalr        $v1
label_2ba230:
    if (ctx->pc == 0x2BA230u) {
        ctx->pc = 0x2BA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA22Cu;
        // 0x2ba230: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA234u;
        goto label_2ba234;
    }
    ctx->pc = 0x2BA22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BA234u);
        ctx->pc = 0x2BA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA22Cu;
        // 0x2ba230: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA22Cu, 0x2BA234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA234u;
label_2ba234:
    // 0x2ba234: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ba234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba238:
    // 0x2ba238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ba23c:
    // 0x2ba23c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba240:
    // 0x2ba240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba244:
    // 0x2ba244: 0x3e00008  jr          $ra
label_2ba248:
    if (ctx->pc == 0x2BA248u) {
        ctx->pc = 0x2BA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA244u;
        // 0x2ba248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA24Cu;
        goto label_2ba24c;
    }
    ctx->pc = 0x2BA244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA244u;
        // 0x2ba248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA24Cu;
label_2ba24c:
    // 0x2ba24c: 0x0  nop
    ctx->pc = 0x2ba24cu;
    // NOP
    ctx->pc = 0x2ba250u;
}
