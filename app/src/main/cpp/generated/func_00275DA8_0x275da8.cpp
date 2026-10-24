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

// Function: func_00275DA8
// Address: 0x275da8 - 0x276090
void func_00275DA8_0x275da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00275DA8_0x275da8");
#endif

    switch (ctx->pc) {
        case 0x275df4u: goto label_275df4;
        case 0x275e10u: goto label_275e10;
        case 0x275e40u: goto label_275e40;
        case 0x275e64u: goto label_275e64;
        case 0x275e94u: goto label_275e94;
        case 0x275ec8u: goto label_275ec8;
        case 0x275efcu: goto label_275efc;
        case 0x275f0cu: goto label_275f0c;
        case 0x275f7cu: goto label_275f7c;
        case 0x275ff8u: goto label_275ff8;
        case 0x27605cu: goto label_27605c;
        default: break;
    }

    ctx->pc = 0x275da8u;

    // 0x275da8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x275da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x275dac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x275dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x275db0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x275db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x275db4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275db8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x275db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x275dbc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x275dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x275dc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275dc4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x275dc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x275dc8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x275dc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x275dcc: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x275dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x275dd0: 0x38420265  xori        $v0, $v0, 0x265
    ctx->pc = 0x275dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)613);
    // 0x275dd4: 0x144000a6  bnez        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x275DD4u;
    {
        const bool branch_taken_0x275dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DD4u;
        // 0x275dd8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275dd4) {
            ctx->pc = 0x276070u;
            goto label_276070;
        }
    }
    ctx->pc = 0x275DDCu;
    // 0x275ddc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x275ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x275de0: 0x8e250698  lw          $a1, 0x698($s1)
    ctx->pc = 0x275de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x275de4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x275de4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275de8: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x275de8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x275dec: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x275DECu;
    SET_GPR_U32(ctx, 31, 0x275DF4u);
    ctx->pc = 0x275DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275DECu;
    // 0x275df0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x275DECu, 0x275DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275DF4u;
label_275df4:
    // 0x275df4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x275DF4u;
    {
        const bool branch_taken_0x275df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DF4u;
        // 0x275df8: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275df4) {
            ctx->pc = 0x275E28u;
            goto label_275e28;
        }
    }
    ctx->pc = 0x275DFCu;
    // 0x275dfc: 0xae200698  sw          $zero, 0x698($s1)
    ctx->pc = 0x275dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 0));
    // 0x275e00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x275e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x275e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x275e08: 0x2623069c  addiu       $v1, $s1, 0x69C
    ctx->pc = 0x275e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1692));
    // 0x275e0c: 0x0  nop
    ctx->pc = 0x275e0cu;
    // NOP
label_275e10:
    // 0x275e10: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x275e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x275e14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x275e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x275e18: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x275e18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x275e1c: 0x0  nop
    ctx->pc = 0x275e1cu;
    // NOP
    // 0x275e20: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x275E20u;
    {
        const bool branch_taken_0x275e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E20u;
        // 0x275e24: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e20) {
            ctx->pc = 0x275E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275e10;
        }
    }
    ctx->pc = 0x275E28u;
label_275e28:
    // 0x275e28: 0x26102fc0  addiu       $s0, $s0, 0x2FC0
    ctx->pc = 0x275e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x275e2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x275e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x275e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x275e34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x275e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x275e38: 0xc04d1fa  jal         func_1347E8
    ctx->pc = 0x275E38u;
    SET_GPR_U32(ctx, 31, 0x275E40u);
    ctx->pc = 0x275E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E38u;
    // 0x275e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1347E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1347E8u, 0x275E38u, 0x275E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275E40u;
label_275e40:
    // 0x275e40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x275e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x275e44: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x275e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x275e48: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x275e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x275e4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x275e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x275e50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x275e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x275e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x275e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e5c: 0xc04d1be  jal         func_1346F8
    ctx->pc = 0x275E5Cu;
    SET_GPR_U32(ctx, 31, 0x275E64u);
    ctx->pc = 0x275E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E5Cu;
    // 0x275e60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x275E5Cu, 0x275E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275E64u;
