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

// Function: cIDBase_buildEntries
// Address: 0x2aa1e0 - 0x2aa2d0
void cIDBase_buildEntries_0x2aa1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_buildEntries_0x2aa1e0");
#endif

    switch (ctx->pc) {
        case 0x2aa22cu: goto label_2aa22c;
        case 0x2aa248u: goto label_2aa248;
        case 0x2aa268u: goto label_2aa268;
        case 0x2aa298u: goto label_2aa298;
        default: break;
    }

    ctx->pc = 0x2aa1e0u;

    // 0x2aa1e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2aa1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2aa1e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2aa1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2aa1e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2aa1e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa1ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2aa1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2aa1f0: 0x240600ac  addiu       $a2, $zero, 0xAC
    ctx->pc = 0x2aa1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x2aa1f4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2aa1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2aa1f8: 0x2660018  mult        $zero, $s3, $a2
    ctx->pc = 0x2aa1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2aa1fc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2aa1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2aa200: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2aa200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2aa204: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2aa204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa208: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2aa208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2aa20c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2aa20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa210: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2aa210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2aa214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aa214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa21c: 0x3012  mflo        $a2
    ctx->pc = 0x2aa21cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2aa220: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2aa220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2aa224: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2AA224u;
    SET_GPR_U32(ctx, 31, 0x2AA22Cu);
    ctx->pc = 0x2AA228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA224u;
    // 0x2aa228: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2AA224u, 0x2AA22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA22Cu;
label_2aa22c:
    // 0x2aa22c: 0x1a60001e  blez        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AA22Cu;
    {
        const bool branch_taken_0x2aa22c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2AA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA22Cu;
        // 0x2aa230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa22c) {
            ctx->pc = 0x2AA2A8u;
            goto label_2aa2a8;
        }
    }
    ctx->pc = 0x2AA234u;
    // 0x2aa234: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x2aa234u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x2aa238: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x2aa238u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x2aa23c: 0x241400ac  addiu       $s4, $zero, 0xAC
    ctx->pc = 0x2aa23cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x2aa240: 0x8ec22384  lw          $v0, 0x2384($s6)
    ctx->pc = 0x2aa240u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x2aa244: 0x0  nop
    ctx->pc = 0x2aa244u;
    // NOP
label_2aa248:
    // 0x2aa248: 0x24b10001  addiu       $s1, $a1, 0x1
    ctx->pc = 0x2aa248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2aa24c: 0x8ea42388  lw          $a0, 0x2388($s5)
    ctx->pc = 0x2aa24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 9096)));
    // 0x2aa250: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2aa250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aa254: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AA254u;
    {
        const bool branch_taken_0x2aa254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA254u;
        // 0x2aa258: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa254) {
            ctx->pc = 0x2AA280u;
            goto label_2aa280;
        }
    }
    ctx->pc = 0x2AA25Cu;
    // 0x2aa25c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA25Cu;
    {
        const bool branch_taken_0x2aa25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA25Cu;
        // 0x2aa260: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa25c) {
            ctx->pc = 0x2AA26Cu;
            goto label_2aa26c;
        }
    }
    ctx->pc = 0x2AA264u;
    // 0x2aa264: 0x0  nop
    ctx->pc = 0x2aa264u;
    // NOP
label_2aa268:
    // 0x2aa268: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2aa26c:
    // 0x2aa26c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2aa26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2aa270: 0x0  nop
    ctx->pc = 0x2aa270u;
    // NOP
    // 0x2aa274: 0x0  nop
    ctx->pc = 0x2aa274u;
    // NOP
    // 0x2aa278: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AA278u;
    {
        const bool branch_taken_0x2aa278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa278) {
            ctx->pc = 0x2AA27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA278u;
            // 0x2aa27c: 0x261002e0  addiu       $s0, $s0, 0x2E0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa268;
        }
    }
    ctx->pc = 0x2AA280u;
label_2aa280:
    // 0x2aa280: 0xb41018  mult        $v0, $a1, $s4
    ctx->pc = 0x2aa280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aa284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aa284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa288: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aa288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa28c: 0x261002e0  addiu       $s0, $s0, 0x2E0
    ctx->pc = 0x2aa28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x2aa290: 0xc0aa8b4  jal         func_2AA2D0
    ctx->pc = 0x2AA290u;
    SET_GPR_U32(ctx, 31, 0x2AA298u);
    ctx->pc = 0x2AA294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA290u;
    // 0x2aa294: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA2D0u, 0x2AA290u, 0x2AA298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA298u;
label_2aa298:
    // 0x2aa298: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aa298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa29c: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x2aa29cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2aa2a0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2AA2A0u;
    {
        const bool branch_taken_0x2aa2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2A0u;
        // 0x2aa2a4: 0x8ec22384  lw          $v0, 0x2384($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 9092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2a0) {
            ctx->pc = 0x2AA248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa248;
        }
    }
    ctx->pc = 0x2AA2A8u;
label_2aa2a8:
    // 0x2aa2a8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2aa2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aa2ac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2aa2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aa2b0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2aa2b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aa2b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2aa2b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa2b8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2aa2b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa2bc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2aa2bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa2c0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2aa2c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa2c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2C8u;
        // 0x2aa2cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA2D0u;
}
