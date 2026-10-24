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

// Function: func_00148D30
// Address: 0x148d30 - 0x148f00
void func_00148D30_0x148d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00148D30_0x148d30");
#endif

    switch (ctx->pc) {
        case 0x148dc0u: goto label_148dc0;
        case 0x148df8u: goto label_148df8;
        case 0x148e08u: goto label_148e08;
        case 0x148e18u: goto label_148e18;
        case 0x148e68u: goto label_148e68;
        case 0x148e98u: goto label_148e98;
        case 0x148ea8u: goto label_148ea8;
        case 0x148eb8u: goto label_148eb8;
        default: break;
    }

    ctx->pc = 0x148d30u;

    // 0x148d30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x148d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x148d34: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x148d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x148d38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x148d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x148d3c: 0x244674a0  addiu       $a2, $v0, 0x74A0
    ctx->pc = 0x148d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x148d40: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x148d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x148d44: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x148d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x148d48: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x148d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x148d4c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x148d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x148d50: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x148d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x148d54: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x148d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x148d58: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x148d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x148d5c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x148d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x148d60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148d64: 0x8cc205fc  lw          $v0, 0x5FC($a2)
    ctx->pc = 0x148d64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A9Cu));
    // 0x148d68: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x148D68u;
    {
        const bool branch_taken_0x148d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D68u;
        // 0x148d6c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d68) {
            ctx->pc = 0x148ECCu;
            goto label_148ecc;
        }
    }
    ctx->pc = 0x148D70u;
    // 0x148d70: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x148d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x148d74: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x148d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x148d78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x148d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x148d7c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x148D7Cu;
    {
        const bool branch_taken_0x148d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D7Cu;
        // 0x148d80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d7c) {
            ctx->pc = 0x148E34u;
            goto label_148e34;
        }
    }
    ctx->pc = 0x148D84u;
    // 0x148d84: 0x8c830388  lw          $v1, 0x388($a0)
    ctx->pc = 0x148d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 904)));
    // 0x148d88: 0x8cc20210  lw          $v0, 0x210($a2)
    ctx->pc = 0x148d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 528)));
    // 0x148d8c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x148d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x148d90: 0x9473000a  lhu         $s3, 0xA($v1)
    ctx->pc = 0x148d90u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x148d94: 0x1260004d  beqz        $s3, . + 4 + (0x4D << 2)
    ctx->pc = 0x148D94u;
    {
        const bool branch_taken_0x148d94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D94u;
        // 0x148d98: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d94) {
            ctx->pc = 0x148ECCu;
            goto label_148ecc;
        }
    }
    ctx->pc = 0x148D9Cu;
    // 0x148d9c: 0x24830300  addiu       $v1, $a0, 0x300
    ctx->pc = 0x148d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x148da0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x148da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x148da4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x148da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x148da8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x148da8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148dac: 0x249464a0  addiu       $s4, $a0, 0x64A0
    ctx->pc = 0x148dacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 25760));
    // 0x148db0: 0x241e00ff  addiu       $fp, $zero, 0xFF
    ctx->pc = 0x148db0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x148db4: 0x3c170042  lui         $s7, 0x42
    ctx->pc = 0x148db4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)66 << 16));
    // 0x148db8: 0x3c160042  lui         $s6, 0x42
    ctx->pc = 0x148db8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)66 << 16));
    // 0x148dbc: 0x0  nop
    ctx->pc = 0x148dbcu;
    // NOP
label_148dc0:
    // 0x148dc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x148dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148dc4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x148dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x148dc8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x148dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148dcc: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x148dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x148dd0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x148dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x148dd4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x148dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x148dd8: 0x90870016  lbu         $a3, 0x16($a0)
    ctx->pc = 0x148dd8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x148ddc: 0x10fe000f  beq         $a3, $fp, . + 4 + (0xF << 2)
    ctx->pc = 0x148DDCu;
    {
        const bool branch_taken_0x148ddc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 30));
        ctx->pc = 0x148DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148DDCu;
        // 0x148de0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ddc) {
            ctx->pc = 0x148E1Cu;
            goto label_148e1c;
        }
    }
    ctx->pc = 0x148DE4u;
    // 0x148de4: 0x26e5ea50  addiu       $a1, $s7, -0x15B0
    ctx->pc = 0x148de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961744));
    // 0x148de8: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x148de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x148dec: 0x26c6ea58  addiu       $a2, $s6, -0x15A8
    ctx->pc = 0x148decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961752));
    // 0x148df0: 0xc0c7370  jal         func_31CDC0
    ctx->pc = 0x148DF0u;
    SET_GPR_U32(ctx, 31, 0x148DF8u);
    ctx->pc = 0x148DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148DF0u;
    // 0x148df4: 0x8c4405fc  lw          $a0, 0x5FC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CDC0u, 0x148DF0u, 0x148DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DF8u;
label_148df8:
    // 0x148df8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x148df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148dfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x148dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e00: 0xc0544e6  jal         func_151398
    ctx->pc = 0x148E00u;
    SET_GPR_U32(ctx, 31, 0x148E08u);
    ctx->pc = 0x148E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E00u;
    // 0x148e04: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x148E00u, 0x148E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E08u;
