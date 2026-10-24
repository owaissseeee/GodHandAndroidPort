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

// Function: func_00194D10
// Address: 0x194d10 - 0x195068
void func_00194D10_0x194d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00194D10_0x194d10");
#endif

    switch (ctx->pc) {
        case 0x194e10u: goto label_194e10;
        case 0x194e84u: goto label_194e84;
        case 0x194ed4u: goto label_194ed4;
        case 0x194ef0u: goto label_194ef0;
        case 0x194f18u: goto label_194f18;
        case 0x194f60u: goto label_194f60;
        case 0x194fa4u: goto label_194fa4;
        case 0x194fecu: goto label_194fec;
        case 0x195004u: goto label_195004;
        case 0x195050u: goto label_195050;
        default: break;
    }

    ctx->pc = 0x194d10u;

    // 0x194d10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x194d14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x194d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x194d18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x194d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x194d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x194d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x194d24: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x194d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x194d28: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x194d28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x194d2c: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x194D2Cu;
    {
        const bool branch_taken_0x194d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D2Cu;
        // 0x194d30: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d2c) {
            ctx->pc = 0x19502Cu;
            goto label_19502c;
        }
    }
    ctx->pc = 0x194D34u;
    // 0x194d34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x194d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x194d38: 0x24424b50  addiu       $v0, $v0, 0x4B50
    ctx->pc = 0x194d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19280));
    // 0x194d3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x194d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194d40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x194d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194d44: 0x800008  jr          $a0
    ctx->pc = 0x194D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194D4Cu: goto label_194d4c;
            case 0x194DBCu: goto label_194dbc;
            case 0x194EE8u: goto label_194ee8;
            case 0x194F74u: goto label_194f74;
            case 0x194FFCu: goto label_194ffc;
            case 0x19501Cu: goto label_19501c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x194D4Cu;
label_194d4c:
    // 0x194d4c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x194d4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x194d50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x194d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194d54: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x194d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194d58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194D58u;
    {
        const bool branch_taken_0x194d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D58u;
        // 0x194d5c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d58) {
            ctx->pc = 0x194D6Cu;
            goto label_194d6c;
        }
    }
    ctx->pc = 0x194D60u;
    // 0x194d60: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x194d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x194d64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194D64u;
    {
        const bool branch_taken_0x194d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D64u;
        // 0x194d68: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d64) {
            ctx->pc = 0x194D70u;
            goto label_194d70;
        }
    }
    ctx->pc = 0x194D6Cu;
label_194d6c:
    // 0x194d6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194d70:
    // 0x194d70: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x194D70u;
    {
        const bool branch_taken_0x194d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D70u;
        // 0x194d74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d70) {
            ctx->pc = 0x194DA4u;
            goto label_194da4;
        }
    }
    ctx->pc = 0x194D78u;
    // 0x194d78: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x194d78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x194d7c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x194d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194d80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194D80u;
    {
        const bool branch_taken_0x194d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D80u;
        // 0x194d84: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d80) {
            ctx->pc = 0x194D94u;
            goto label_194d94;
        }
    }
    ctx->pc = 0x194D88u;
    // 0x194d88: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x194d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x194d8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194D8Cu;
    {
        const bool branch_taken_0x194d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D8Cu;
        // 0x194d90: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d8c) {
            ctx->pc = 0x194D98u;
            goto label_194d98;
        }
    }
    ctx->pc = 0x194D94u;
label_194d94:
    // 0x194d94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194d98:
    // 0x194d98: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x194d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x194d9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x194d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194da0: 0xe6000b08  swc1        $f0, 0xB08($s0)
    ctx->pc = 0x194da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2824), bits); }
label_194da4:
    // 0x194da4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x194da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x194da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194dac: 0xa6020af0  sh          $v0, 0xAF0($s0)
    ctx->pc = 0x194dacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2800), (uint16_t)GPR_U32(ctx, 2));
    // 0x194db0: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x194db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x194db4: 0xa2000af3  sb          $zero, 0xAF3($s0)
    ctx->pc = 0x194db4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2803), (uint8_t)GPR_U32(ctx, 0));
    // 0x194db8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x194db8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_194dbc:
    // 0x194dbc: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x194dbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x194dc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x194dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194dc4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x194dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194dc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194DC8u;
    {
        const bool branch_taken_0x194dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DC8u;
        // 0x194dcc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194dc8) {
            ctx->pc = 0x194DDCu;
            goto label_194ddc;
        }
    }
    ctx->pc = 0x194DD0u;
    // 0x194dd0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x194dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x194dd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194DD4u;
    {
        const bool branch_taken_0x194dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DD4u;
        // 0x194dd8: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194dd4) {
            ctx->pc = 0x194DE0u;
            goto label_194de0;
        }
    }
    ctx->pc = 0x194DDCu;
