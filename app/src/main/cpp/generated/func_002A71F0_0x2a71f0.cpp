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

// Function: func_002A71F0
// Address: 0x2a71f0 - 0x2a7280
void func_002A71F0_0x2a71f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A71F0_0x2a71f0");
#endif

    switch (ctx->pc) {
        case 0x2a71f0u: goto label_2a71f0;
        case 0x2a71f4u: goto label_2a71f4;
        case 0x2a71f8u: goto label_2a71f8;
        case 0x2a71fcu: goto label_2a71fc;
        case 0x2a7200u: goto label_2a7200;
        case 0x2a7204u: goto label_2a7204;
        case 0x2a7208u: goto label_2a7208;
        case 0x2a720cu: goto label_2a720c;
        case 0x2a7210u: goto label_2a7210;
        case 0x2a7214u: goto label_2a7214;
        case 0x2a7218u: goto label_2a7218;
        case 0x2a721cu: goto label_2a721c;
        case 0x2a7220u: goto label_2a7220;
        case 0x2a7224u: goto label_2a7224;
        case 0x2a7228u: goto label_2a7228;
        case 0x2a722cu: goto label_2a722c;
        case 0x2a7230u: goto label_2a7230;
        case 0x2a7234u: goto label_2a7234;
        case 0x2a7238u: goto label_2a7238;
        case 0x2a723cu: goto label_2a723c;
        case 0x2a7240u: goto label_2a7240;
        case 0x2a7244u: goto label_2a7244;
        case 0x2a7248u: goto label_2a7248;
        case 0x2a724cu: goto label_2a724c;
        case 0x2a7250u: goto label_2a7250;
        case 0x2a7254u: goto label_2a7254;
        case 0x2a7258u: goto label_2a7258;
        case 0x2a725cu: goto label_2a725c;
        case 0x2a7260u: goto label_2a7260;
        case 0x2a7264u: goto label_2a7264;
        case 0x2a7268u: goto label_2a7268;
        case 0x2a726cu: goto label_2a726c;
        case 0x2a7270u: goto label_2a7270;
        case 0x2a7274u: goto label_2a7274;
        case 0x2a7278u: goto label_2a7278;
        case 0x2a727cu: goto label_2a727c;
        default: break;
    }

    ctx->pc = 0x2a71f0u;

label_2a71f0:
    // 0x2a71f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a71f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a71f4:
    // 0x2a71f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a71f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2a71f8:
    // 0x2a71f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a71f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a71fc:
    // 0x2a71fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a71fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a7200:
    // 0x2a7200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a7200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a7204:
    // 0x2a7204: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a7204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a7208:
    // 0x2a7208: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_2a720c:
    if (ctx->pc == 0x2A720Cu) {
        ctx->pc = 0x2A720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7208u;
        // 0x2a720c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7210u;
        goto label_2a7210;
    }
    ctx->pc = 0x2A7208u;
    {
        const bool branch_taken_0x2a7208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7208) {
            ctx->pc = 0x2A720Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7208u;
            // 0x2a720c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A726Cu;
            goto label_2a726c;
        }
    }
    ctx->pc = 0x2A7210u;
label_2a7210:
    // 0x2a7210: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a7214:
    // 0x2a7214: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2a7218:
    if (ctx->pc == 0x2A7218u) {
        ctx->pc = 0x2A7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7214u;
        // 0x2a7218: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A721Cu;
        goto label_2a721c;
    }
    ctx->pc = 0x2A7214u;
    {
        const bool branch_taken_0x2a7214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7214u;
        // 0x2a7218: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7214) {
            ctx->pc = 0x2A7268u;
            goto label_2a7268;
        }
    }
    ctx->pc = 0x2A721Cu;
label_2a721c:
    // 0x2a721c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a7220:
    // 0x2a7220: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a7220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a7224:
    // 0x2a7224: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x2a7224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a7228:
    // 0x2a7228: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2a7228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a722c:
    // 0x2a722c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a7230:
    // 0x2a7230: 0x30420201  andi        $v0, $v0, 0x201
    ctx->pc = 0x2a7230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)513);
label_2a7234:
    // 0x2a7234: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a7234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a7238:
    // 0x2a7238: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2a723c:
    if (ctx->pc == 0x2A723Cu) {
        ctx->pc = 0x2A723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7238u;
        // 0x2a723c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7240u;
        goto label_2a7240;
    }
    ctx->pc = 0x2A7238u;
    {
        const bool branch_taken_0x2a7238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7238) {
            ctx->pc = 0x2A723Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7238u;
            // 0x2a723c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7258u;
            goto label_2a7258;
        }
    }
    ctx->pc = 0x2A7240u;
label_2a7240:
    // 0x2a7240: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2a7240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2a7244:
    // 0x2a7244: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2a7244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2a7248:
    // 0x2a7248: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2a7248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2a724c:
    // 0x2a724c: 0x60f809  jalr        $v1
label_2a7250:
    if (ctx->pc == 0x2A7250u) {
        ctx->pc = 0x2A7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A724Cu;
        // 0x2a7250: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7254u;
        goto label_2a7254;
    }
    ctx->pc = 0x2A724Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A7254u);
        ctx->pc = 0x2A7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A724Cu;
        // 0x2a7250: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A724Cu, 0x2A7254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A7254u;
label_2a7254:
    // 0x2a7254: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a7254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a7258:
    // 0x2a7258: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a7258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a725c:
    // 0x2a725c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2a725cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a7260:
    // 0x2a7260: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_2a7264:
    if (ctx->pc == 0x2A7264u) {
        ctx->pc = 0x2A7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7260u;
        // 0x2a7264: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7268u;
        goto label_2a7268;
    }
    ctx->pc = 0x2A7260u;
    {
        const bool branch_taken_0x2a7260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7260) {
            ctx->pc = 0x2A7264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7260u;
            // 0x2a7264: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7220;
        }
    }
    ctx->pc = 0x2A7268u;
label_2a7268:
    // 0x2a7268: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a7268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a726c:
    // 0x2a726c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a726cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7270:
    // 0x2a7270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a7274:
    // 0x2a7274: 0x3e00008  jr          $ra
label_2a7278:
    if (ctx->pc == 0x2A7278u) {
        ctx->pc = 0x2A7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7274u;
        // 0x2a7278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A727Cu;
        goto label_2a727c;
    }
    ctx->pc = 0x2A7274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7274u;
        // 0x2a7278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A727Cu;
label_2a727c:
    // 0x2a727c: 0x0  nop
    ctx->pc = 0x2a727cu;
    // NOP
    ctx->pc = 0x2a7280u;
}
