#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_0079A178
// Address: 0x79a178 - 0x79a230
void func_0079A178_0x79a178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A178_0x79a178");
#endif

    switch (ctx->pc) {
        case 0x79a1c0u: goto label_79a1c0;
        case 0x79a1c8u: goto label_79a1c8;
        case 0x79a1d8u: goto label_79a1d8;
        case 0x79a1f0u: goto label_79a1f0;
        case 0x79a200u: goto label_79a200;
        case 0x79a208u: goto label_79a208;
        case 0x79a228u: goto label_79a228;
        default: break;
    }

    ctx->pc = 0x79a178u;

    // 0x79a178: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79a17c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a180: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79a184: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a188: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79a18c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79a190: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x79a190u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x79a194: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79a194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79a198: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x79a198u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x79a19c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79a19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79a1a0: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x79a1a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1a4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79a1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79a1a8: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x79a1a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1ac: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a1b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x79a1b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a1b8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A1B8u;
    SET_GPR_U32(ctx, 31, 0x79A1C0u);
    ctx->pc = 0x79A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1B8u;
    // 0x79a1bc: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A1B8u, 0x79A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1C0u;
label_79a1c0:
    // 0x79a1c0: 0xc1e682a  jal         func_79A0A8
    ctx->pc = 0x79A1C0u;
    SET_GPR_U32(ctx, 31, 0x79A1C8u);
    ctx->pc = 0x79A0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A0A8u, 0x79A1C0u, 0x79A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1C8u;
label_79a1c8:
    // 0x79a1c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1cc: 0x26248658  addiu       $a0, $s1, -0x79A8
    ctx->pc = 0x79a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936152));
    // 0x79a1d0: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A1D0u;
    SET_GPR_U32(ctx, 31, 0x79A1D8u);
    ctx->pc = 0x79A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1D0u;
    // 0x79a1d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A1D0u, 0x79A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1D8u;
label_79a1d8:
    // 0x79a1d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a1dc: 0x8e42c500  lw          $v0, -0x3B00($s2)
    ctx->pc = 0x79a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952192)));
    // 0x79a1e0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x79a1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x79a1e4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x79a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x79a1e8: 0x8e62c500  lw          $v0, -0x3B00($s3)
    ctx->pc = 0x79a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952192)));
    // 0x79a1ec: 0x0  nop
    ctx->pc = 0x79a1ecu;
    // NOP
label_79a1f0:
    // 0x79a1f0: 0x26848658  addiu       $a0, $s4, -0x79A8
    ctx->pc = 0x79a1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    // 0x79a1f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1f8: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A1F8u;
    SET_GPR_U32(ctx, 31, 0x79A200u);
    ctx->pc = 0x79A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1F8u;
    // 0x79a1fc: 0xa0400005  sb          $zero, 0x5($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A1F8u, 0x79A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A200u;
label_79a200:
    // 0x79a200: 0xc1e682a  jal         func_79A0A8
    ctx->pc = 0x79A200u;
    SET_GPR_U32(ctx, 31, 0x79A208u);
    ctx->pc = 0x79A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A200u;
    // 0x79a204: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A0A8u, 0x79A200u, 0x79A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A208u;
label_79a208:
    // 0x79a208: 0x8e64c500  lw          $a0, -0x3B00($s3)
    ctx->pc = 0x79a208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952192)));
    // 0x79a20c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a210: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79a210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a214: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x79a214u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a218: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x79a218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x79a21c: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79a220: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A220u;
    SET_GPR_U32(ctx, 31, 0x79A228u);
    ctx->pc = 0x79A224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A220u;
    // 0x79a224: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A220u, 0x79A228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A228u;
label_79a228:
    // 0x79a228: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x79A228u;
    {
        const bool branch_taken_0x79a228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A228u;
        // 0x79a22c: 0x8e62c500  lw          $v0, -0x3B00($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a228) {
            ctx->pc = 0x79A1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1f0;
        }
    }
    ctx->pc = 0x79A230u;
}
} // namespace gh_r100