label_194ddc:
    // 0x194ddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194de0:
    // 0x194de0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x194DE0u;
    {
        const bool branch_taken_0x194de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DE0u;
        // 0x194de4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194de0) {
            ctx->pc = 0x194E30u;
            goto label_194e30;
        }
    }
    ctx->pc = 0x194DE8u;
    // 0x194de8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x194de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x194dec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x194decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194df0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194DF0u;
    {
        const bool branch_taken_0x194df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DF0u;
        // 0x194df4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194df0) {
            ctx->pc = 0x194E04u;
            goto label_194e04;
        }
    }
    ctx->pc = 0x194DF8u;
    // 0x194df8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x194df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x194dfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194DFCu;
    {
        const bool branch_taken_0x194dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DFCu;
        // 0x194e00: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194dfc) {
            ctx->pc = 0x194E08u;
            goto label_194e08;
        }
    }
    ctx->pc = 0x194E04u;
label_194e04:
    // 0x194e04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194e08:
    // 0x194e08: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x194E08u;
    SET_GPR_U32(ctx, 31, 0x194E10u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x194E08u, 0x194E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E10u;
label_194e10:
    // 0x194e10: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x194e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x194e14: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x194e14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x194e18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x194e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x194e1c: 0xc6010b08  lwc1        $f1, 0xB08($s0)
    ctx->pc = 0x194e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194e20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x194e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x194e24: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x194e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x194e28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x194e28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x194e2c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x194e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_194e30:
    // 0x194e30: 0x96020af0  lhu         $v0, 0xAF0($s0)
    ctx->pc = 0x194e30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2800)));
    // 0x194e34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x194e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x194e38: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x194e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x194e3c: 0x461007b  bgez        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x194E3Cu;
    {
        const bool branch_taken_0x194e3c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x194E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E3Cu;
        // 0x194e40: 0xa6020af0  sh          $v0, 0xAF0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2800), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e3c) {
            ctx->pc = 0x19502Cu;
            goto label_19502c;
        }
    }
    ctx->pc = 0x194E44u;
    // 0x194e44: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x194e44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x194e48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x194e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194e4c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x194e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194e50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194E50u;
    {
        const bool branch_taken_0x194e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E50u;
        // 0x194e54: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e50) {
            ctx->pc = 0x194E64u;
            goto label_194e64;
        }
    }
    ctx->pc = 0x194E58u;
    // 0x194e58: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x194e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x194e5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194E5Cu;
    {
        const bool branch_taken_0x194e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E5Cu;
        // 0x194e60: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e5c) {
            ctx->pc = 0x194E68u;
            goto label_194e68;
        }
    }
    ctx->pc = 0x194E64u;
label_194e64:
    // 0x194e64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194e68:
    // 0x194e68: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x194e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x194e6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194e70: 0xc6000b08  lwc1        $f0, 0xB08($s0)
    ctx->pc = 0x194e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194e74: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x194e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x194e78: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x194e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x194e7c: 0xc07f5c6  jal         func_1FD718
    ctx->pc = 0x194E7Cu;
    SET_GPR_U32(ctx, 31, 0x194E84u);
    ctx->pc = 0x194E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E7Cu;
    // 0x194e80: 0x8e040608  lw          $a0, 0x608($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD718u, 0x194E7Cu, 0x194E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E84u;
label_194e84:
    // 0x194e84: 0x3c01c011  lui         $at, 0xC011
    ctx->pc = 0x194e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49169 << 16));
    // 0x194e88: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x194e88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x194e8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194e90: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x194e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x194e94: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x194e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x194e98: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x194e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e9c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x194e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x194ea0: 0x26040990  addiu       $a0, $s0, 0x990
    ctx->pc = 0x194ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2448));
    // 0x194ea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x194ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x194ea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194eac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194eb0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x194eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x194eb4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x194eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194eb8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x194eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x194ebc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x194ebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x194ec0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x194ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x194ec4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x194ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x194ec8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x194ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x194ecc: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x194ECCu;
    SET_GPR_U32(ctx, 31, 0x194ED4u);
    ctx->pc = 0x194ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194ECCu;
    // 0x194ed0: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x194ECCu, 0x194ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194ED4u;
