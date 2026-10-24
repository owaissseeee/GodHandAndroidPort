#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079B9B0
// Address: 0x79b9b0 - 0x79ba60
void func_0079B9B0_0x79b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B9B0_0x79b9b0");
#endif

    switch (ctx->pc) {
        case 0x79b9e0u: goto label_79b9e0;
        case 0x79ba0cu: goto label_79ba0c;
        case 0x79ba1cu: goto label_79ba1c;
        case 0x79ba2cu: goto label_79ba2c;
        case 0x79ba54u: goto label_79ba54;
        default: break;
    }

    ctx->pc = 0x79b9b0u;

    // 0x79b9b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79b9b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79b9b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79b9bc: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79b9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79b9c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79b9c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x79b9c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b9c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79b9cc: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79b9ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x79b9d0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79b9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79b9d4: 0xafbd0010  sw          $sp, 0x10($sp)
    ctx->pc = 0x79b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
    // 0x79b9d8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x79b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x79b9dc: 0x8e02c800  lw          $v0, -0x3800($s0)
    ctx->pc = 0x79b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C800u));
label_79b9e0:
    // 0x79b9e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b9e4: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x79b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x79b9e8: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x79b9e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x79b9ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B9ECu;
    {
        const bool branch_taken_0x79b9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9ECu;
        // 0x79b9f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9ec) {
            ctx->pc = 0x79BA04u;
            goto label_79ba04;
        }
    }
    ctx->pc = 0x79B9F4u;
    // 0x79b9f4: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B9F4u;
    {
        const bool branch_taken_0x79b9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9F4u;
        // 0x79b9f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9f4) {
            ctx->pc = 0x79BA14u;
            goto label_79ba14;
        }
    }
    ctx->pc = 0x79B9FCu;
    // 0x79b9fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79B9FCu;
    {
        const bool branch_taken_0x79b9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9FCu;
        // 0x79ba00: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9fc) {
            ctx->pc = 0x79BA48u;
            goto label_79ba48;
        }
    }
    ctx->pc = 0x79BA04u;
label_79ba04:
    // 0x79ba04: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79BA04u;
    SET_GPR_U32(ctx, 31, 0x79BA0Cu);
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79BA04u, 0x79BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA0Cu;
label_79ba0c:
    // 0x79ba0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79BA0Cu;
    {
        const bool branch_taken_0x79ba0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA0Cu;
        // 0x79ba10: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba0c) {
            ctx->pc = 0x79BA38u;
            goto label_79ba38;
        }
    }
    ctx->pc = 0x79BA14u;
label_79ba14:
    // 0x79ba14: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79BA14u;
    SET_GPR_U32(ctx, 31, 0x79BA1Cu);
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79BA14u, 0x79BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA1Cu;
label_79ba1c:
    // 0x79ba1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BA1Cu;
    {
        const bool branch_taken_0x79ba1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA1Cu;
        // 0x79ba20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba1c) {
            ctx->pc = 0x79BA34u;
            goto label_79ba34;
        }
    }
    ctx->pc = 0x79BA24u;
    // 0x79ba24: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x79BA24u;
    SET_GPR_U32(ctx, 31, 0x79BA2Cu);
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x79BA24u, 0x79BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA2Cu;
label_79ba2c:
    // 0x79ba2c: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79BA2Cu;
    {
        const bool branch_taken_0x79ba2c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x79BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA2Cu;
        // 0x79ba30: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba2c) {
            ctx->pc = 0x79BA48u;
            goto label_79ba48;
        }
    }
    ctx->pc = 0x79BA34u;
label_79ba34:
    // 0x79ba34: 0x8e03c800  lw          $v1, -0x3800($s0)
    ctx->pc = 0x79ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
label_79ba38:
    // 0x79ba38: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x79ba38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79ba3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79ba40: 0xa0620014  sb          $v0, 0x14($v1)
    ctx->pc = 0x79ba40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x79ba44: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79ba48:
    // 0x79ba48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ba48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ba4c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79BA4Cu;
    SET_GPR_U32(ctx, 31, 0x79BA54u);
    ctx->pc = 0x79BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA4Cu;
    // 0x79ba50: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BA4Cu, 0x79BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA54u;
label_79ba54:
    // 0x79ba54: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x79BA54u;
    {
        const bool branch_taken_0x79ba54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA54u;
        // 0x79ba58: 0x8e02c800  lw          $v0, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba54) {
            ctx->pc = 0x79B9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b9e0;
        }
    }
    ctx->pc = 0x79BA5Cu;
    // 0x79ba5c: 0x0  nop
    ctx->pc = 0x79ba5cu;
    // NOP
    ctx->pc = 0x79ba60u;
}
} // namespace gh_r040