label_148e08:
    // 0x148e08: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x148e08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x148e0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x148e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e10: 0xc0544da  jal         func_151368
    ctx->pc = 0x148E10u;
    SET_GPR_U32(ctx, 31, 0x148E18u);
    ctx->pc = 0x148E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E10u;
    // 0x148e14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x148E10u, 0x148E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E18u;
label_148e18:
    // 0x148e18: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x148e18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
label_148e1c:
    // 0x148e1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x148e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x148e20: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x148e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x148e24: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x148E24u;
    {
        const bool branch_taken_0x148e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E24u;
        // 0x148e28: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e24) {
            ctx->pc = 0x148DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148dc0;
        }
    }
    ctx->pc = 0x148E2Cu;
    // 0x148e2c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x148E2Cu;
    {
        const bool branch_taken_0x148e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E2Cu;
        // 0x148e30: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e2c) {
            ctx->pc = 0x148ED0u;
            goto label_148ed0;
        }
    }
    ctx->pc = 0x148E34u;
label_148e34:
    // 0x148e34: 0x8c830388  lw          $v1, 0x388($a0)
    ctx->pc = 0x148e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 904)));
    // 0x148e38: 0x8cc20210  lw          $v0, 0x210($a2)
    ctx->pc = 0x148e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 528)));
    // 0x148e3c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x148e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x148e40: 0x9474000a  lhu         $s4, 0xA($v1)
    ctx->pc = 0x148e40u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x148e44: 0x12800021  beqz        $s4, . + 4 + (0x21 << 2)
    ctx->pc = 0x148E44u;
    {
        const bool branch_taken_0x148e44 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E44u;
        // 0x148e48: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e44) {
            ctx->pc = 0x148ECCu;
            goto label_148ecc;
        }
    }
    ctx->pc = 0x148E4Cu;
    // 0x148e4c: 0x24830300  addiu       $v1, $a0, 0x300
    ctx->pc = 0x148e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x148e50: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x148e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x148e54: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x148e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x148e58: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x148e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148e5c: 0x249364a0  addiu       $s3, $a0, 0x64A0
    ctx->pc = 0x148e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 25760));
    // 0x148e60: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x148e60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e64: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x148e64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_148e68:
    // 0x148e68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x148e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x148e6c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x148e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x148e70: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x148e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148e74: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x148e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x148e78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x148e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x148e7c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x148e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x148e80: 0x90860016  lbu         $a2, 0x16($a0)
    ctx->pc = 0x148e80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x148e84: 0x50d6000e  beql        $a2, $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x148E84u;
    {
        const bool branch_taken_0x148e84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 22));
        if (branch_taken_0x148e84) {
            ctx->pc = 0x148E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148E84u;
            // 0x148e88: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148EC0u;
            goto label_148ec0;
        }
    }
    ctx->pc = 0x148E8Cu;
    // 0x148e8c: 0x8ee505fc  lw          $a1, 0x5FC($s7)
    ctx->pc = 0x148e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1532)));
    // 0x148e90: 0xc0548b0  jal         func_1522C0
    ctx->pc = 0x148E90u;
    SET_GPR_U32(ctx, 31, 0x148E98u);
    ctx->pc = 0x148E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E90u;
    // 0x148e94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522C0u, 0x148E90u, 0x148E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E98u;
label_148e98:
    // 0x148e98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x148e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x148e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ea0: 0xc0544e6  jal         func_151398
    ctx->pc = 0x148EA0u;
    SET_GPR_U32(ctx, 31, 0x148EA8u);
    ctx->pc = 0x148EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148EA0u;
    // 0x148ea4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x148EA0u, 0x148EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148EA8u;
label_148ea8:
    // 0x148ea8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x148ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x148eac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x148eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148eb0: 0xc0544da  jal         func_151368
    ctx->pc = 0x148EB0u;
    SET_GPR_U32(ctx, 31, 0x148EB8u);
    ctx->pc = 0x148EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148EB0u;
    // 0x148eb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x148EB0u, 0x148EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148EB8u;
label_148eb8:
    // 0x148eb8: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x148eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x148ebc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x148ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_148ec0:
    // 0x148ec0: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x148ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x148ec4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x148EC4u;
    {
        const bool branch_taken_0x148ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EC4u;
        // 0x148ec8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ec4) {
            ctx->pc = 0x148E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148e68;
        }
    }
    ctx->pc = 0x148ECCu;
label_148ecc:
    // 0x148ecc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x148eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_148ed0:
    // 0x148ed0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x148ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x148ed4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x148ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x148ed8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x148ed8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x148edc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x148edcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x148ee0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x148ee0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148ee4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x148ee4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148ee8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x148ee8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148eec: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x148eecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148ef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x148EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EF4u;
        // 0x148ef8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148EFCu;
    // 0x148efc: 0x0  nop
    ctx->pc = 0x148efcu;
    // NOP
    ctx->pc = 0x148f00u;
}
