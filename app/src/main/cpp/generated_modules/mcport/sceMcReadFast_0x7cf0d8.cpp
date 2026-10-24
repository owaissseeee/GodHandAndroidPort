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
// Function: sceMcReadFast
// Address: 0x7cf0d8 - 0x7cf1e8
void sceMcReadFast_0x7cf0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcReadFast_0x7cf0d8");
#endif

    switch (ctx->pc) {
        case 0x7cf128u: goto label_7cf128;
        case 0x7cf170u: goto label_7cf170;
        case 0x7cf1a0u: goto label_7cf1a0;
        case 0x7cf1c0u: goto label_7cf1c0;
        default: break;
    }

    ctx->pc = 0x7cf0d8u;

    // 0x7cf0d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7cf0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7cf0dc: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cf0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cf0e0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7cf0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x7cf0e4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7cf0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7cf0e8: 0x24541980  addiu       $s4, $v0, 0x1980
    ctx->pc = 0x7cf0e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x7cf0ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7cf0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7cf0f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7cf0f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf0f4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7cf0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7cf0f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x7cf0f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf0fc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x7cf0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x7cf100: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7cf100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x7cf104: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7cf104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7cf108: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x7cf108u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7cf10c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CF10Cu;
    {
        const bool branch_taken_0x7cf10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF10Cu;
        // 0x7cf110: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf10c) {
            ctx->pc = 0x7CF11Cu;
            goto label_7cf11c;
        }
    }
    ctx->pc = 0x7CF114u;
    // 0x7cf114: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x7CF114u;
    {
        const bool branch_taken_0x7cf114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CF118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF114u;
        // 0x7cf118: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf114) {
            ctx->pc = 0x7CF1C4u;
            goto label_7cf1c4;
        }
    }
    ctx->pc = 0x7CF11Cu;
label_7cf11c:
    // 0x7cf11c: 0x3c15007d  lui         $s5, 0x7D
    ctx->pc = 0x7cf11cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)125 << 16));
    // 0x7cf120: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CF120u;
    SET_GPR_U32(ctx, 31, 0x7CF128u);
    ctx->pc = 0x7CF124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF120u;
    // 0x7cf124: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CF120u, 0x7CF128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF128u;
label_7cf128:
    // 0x7cf128: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CF128u;
    {
        const bool branch_taken_0x7cf128 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x7cf128) {
            ctx->pc = 0x7CF12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CF128u;
            // 0x7cf12c: 0x3c04007d  lui         $a0, 0x7D (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CF138u;
            goto label_7cf138;
        }
    }
    ctx->pc = 0x7CF130u;
    // 0x7cf130: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x7CF130u;
    {
        const bool branch_taken_0x7cf130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF130u;
        // 0x7cf134: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf130) {
            ctx->pc = 0x7CF1C4u;
            goto label_7cf1c4;
        }
    }
    ctx->pc = 0x7CF138u;
label_7cf138:
    // 0x7cf138: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cf138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cf13c: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7cf13cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7cf140: 0x24901a00  addiu       $s0, $a0, 0x1A00
    ctx->pc = 0x7cf140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 6656));
    // 0x7cf144: 0x24633080  addiu       $v1, $v1, 0x3080
    ctx->pc = 0x7cf144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12416));
    // 0x7cf148: 0xac931a00  sw          $s3, 0x1A00($a0)
    ctx->pc = 0x7cf148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6656), GPR_U32(ctx, 19));
    // 0x7cf14c: 0x24c61e80  addiu       $a2, $a2, 0x1E80
    ctx->pc = 0x7cf14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7808));
    // 0x7cf150: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cf150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cf154: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x7cf154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x7cf158: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x7cf158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf15c: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x7cf15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x7cf160: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x7cf160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x7cf164: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x7cf164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x7cf168: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x7CF168u;
    SET_GPR_U32(ctx, 31, 0x7CF170u);
    ctx->pc = 0x7CF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF168u;
    // 0x7cf16c: 0xac515080  sw          $s1, 0x5080($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20608), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x7CF168u, 0x7CF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF170u;
label_7cf170:
    // 0x7cf170: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7cf170u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7cf174: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7cf174u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7cf178: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7cf178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf17c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7cf17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf180: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7cf180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7cf184: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7cf184u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7cf188: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7cf188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7cf18c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x7cf18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x7cf190: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7cf190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cf194: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7cf194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7cf198: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CF198u;
    SET_GPR_U32(ctx, 31, 0x7CF1A0u);
    ctx->pc = 0x7CF19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF198u;
    // 0x7cf19c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CF198u, 0x7CF1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF1A0u;
label_7cf1a0:
    // 0x7cf1a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7cf1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf1a4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CF1A4u;
    {
        const bool branch_taken_0x7cf1a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF1A4u;
        // 0x7cf1a8: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf1a4) {
            ctx->pc = 0x7CF1B8u;
            goto label_7cf1b8;
        }
    }
    ctx->pc = 0x7CF1ACu;
    // 0x7cf1ac: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x7cf1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x7cf1b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7CF1B0u;
    {
        const bool branch_taken_0x7cf1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CF1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF1B0u;
        // 0x7cf1b4: 0xac6207b0  sw          $v0, 0x7B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf1b0) {
            ctx->pc = 0x7CF1C0u;
            goto label_7cf1c0;
        }
    }
    ctx->pc = 0x7CF1B8u;
label_7cf1b8:
    // 0x7cf1b8: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CF1B8u;
    SET_GPR_U32(ctx, 31, 0x7CF1C0u);
    ctx->pc = 0x7CF1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF1B8u;
    // 0x7cf1bc: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CF1B8u, 0x7CF1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF1C0u;
label_7cf1c0:
    // 0x7cf1c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cf1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7cf1c4:
    // 0x7cf1c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x7cf1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7cf1c8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x7cf1c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7cf1cc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7cf1ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7cf1d0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7cf1d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cf1d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7cf1d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cf1d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7cf1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cf1dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7cf1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cf1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7CF1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF1E0u;
        // 0x7cf1e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CF1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CF1E8u;
}
} // namespace gh_mcport