label_194ed4:
    // 0x194ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194ed8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x194ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194edc: 0xa2020af3  sb          $v0, 0xAF3($s0)
    ctx->pc = 0x194edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2803), (uint8_t)GPR_U32(ctx, 2));
    // 0x194ee0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x194EE0u;
    {
        const bool branch_taken_0x194ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EE0u;
        // 0x194ee4: 0xa20302f6  sb          $v1, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ee0) {
            ctx->pc = 0x195028u;
            goto label_195028;
        }
    }
    ctx->pc = 0x194EE8u;
label_194ee8:
    // 0x194ee8: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x194EE8u;
    SET_GPR_U32(ctx, 31, 0x194EF0u);
    ctx->pc = 0x194EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194EE8u;
    // 0x194eec: 0x26040990  addiu       $a0, $s0, 0x990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x194EE8u, 0x194EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194EF0u;
label_194ef0:
    // 0x194ef0: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x194EF0u;
    {
        const bool branch_taken_0x194ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194ef0) {
            ctx->pc = 0x194EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194EF0u;
            // 0x194ef4: 0x92030af3  lbu         $v1, 0xAF3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2803)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195030u;
            goto label_195030;
        }
    }
    ctx->pc = 0x194EF8u;
    // 0x194ef8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x194ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x194efc: 0x24040177  addiu       $a0, $zero, 0x177
    ctx->pc = 0x194efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
    // 0x194f00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194f04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x194f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x194f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f0c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x194f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194f10: 0xc0c194a  jal         func_306528
    ctx->pc = 0x194F10u;
    SET_GPR_U32(ctx, 31, 0x194F18u);
    ctx->pc = 0x194F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F10u;
    // 0x194f14: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x194F10u, 0x194F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F18u;
label_194f18:
    // 0x194f18: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x194f18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x194f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194f20: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x194f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194f24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194F24u;
    {
        const bool branch_taken_0x194f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F24u;
        // 0x194f28: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f24) {
            ctx->pc = 0x194F38u;
            goto label_194f38;
        }
    }
    ctx->pc = 0x194F2Cu;
    // 0x194f2c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x194f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x194f30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194F30u;
    {
        const bool branch_taken_0x194f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F30u;
        // 0x194f34: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f30) {
            ctx->pc = 0x194F3Cu;
            goto label_194f3c;
        }
    }
    ctx->pc = 0x194F38u;
label_194f38:
    // 0x194f38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x194f38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194f3c:
    // 0x194f3c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x194f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x194f40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x194f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194f44: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x194f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x194f48: 0x240600b6  addiu       $a2, $zero, 0xB6
    ctx->pc = 0x194f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x194f4c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x194f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194f50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x194f54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f58: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x194F58u;
    SET_GPR_U32(ctx, 31, 0x194F60u);
    ctx->pc = 0x194F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F58u;
    // 0x194f5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x194F58u, 0x194F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F60u;
label_194f60:
    // 0x194f60: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x194f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x194f64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x194f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x194f68: 0xa6030af0  sh          $v1, 0xAF0($s0)
    ctx->pc = 0x194f68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2800), (uint16_t)GPR_U32(ctx, 3));
    // 0x194f6c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x194F6Cu;
    {
        const bool branch_taken_0x194f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F6Cu;
        // 0x194f70: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f6c) {
            ctx->pc = 0x195028u;
            goto label_195028;
        }
    }
    ctx->pc = 0x194F74u;
label_194f74:
    // 0x194f74: 0x96020af0  lhu         $v0, 0xAF0($s0)
    ctx->pc = 0x194f74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2800)));
    // 0x194f78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x194f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x194f7c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x194f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x194f80: 0x461002a  bgez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x194F80u;
    {
        const bool branch_taken_0x194f80 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x194F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F80u;
        // 0x194f84: 0xa6020af0  sh          $v0, 0xAF0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2800), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f80) {
            ctx->pc = 0x19502Cu;
            goto label_19502c;
        }
    }
    ctx->pc = 0x194F88u;
    // 0x194f88: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x194f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x194f8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194f90: 0x26020990  addiu       $v0, $s0, 0x990
    ctx->pc = 0x194f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2448));
    // 0x194f94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194f9c: 0xc071f28  jal         func_1C7CA0
    ctx->pc = 0x194F9Cu;
    SET_GPR_U32(ctx, 31, 0x194FA4u);
    ctx->pc = 0x194FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F9Cu;
    // 0x194fa0: 0xe4400030  swc1        $f0, 0x30($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x194F9Cu, 0x194FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194FA4u;
