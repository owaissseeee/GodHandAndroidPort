#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcWriteFast
// Address: 0x7cf1e8 - 0x7cf2e8
void sceMcWriteFast_0x7cf1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcWriteFast_0x7cf1e8");
#endif

    switch (ctx->pc) {
        case 0x7cf238u: goto label_7cf238;
        case 0x7cf270u: goto label_7cf270;
        case 0x7cf2a0u: goto label_7cf2a0;
        case 0x7cf2c0u: goto label_7cf2c0;
        default: break;
    }

    ctx->pc = 0x7cf1e8u;

    // 0x7cf1e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7cf1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7cf1ec: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cf1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cf1f0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7cf1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x7cf1f4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7cf1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7cf1f8: 0x24541980  addiu       $s4, $v0, 0x1980
    ctx->pc = 0x7cf1f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x7cf1fc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7cf1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7cf200: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7cf200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf204: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7cf204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7cf208: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x7cf208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf20c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x7cf20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x7cf210: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7cf210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x7cf214: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7cf214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7cf218: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x7cf218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7cf21c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CF21Cu;
    {
        const bool branch_taken_0x7cf21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF21Cu;
        // 0x7cf220: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf21c) {
            ctx->pc = 0x7CF22Cu;
            goto label_7cf22c;
        }
    }
    ctx->pc = 0x7CF224u;
    // 0x7cf224: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x7CF224u;
    {
        const bool branch_taken_0x7cf224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF224u;
        // 0x7cf228: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf224) {
            ctx->pc = 0x7CF2C4u;
            goto label_7cf2c4;
        }
    }
    ctx->pc = 0x7CF22Cu;
label_7cf22c:
    // 0x7cf22c: 0x3c15007d  lui         $s5, 0x7D
    ctx->pc = 0x7cf22cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)125 << 16));
    // 0x7cf230: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CF230u;
    SET_GPR_U32(ctx, 31, 0x7CF238u);
    ctx->pc = 0x7CF234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF230u;
    // 0x7cf234: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CF230u, 0x7CF238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF238u;
label_7cf238:
    // 0x7cf238: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CF238u;
    {
        const bool branch_taken_0x7cf238 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CF23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF238u;
        // 0x7cf23c: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf238) {
            ctx->pc = 0x7CF248u;
            goto label_7cf248;
        }
    }
    ctx->pc = 0x7CF240u;
    // 0x7cf240: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x7CF240u;
    {
        const bool branch_taken_0x7cf240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CF244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF240u;
        // 0x7cf244: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf240) {
            ctx->pc = 0x7CF2C4u;
            goto label_7cf2c4;
        }
    }
    ctx->pc = 0x7CF248u;
label_7cf248:
    // 0x7cf248: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cf248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cf24c: 0x24701a00  addiu       $s0, $v1, 0x1A00
    ctx->pc = 0x7cf24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6656));
    // 0x7cf250: 0x24421e80  addiu       $v0, $v0, 0x1E80
    ctx->pc = 0x7cf250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
    // 0x7cf254: 0xac731a00  sw          $s3, 0x1A00($v1)
    ctx->pc = 0x7cf254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6656), GPR_U32(ctx, 19));
    // 0x7cf258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7cf258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf25c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x7cf25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x7cf260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7cf260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf264: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x7cf264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x7cf268: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x7CF268u;
    SET_GPR_U32(ctx, 31, 0x7CF270u);
    ctx->pc = 0x7CF26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF268u;
    // 0x7cf26c: 0xae11000c  sw          $s1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x7CF268u, 0x7CF270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF270u;
label_7cf270:
    // 0x7cf270: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7cf270u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7cf274: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7cf274u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7cf278: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7cf278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf27c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7cf27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf280: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7cf280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7cf284: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7cf284u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7cf288: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7cf288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7cf28c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x7cf28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x7cf290: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7cf290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cf294: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7cf294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7cf298: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CF298u;
    SET_GPR_U32(ctx, 31, 0x7CF2A0u);
    ctx->pc = 0x7CF29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF298u;
    // 0x7cf29c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CF298u, 0x7CF2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF2A0u;
label_7cf2a0:
    // 0x7cf2a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7cf2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf2a4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CF2A4u;
    {
        const bool branch_taken_0x7cf2a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF2A4u;
        // 0x7cf2a8: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf2a4) {
            ctx->pc = 0x7CF2B8u;
            goto label_7cf2b8;
        }
    }
    ctx->pc = 0x7CF2ACu;
    // 0x7cf2ac: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x7cf2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x7cf2b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7CF2B0u;
    {
        const bool branch_taken_0x7cf2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CF2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF2B0u;
        // 0x7cf2b4: 0xac6207b0  sw          $v0, 0x7B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf2b0) {
            ctx->pc = 0x7CF2C0u;
            goto label_7cf2c0;
        }
    }
    ctx->pc = 0x7CF2B8u;
label_7cf2b8:
    // 0x7cf2b8: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CF2B8u;
    SET_GPR_U32(ctx, 31, 0x7CF2C0u);
    ctx->pc = 0x7CF2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF2B8u;
    // 0x7cf2bc: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CF2B8u, 0x7CF2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF2C0u;
label_7cf2c0:
    // 0x7cf2c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cf2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7cf2c4:
    // 0x7cf2c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x7cf2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7cf2c8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x7cf2c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7cf2cc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7cf2ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7cf2d0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7cf2d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cf2d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7cf2d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cf2d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7cf2d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cf2dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7cf2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cf2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7CF2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF2E0u;
        // 0x7cf2e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CF2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CF2E8u;
}
} // namespace gh_mcport