label_275e64:
    // 0x275e64: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x275e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x275e68: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x275e68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x275e6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x275e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x275e70: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x275e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e74: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x275e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x275e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e7c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x275e7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275e80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x275e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e84: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x275e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x275e88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x275e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e8c: 0xc04d220  jal         func_134880
    ctx->pc = 0x275E8Cu;
    SET_GPR_U32(ctx, 31, 0x275E94u);
    ctx->pc = 0x275E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E8Cu;
    // 0x275e90: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x275E8Cu, 0x275E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275E94u;
label_275e94:
    // 0x275e94: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x275e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
    // 0x275e98: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x275e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x275e9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275ea0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x275ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ea4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x275ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x275ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275eac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x275eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x275eb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x275eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275eb4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x275eb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275eb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x275eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ebc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x275ebcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x275ec0: 0xc04d220  jal         func_134880
    ctx->pc = 0x275EC0u;
    SET_GPR_U32(ctx, 31, 0x275EC8u);
    ctx->pc = 0x275EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275EC0u;
    // 0x275ec4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x275EC0u, 0x275EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275EC8u;
label_275ec8:
    // 0x275ec8: 0x3c01bfb3  lui         $at, 0xBFB3
    ctx->pc = 0x275ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49075 << 16));
    // 0x275ecc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x275eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x275ed0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ed8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x275ed8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275edc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x275edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ee0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x275ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x275ee4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x275ee4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x275ee8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x275ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x275eec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x275eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ef0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x275ef0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x275ef4: 0xc04d220  jal         func_134880
    ctx->pc = 0x275EF4u;
    SET_GPR_U32(ctx, 31, 0x275EFCu);
    ctx->pc = 0x275EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275EF4u;
    // 0x275ef8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x275EF4u, 0x275EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275EFCu;
label_275efc:
    // 0x275efc: 0x26644380  addiu       $a0, $s3, 0x4380
    ctx->pc = 0x275efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    // 0x275f00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x275f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f04: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x275F04u;
    SET_GPR_U32(ctx, 31, 0x275F0Cu);
    ctx->pc = 0x275F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275F04u;
    // 0x275f08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x275F04u, 0x275F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275F0Cu;
label_275f0c:
    // 0x275f0c: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x275f0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x275f10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x275f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275f14: 0xae220698  sw          $v0, 0x698($s1)
    ctx->pc = 0x275f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 2));
    // 0x275f18: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x275f18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x275f1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x275F1Cu;
    {
        const bool branch_taken_0x275f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F1Cu;
        // 0x275f20: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f1c) {
            ctx->pc = 0x275F30u;
            goto label_275f30;
        }
    }
    ctx->pc = 0x275F24u;
    // 0x275f24: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x275f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x275f28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275F28u;
    {
        const bool branch_taken_0x275f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F28u;
        // 0x275f2c: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f28) {
            ctx->pc = 0x275F34u;
            goto label_275f34;
        }
    }
    ctx->pc = 0x275F30u;
label_275f30:
    // 0x275f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275f34:
    // 0x275f34: 0xc6220118  lwc1        $f2, 0x118($s1)
    ctx->pc = 0x275f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275f38: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x275f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x275f3c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x275f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x275f40: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x275f40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x275f44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x275f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x275f48: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x275f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f4c: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x275f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x275f50: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x275f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x275f54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x275f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275f58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x275f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x275f5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275f60: 0x460c1302  mul.s       $f12, $f2, $f12
    ctx->pc = 0x275f60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x275f64: 0x8e240698  lw          $a0, 0x698($s1)
    ctx->pc = 0x275f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x275f68: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x275f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275f6c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x275f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x275f70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x275f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x275f74: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x275F74u;
    SET_GPR_U32(ctx, 31, 0x275F7Cu);
    ctx->pc = 0x275F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275F74u;
    // 0x275f78: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x275F74u, 0x275F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275F7Cu;
