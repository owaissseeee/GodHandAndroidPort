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

// Function: func_0026F200
// Address: 0x26f200 - 0x26f2b8
void func_0026F200_0x26f200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026F200_0x26f200");
#endif

    switch (ctx->pc) {
        case 0x26f230u: goto label_26f230;
        case 0x26f238u: goto label_26f238;
        case 0x26f2a4u: goto label_26f2a4;
        default: break;
    }

    ctx->pc = 0x26f200u;

    // 0x26f200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26f200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26f204: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26f204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f208: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26f208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26f20c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26f210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f214: 0xc60016c0  lwc1        $f0, 0x16C0($s0)
    ctx->pc = 0x26f214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f218: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26f218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f21c: 0x0  nop
    ctx->pc = 0x26f21cu;
    // NOP
    // 0x26f220: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x26F220u;
    {
        const bool branch_taken_0x26f220 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F220u;
        // 0x26f224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f220) {
            ctx->pc = 0x26F2A8u;
            goto label_26f2a8;
        }
    }
    ctx->pc = 0x26F228u;
    // 0x26f228: 0xc09bcca  jal         func_26F328
    ctx->pc = 0x26F228u;
    SET_GPR_U32(ctx, 31, 0x26F230u);
    ctx->pc = 0x26F22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F228u;
    // 0x26f22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F328u, 0x26F228u, 0x26F230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F230u;
label_26f230:
    // 0x26f230: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F230u;
    {
        const bool branch_taken_0x26f230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f230) {
            ctx->pc = 0x26F234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F230u;
            // 0x26f234: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F240u;
            goto label_26f240;
        }
    }
    ctx->pc = 0x26F238u;
label_26f238:
    // 0x26f238: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26F238u;
    {
        const bool branch_taken_0x26f238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F238u;
        // 0x26f23c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f238) {
            ctx->pc = 0x26F2A8u;
            goto label_26f2a8;
        }
    }
    ctx->pc = 0x26F240u;
label_26f240:
    // 0x26f240: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x26f240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x26f244: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26f244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26f248: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26F248u;
    {
        const bool branch_taken_0x26f248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F248u;
        // 0x26f24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f248) {
            ctx->pc = 0x26F2A8u;
            goto label_26f2a8;
        }
    }
    ctx->pc = 0x26F250u;
    // 0x26f250: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x26f250u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x26f254: 0x1840fff8  blez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26F254u;
    {
        const bool branch_taken_0x26f254 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x26F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F254u;
        // 0x26f258: 0x24020256  addiu       $v0, $zero, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f254) {
            ctx->pc = 0x26F238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f238;
        }
    }
    ctx->pc = 0x26F25Cu;
    // 0x26f25c: 0x8e050564  lw          $a1, 0x564($s0)
    ctx->pc = 0x26f25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x26f260: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F260u;
    {
        const bool branch_taken_0x26f260 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f260) {
            ctx->pc = 0x26F264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F260u;
            // 0x26f264: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F280u;
            goto label_26f280;
        }
    }
    ctx->pc = 0x26F268u;
    // 0x26f268: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x26f268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x26f26c: 0x24040406  addiu       $a0, $zero, 0x406
    ctx->pc = 0x26f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    // 0x26f270: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x26f270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x26f274: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x26F274u;
    {
        const bool branch_taken_0x26f274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x26F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F274u;
        // 0x26f278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f274) {
            ctx->pc = 0x26F2A8u;
            goto label_26f2a8;
        }
    }
    ctx->pc = 0x26F27Cu;
    // 0x26f27c: 0x24020218  addiu       $v0, $zero, 0x218
    ctx->pc = 0x26f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
label_26f280:
    // 0x26f280: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F280u;
    {
        const bool branch_taken_0x26f280 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x26F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F280u;
        // 0x26f284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f280) {
            ctx->pc = 0x26F29Cu;
            goto label_26f29c;
        }
    }
    ctx->pc = 0x26F288u;
    // 0x26f288: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x26f288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x26f28c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f290: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x26f290u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x26f294: 0x1064ffe8  beq         $v1, $a0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x26F294u;
    {
        const bool branch_taken_0x26f294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x26F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F294u;
        // 0x26f298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f294) {
            ctx->pc = 0x26F238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f238;
        }
    }
    ctx->pc = 0x26F29Cu;
label_26f29c:
    // 0x26f29c: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x26F29Cu;
    SET_GPR_U32(ctx, 31, 0x26F2A4u);
    ctx->pc = 0x26F2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F29Cu;
    // 0x26f2a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ECD0u, 0x26F29Cu, 0x26F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F2A4u;
label_26f2a4:
    // 0x26f2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f2a8:
    // 0x26f2a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26f2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f2ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x26F2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2B0u;
        // 0x26f2b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F2B8u;
}
