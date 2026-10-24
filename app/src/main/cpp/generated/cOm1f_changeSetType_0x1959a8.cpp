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

// Function: cOm1f_changeSetType
// Address: 0x1959a8 - 0x195b30
void cOm1f_changeSetType_0x1959a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm1f_changeSetType_0x1959a8");
#endif

    switch (ctx->pc) {
        case 0x195a58u: goto label_195a58;
        case 0x195a78u: goto label_195a78;
        case 0x195b14u: goto label_195b14;
        default: break;
    }

    ctx->pc = 0x1959a8u;

    // 0x1959a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1959a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1959ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1959acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1959b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1959b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1959b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1959b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1959b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1959b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1959bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1959c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1959c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959c4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1959c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1959c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1959c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1959cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1959CCu;
    {
        const bool branch_taken_0x1959cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959CCu;
        // 0x1959d0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959cc) {
            ctx->pc = 0x1959E0u;
            goto label_1959e0;
        }
    }
    ctx->pc = 0x1959D4u;
    // 0x1959d4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1959d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1959d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1959D8u;
    {
        const bool branch_taken_0x1959d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959D8u;
        // 0x1959dc: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959d8) {
            ctx->pc = 0x1959E4u;
            goto label_1959e4;
        }
    }
    ctx->pc = 0x1959E0u;
label_1959e0:
    // 0x1959e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1959e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1959e4:
    // 0x1959e4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1959E4u;
    {
        const bool branch_taken_0x1959e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959E4u;
        // 0x1959e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959e4) {
            ctx->pc = 0x195A58u;
            goto label_195a58;
        }
    }
    ctx->pc = 0x1959ECu;
    // 0x1959ec: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1959ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1959f0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1959f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1959f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1959F4u;
    {
        const bool branch_taken_0x1959f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959F4u;
        // 0x1959f8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959f4) {
            ctx->pc = 0x195A08u;
            goto label_195a08;
        }
    }
    ctx->pc = 0x1959FCu;
    // 0x1959fc: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1959fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x195a00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195A00u;
    {
        const bool branch_taken_0x195a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A00u;
        // 0x195a04: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a00) {
            ctx->pc = 0x195A0Cu;
            goto label_195a0c;
        }
    }
    ctx->pc = 0x195A08u;
label_195a08:
    // 0x195a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195a0c:
    // 0x195a0c: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x195a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x195a10: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x195a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x195a14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x195a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195a18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x195a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x195a1c: 0xaca20154  sw          $v0, 0x154($a1)
    ctx->pc = 0x195a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
    // 0x195a20: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x195a20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x195a24: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x195a24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x195a28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195A28u;
    {
        const bool branch_taken_0x195a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A28u;
        // 0x195a2c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a28) {
            ctx->pc = 0x195A3Cu;
            goto label_195a3c;
        }
    }
    ctx->pc = 0x195A30u;
    // 0x195a30: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x195a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x195a34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195A34u;
    {
        const bool branch_taken_0x195a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A34u;
        // 0x195a38: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a34) {
            ctx->pc = 0x195A40u;
            goto label_195a40;
        }
    }
    ctx->pc = 0x195A3Cu;
label_195a3c:
    // 0x195a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195a40:
    // 0x195a40: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x195a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x195a44: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x195a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x195a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x195a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x195a50: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x195A50u;
    SET_GPR_U32(ctx, 31, 0x195A58u);
    ctx->pc = 0x195A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195A50u;
    // 0x195a54: 0xaca20154  sw          $v0, 0x154($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x195A50u, 0x195A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A58u;
label_195a58:
    // 0x195a58: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A58u;
    {
        const bool branch_taken_0x195a58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A58u;
        // 0x195a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a58) {
            ctx->pc = 0x195A68u;
            goto label_195a68;
        }
    }
    ctx->pc = 0x195A60u;
    // 0x195a60: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x195A60u;
    {
        const bool branch_taken_0x195a60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x195A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A60u;
        // 0x195a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a60) {
            ctx->pc = 0x195B08u;
            goto label_195b08;
        }
    }
    ctx->pc = 0x195A68u;