label_275f7c:
    // 0x275f7c: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x275f7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x275f80: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x275f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x275f84: 0xae22069c  sw          $v0, 0x69C($s1)
    ctx->pc = 0x275f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 2));
    // 0x275f88: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x275f88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x275f8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x275F8Cu;
    {
        const bool branch_taken_0x275f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F8Cu;
        // 0x275f90: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f8c) {
            ctx->pc = 0x275FA0u;
            goto label_275fa0;
        }
    }
    ctx->pc = 0x275F94u;
    // 0x275f94: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x275f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x275f98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275F98u;
    {
        const bool branch_taken_0x275f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F98u;
        // 0x275f9c: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f98) {
            ctx->pc = 0x275FA4u;
            goto label_275fa4;
        }
    }
    ctx->pc = 0x275FA0u;
label_275fa0:
    // 0x275fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275fa4:
    // 0x275fa4: 0xc6210118  lwc1        $f1, 0x118($s1)
    ctx->pc = 0x275fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275fa8: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x275fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x275fac: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x275facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x275fb0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x275fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x275fb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x275fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x275fb8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x275fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275fbc: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x275fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x275fc0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x275fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x275fc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x275fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x275fc8: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x275fc8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x275fcc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x275fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x275fd0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x275fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x275fd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275fd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x275fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x275fdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x275fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275fe0: 0x8e240698  lw          $a0, 0x698($s1)
    ctx->pc = 0x275fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x275fe4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x275fe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275fe8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x275fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x275fec: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x275fecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x275ff0: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x275FF0u;
    SET_GPR_U32(ctx, 31, 0x275FF8u);
    ctx->pc = 0x275FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275FF0u;
    // 0x275ff4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x275FF0u, 0x275FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275FF8u;
label_275ff8:
    // 0x275ff8: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x275ff8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x275ffc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x275ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x276000: 0xae2206a0  sw          $v0, 0x6A0($s1)
    ctx->pc = 0x276000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1696), GPR_U32(ctx, 2));
    // 0x276004: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x276004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x276008: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x276008u;
    {
        const bool branch_taken_0x276008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276008u;
        // 0x27600c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276008) {
            ctx->pc = 0x27601Cu;
            goto label_27601c;
        }
    }
    ctx->pc = 0x276010u;
    // 0x276010: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x276010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x276014: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x276014u;
    {
        const bool branch_taken_0x276014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276014u;
        // 0x276018: 0x8c450080  lw          $a1, 0x80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276014) {
            ctx->pc = 0x276020u;
            goto label_276020;
        }
    }
    ctx->pc = 0x27601Cu;
label_27601c:
    // 0x27601c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27601cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276020:
    // 0x276020: 0xc6210118  lwc1        $f1, 0x118($s1)
    ctx->pc = 0x276020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276024: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x276024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x276028: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x276028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x27602c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x27602cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x276030: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x276030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x276034: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x276034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276038: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x276038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27603c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27603cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276040: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x276040u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x276044: 0x8e240698  lw          $a0, 0x698($s1)
    ctx->pc = 0x276044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x276048: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x276048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x27604c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27604cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x276050: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x276050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x276054: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x276054u;
    SET_GPR_U32(ctx, 31, 0x27605Cu);
    ctx->pc = 0x276058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276054u;
    // 0x276058: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x276054u, 0x27605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27605Cu;
label_27605c:
    // 0x27605c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27605cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x276060: 0xae2206a4  sw          $v0, 0x6A4($s1)
    ctx->pc = 0x276060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1700), GPR_U32(ctx, 2));
    // 0x276064: 0xae2306ac  sw          $v1, 0x6AC($s1)
    ctx->pc = 0x276064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1708), GPR_U32(ctx, 3));
    // 0x276068: 0xae2306a8  sw          $v1, 0x6A8($s1)
    ctx->pc = 0x276068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 3));
    // 0x27606c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27606cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_276070:
    // 0x276070: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x276070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276074: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x276074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276078: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x276078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27607c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27607cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276080: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x276080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x276084: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x276084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276088: 0x3e00008  jr          $ra
    ctx->pc = 0x276088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276088u;
        // 0x27608c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276090u;
}