label_194fa4:
    // 0x194fa4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x194fa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x194fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194fac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x194facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194fb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194FB0u;
    {
        const bool branch_taken_0x194fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FB0u;
        // 0x194fb4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194fb0) {
            ctx->pc = 0x194FC4u;
            goto label_194fc4;
        }
    }
    ctx->pc = 0x194FB8u;
    // 0x194fb8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x194fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x194fbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194FBCu;
    {
        const bool branch_taken_0x194fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FBCu;
        // 0x194fc0: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194fbc) {
            ctx->pc = 0x194FC8u;
            goto label_194fc8;
        }
    }
    ctx->pc = 0x194FC4u;
label_194fc4:
    // 0x194fc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x194fc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194fc8:
    // 0x194fc8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x194fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x194fcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x194fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194fd0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x194fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x194fd4: 0x240600b7  addiu       $a2, $zero, 0xB7
    ctx->pc = 0x194fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x194fd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x194fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194fdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194fdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194fe0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x194fe0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194fe4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x194FE4u;
    SET_GPR_U32(ctx, 31, 0x194FECu);
    ctx->pc = 0x194FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194FE4u;
    // 0x194fe8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x194FE4u, 0x194FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194FECu;
label_194fec:
    // 0x194fec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x194fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x194ff0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x194ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x194ff4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x194FF4u;
    {
        const bool branch_taken_0x194ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FF4u;
        // 0x194ff8: 0xa20302f6  sb          $v1, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ff4) {
            ctx->pc = 0x19502Cu;
            goto label_19502c;
        }
    }
    ctx->pc = 0x194FFCu;
label_194ffc:
    // 0x194ffc: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x194FFCu;
    SET_GPR_U32(ctx, 31, 0x195004u);
    ctx->pc = 0x195000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194FFCu;
    // 0x195000: 0x26040990  addiu       $a0, $s0, 0x990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x194FFCu, 0x195004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195004u;
label_195004:
    // 0x195004: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x195004u;
    {
        const bool branch_taken_0x195004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195004) {
            ctx->pc = 0x195008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195004u;
            // 0x195008: 0x92030af3  lbu         $v1, 0xAF3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2803)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195030u;
            goto label_195030;
        }
    }
    ctx->pc = 0x19500Cu;
    // 0x19500c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x195010: 0xa2000af3  sb          $zero, 0xAF3($s0)
    ctx->pc = 0x195010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2803), (uint8_t)GPR_U32(ctx, 0));
    // 0x195014: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x195014u;
    {
        const bool branch_taken_0x195014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195014u;
        // 0x195018: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195014) {
            ctx->pc = 0x195028u;
            goto label_195028;
        }
    }
    ctx->pc = 0x19501Cu;
label_19501c:
    // 0x19501c: 0x92020af2  lbu         $v0, 0xAF2($s0)
    ctx->pc = 0x19501cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2802)));
    // 0x195020: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x195020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x195024: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x195024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_195028:
    // 0x195028: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x195028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_19502c:
    // 0x19502c: 0x92030af3  lbu         $v1, 0xAF3($s0)
    ctx->pc = 0x19502cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2803)));
label_195030:
    // 0x195030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195034: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x195034u;
    {
        const bool branch_taken_0x195034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x195034) {
            ctx->pc = 0x195038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195034u;
            // 0x195038: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195054u;
            goto label_195054;
        }
    }
    ctx->pc = 0x19503Cu;
    // 0x19503c: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x19503cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x195040: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x195040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x195044: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x195044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195048: 0xc06dfb8  jal         func_1B7EE0
    ctx->pc = 0x195048u;
    SET_GPR_U32(ctx, 31, 0x195050u);
    ctx->pc = 0x19504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195048u;
    // 0x19504c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EE0u, 0x195048u, 0x195050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195050u;
label_195050:
    // 0x195050: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x195050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_195054:
    // 0x195054: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x195054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195058: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19505c: 0x3e00008  jr          $ra
    ctx->pc = 0x19505Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19505Cu;
        // 0x195060: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19505Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195064u;
    // 0x195064: 0x0  nop
    ctx->pc = 0x195064u;
    // NOP
    ctx->pc = 0x195068u;
}