label_195a68:
    // 0x195a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a70: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x195A70u;
    SET_GPR_U32(ctx, 31, 0x195A78u);
    ctx->pc = 0x195A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195A70u;
    // 0x195a74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x195A70u, 0x195A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A78u;
label_195a78:
    // 0x195a78: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x195a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x195a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195a80: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x195a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x195a84: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x195a84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x195a88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195A88u;
    {
        const bool branch_taken_0x195a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A88u;
        // 0x195a8c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a88) {
            ctx->pc = 0x195A9Cu;
            goto label_195a9c;
        }
    }
    ctx->pc = 0x195A90u;
    // 0x195a90: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x195a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x195a94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195A94u;
    {
        const bool branch_taken_0x195a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A94u;
        // 0x195a98: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a94) {
            ctx->pc = 0x195AA0u;
            goto label_195aa0;
        }
    }
    ctx->pc = 0x195A9Cu;
label_195a9c:
    // 0x195a9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x195a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195aa0:
    // 0x195aa0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x195AA0u;
    {
        const bool branch_taken_0x195aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195AA0u;
        // 0x195aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195aa0) {
            ctx->pc = 0x195B18u;
            goto label_195b18;
        }
    }
    ctx->pc = 0x195AA8u;
    // 0x195aa8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x195aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x195aac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x195aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x195ab0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195AB0u;
    {
        const bool branch_taken_0x195ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195AB0u;
        // 0x195ab4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ab0) {
            ctx->pc = 0x195AC4u;
            goto label_195ac4;
        }
    }
    ctx->pc = 0x195AB8u;
    // 0x195ab8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x195ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x195abc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195ABCu;
    {
        const bool branch_taken_0x195abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195ABCu;
        // 0x195ac0: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195abc) {
            ctx->pc = 0x195AC8u;
            goto label_195ac8;
        }
    }
    ctx->pc = 0x195AC4u;
label_195ac4:
    // 0x195ac4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x195ac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195ac8:
    // 0x195ac8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x195ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x195acc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x195accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195ad0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x195ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x195ad4: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x195ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x195ad8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x195ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x195adc: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x195adcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x195ae0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195AE0u;
    {
        const bool branch_taken_0x195ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x195AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195AE0u;
        // 0x195ae4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ae0) {
            ctx->pc = 0x195AF4u;
            goto label_195af4;
        }
    }
    ctx->pc = 0x195AE8u;
    // 0x195ae8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x195ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x195aec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195AECu;
    {
        const bool branch_taken_0x195aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195AECu;
        // 0x195af0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195aec) {
            ctx->pc = 0x195AF8u;
            goto label_195af8;
        }
    }
    ctx->pc = 0x195AF4u;
label_195af4:
    // 0x195af4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x195af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195af8:
    // 0x195af8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x195af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x195afc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x195afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x195b00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x195B00u;
    {
        const bool branch_taken_0x195b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B00u;
        // 0x195b04: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b00) {
            ctx->pc = 0x195B18u;
            goto label_195b18;
        }
    }
    ctx->pc = 0x195B08u;
label_195b08:
    // 0x195b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b0c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x195B0Cu;
    SET_GPR_U32(ctx, 31, 0x195B14u);
    ctx->pc = 0x195B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B0Cu;
    // 0x195b10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x195B0Cu, 0x195B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B14u;
label_195b14:
    // 0x195b14: 0xae110600  sw          $s1, 0x600($s0)
    ctx->pc = 0x195b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 17));
label_195b18:
    // 0x195b18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x195b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195b1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x195b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195b24: 0x3e00008  jr          $ra
    ctx->pc = 0x195B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B24u;
        // 0x195b28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195B2Cu;
    // 0x195b2c: 0x0  nop
    ctx->pc = 0x195b2cu;
    // NOP
    ctx->pc = 0x195b30u;
}
