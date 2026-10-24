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

// Function: func_00253DE8
// Address: 0x253de8 - 0x254450
void func_00253DE8_0x253de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00253DE8_0x253de8");
#endif

    switch (ctx->pc) {
        case 0x253e74u: goto label_253e74;
        case 0x253e88u: goto label_253e88;
        case 0x253eb8u: goto label_253eb8;
        case 0x253ed0u: goto label_253ed0;
        case 0x253f48u: goto label_253f48;
        case 0x253f74u: goto label_253f74;
        case 0x254030u: goto label_254030;
        case 0x25404cu: goto label_25404c;
        case 0x2540c4u: goto label_2540c4;
        case 0x2540f0u: goto label_2540f0;
        case 0x2541acu: goto label_2541ac;
        case 0x2541c8u: goto label_2541c8;
        case 0x2541d8u: goto label_2541d8;
        case 0x254200u: goto label_254200;
        case 0x25421cu: goto label_25421c;
        case 0x25426cu: goto label_25426c;
        case 0x254284u: goto label_254284;
        case 0x254294u: goto label_254294;
        case 0x2542a8u: goto label_2542a8;
        case 0x2542b4u: goto label_2542b4;
        case 0x254310u: goto label_254310;
        case 0x254364u: goto label_254364;
        case 0x254388u: goto label_254388;
        case 0x2543c8u: goto label_2543c8;
        case 0x2543dcu: goto label_2543dc;
        default: break;
    }

    ctx->pc = 0x253de8u;

    // 0x253de8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x253de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x253dec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x253decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x253df0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x253df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x253df4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x253df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253df8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x253df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x253dfc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x253dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x253e00: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x253e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x253e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253e08: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x253e08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x253e0c: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x253e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x253e10: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x253e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x253e14: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x253e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x253e18: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x253E18u;
    {
        const bool branch_taken_0x253e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E18u;
        // 0x253e1c: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e18) {
            ctx->pc = 0x253E34u;
            goto label_253e34;
        }
    }
    ctx->pc = 0x253E20u;
    // 0x253e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253e24: 0x106200fb  beq         $v1, $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x253E24u;
    {
        const bool branch_taken_0x253e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x253E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E24u;
        // 0x253e28: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e24) {
            ctx->pc = 0x254214u;
            goto label_254214;
        }
    }
    ctx->pc = 0x253E2Cu;
    // 0x253e2c: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x253E2Cu;
    {
        const bool branch_taken_0x253e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E2Cu;
        // 0x253e30: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e2c) {
            ctx->pc = 0x254430u;
            goto label_254430;
        }
    }
    ctx->pc = 0x253E34u;
label_253e34:
    // 0x253e34: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x253e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x253e38: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x253E38u;
    {
        const bool branch_taken_0x253e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253e38) {
            ctx->pc = 0x253E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253E38u;
            // 0x253e3c: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253E8Cu;
            goto label_253e8c;
        }
    }
    ctx->pc = 0x253E40u;
    // 0x253e40: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x253e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x253e44: 0x2444fdd9  addiu       $a0, $v0, -0x227
    ctx->pc = 0x253e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966745));
    // 0x253e48: 0x2c830034  sltiu       $v1, $a0, 0x34
    ctx->pc = 0x253e48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x253e4c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x253E4Cu;
    {
        const bool branch_taken_0x253e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E4Cu;
        // 0x253e50: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e4c) {
            ctx->pc = 0x253E6Cu;
            goto label_253e6c;
        }
    }
    ctx->pc = 0x253E54u;
    // 0x253e54: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x253e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x253e58: 0x24420230  addiu       $v0, $v0, 0x230
    ctx->pc = 0x253e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x253e5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x253e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253e60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x253e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253e64: 0x800008  jr          $a0
    ctx->pc = 0x253E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253E6Cu: goto label_253e6c;
            case 0x253E88u: goto label_253e88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253E64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253E6Cu;
label_253e6c:
    // 0x253e6c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x253E6Cu;
    SET_GPR_U32(ctx, 31, 0x253E74u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x253E6Cu, 0x253E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E74u;
label_253e74:
    // 0x253e74: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x253e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x253e78: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x253E78u;
    {
        const bool branch_taken_0x253e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253e78) {
            ctx->pc = 0x253E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253E78u;
            // 0x253e7c: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253E8Cu;
            goto label_253e8c;
        }
    }
    ctx->pc = 0x253E80u;
    // 0x253e80: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x253E80u;
    SET_GPR_U32(ctx, 31, 0x253E88u);
    ctx->pc = 0x253E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E80u;
    // 0x253e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x253E80u, 0x253E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E88u;
label_253e88:
    // 0x253e88: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x253e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_253e8c:
    // 0x253e8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x253E8Cu;
    {
        const bool branch_taken_0x253e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E8Cu;
        // 0x253e90: 0xae201710  sw          $zero, 0x1710($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e8c) {
            ctx->pc = 0x253EB8u;
            goto label_253eb8;
        }
    }
    ctx->pc = 0x253E94u;
    // 0x253e94: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x253e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x253e98: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x253E98u;
    {
        const bool branch_taken_0x253e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253e98) {
            ctx->pc = 0x253E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253E98u;
            // 0x253e9c: 0x923002f7  lbu         $s0, 0x2F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253EBCu;
            goto label_253ebc;
        }
    }
    ctx->pc = 0x253EA0u;
    // 0x253ea0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x253ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x253ea4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x253ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x253ea8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x253ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x253eac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x253eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x253eb0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x253EB0u;
    SET_GPR_U32(ctx, 31, 0x253EB8u);
    ctx->pc = 0x253EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253EB0u;
    // 0x253eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x253EB0u, 0x253EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253EB8u;
label_253eb8:
    // 0x253eb8: 0x923002f7  lbu         $s0, 0x2F7($s1)
    ctx->pc = 0x253eb8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_253ebc:
    // 0x253ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ec0: 0x922317c3  lbu         $v1, 0x17C3($s1)
    ctx->pc = 0x253ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6083)));
    // 0x253ec4: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x253ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x253ec8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x253EC8u;
    SET_GPR_U32(ctx, 31, 0x253ED0u);
    ctx->pc = 0x253ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253EC8u;
    // 0x253ecc: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x253EC8u, 0x253ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253ED0u;
label_253ed0:
    // 0x253ed0: 0x16000060  bnez        $s0, . + 4 + (0x60 << 2)
    ctx->pc = 0x253ED0u;
    {
        const bool branch_taken_0x253ed0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x253ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253ED0u;
        // 0x253ed4: 0x3054ffff  andi        $s4, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ed0) {
            ctx->pc = 0x254054u;
            goto label_254054;
        }
    }
    ctx->pc = 0x253ED8u;
    // 0x253ed8: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x253ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x253edc: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x253edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x253ee0: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x253ee0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x253ee4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x253EE4u;
    {
        const bool branch_taken_0x253ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EE4u;
        // 0x253ee8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ee4) {
            ctx->pc = 0x253F04u;
            goto label_253f04;
        }
    }
    ctx->pc = 0x253EECu;
    // 0x253eec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x253eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x253ef0: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x253ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x253ef4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x253ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253ef8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x253ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253efc: 0x800008  jr          $a0
    ctx->pc = 0x253EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253F04u: goto label_253f04;
            case 0x253F14u: goto label_253f14;
            case 0x253F24u: goto label_253f24;
            case 0x253F7Cu: goto label_253f7c;
            case 0x253F8Cu: goto label_253f8c;
            case 0x253F9Cu: goto label_253f9c;
            case 0x253FACu: goto label_253fac;
            case 0x253FBCu: goto label_253fbc;
            case 0x253FCCu: goto label_253fcc;
            case 0x253FDCu: goto label_253fdc;
            case 0x253FECu: goto label_253fec;
            case 0x253FFCu: goto label_253ffc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253EFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253F04u;
label_253f04:
    // 0x253f04: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x253f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x253f08: 0x8c4305e0  lw          $v1, 0x5E0($v0)
    ctx->pc = 0x253f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1504)));
    // 0x253f0c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x253F0Cu;
    {
        const bool branch_taken_0x253f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F0Cu;
        // 0x253f10: 0x8c4405e4  lw          $a0, 0x5E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f0c) {
            ctx->pc = 0x254008u;
            goto label_254008;
        }
    }
    ctx->pc = 0x253F14u;
label_253f14:
    // 0x253f14: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x253f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x253f18: 0x8c430abc  lw          $v1, 0xABC($v0)
    ctx->pc = 0x253f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2748)));
    // 0x253f1c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x253F1Cu;
    {
        const bool branch_taken_0x253f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F1Cu;
        // 0x253f20: 0x8c440ac0  lw          $a0, 0xAC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f1c) {
            ctx->pc = 0x254008u;
            goto label_254008;
        }
    }
    ctx->pc = 0x253F24u;
label_253f24:
    // 0x253f24: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x253f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x253f28: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x253f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x253f2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f30: 0x2470ee00  addiu       $s0, $v1, -0x1200
    ctx->pc = 0x253f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x253f34: 0x8c460abc  lw          $a2, 0xABC($v0)
    ctx->pc = 0x253f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2748)));
    // 0x253f38: 0x8c450ac0  lw          $a1, 0xAC0($v0)
    ctx->pc = 0x253f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2752)));
    // 0x253f3c: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x253f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x253f40: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x253F40u;
    SET_GPR_U32(ctx, 31, 0x253F48u);
    ctx->pc = 0x253F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F40u;
    // 0x253f44: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x253F40u, 0x253F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F48u;
label_253f48:
    // 0x253f48: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x253f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x253f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x253f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x253f54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253f58: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x253f58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x253f5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x253f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x253f60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x253f64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x253f68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f6c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x253F6Cu;
    SET_GPR_U32(ctx, 31, 0x253F74u);
    ctx->pc = 0x253F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F6Cu;
    // 0x253f70: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x253F6Cu, 0x253F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F74u;
label_253f74:
    // 0x253f74: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x253F74u;
    {
        const bool branch_taken_0x253f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253f74) {
            ctx->pc = 0x254010u;
            goto label_254010;
        }
    }
    ctx->pc = 0x253F7Cu;
label_253f7c:
    // 0x253f7c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x253f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x253f80: 0x8c430abc  lw          $v1, 0xABC($v0)
    ctx->pc = 0x253f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2748)));
    // 0x253f84: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x253F84u;
    {
        const bool branch_taken_0x253f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F84u;
        // 0x253f88: 0x8c440ac0  lw          $a0, 0xAC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f84) {
            ctx->pc = 0x254008u;
            goto label_254008;
        }
    }
    ctx->pc = 0x253F8Cu;
label_253f8c:
    // 0x253f8c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x253f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x253f90: 0x8c433300  lw          $v1, 0x3300($v0)
    ctx->pc = 0x253f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13056)));
    // 0x253f94: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x253F94u;
    {
        const bool branch_taken_0x253f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F94u;
        // 0x253f98: 0x8c443304  lw          $a0, 0x3304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f94) {
            ctx->pc = 0x254008u;
            goto label_254008;
        }
    }
    ctx->pc = 0x253F9Cu;
label_253f9c:
    // 0x253f9c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x253f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x253fa0: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x253fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x253fa4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x253FA4u;
    {
        const bool branch_taken_0x253fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FA4u;
        // 0x253fa8: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fa4) {
            ctx->pc = 0x254008u;
            goto label_254008;
        }
    }
    ctx->pc = 0x253FACu;
label_253fac:
    // 0x253fac: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x253facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x253fb0: 0x8c430efc  lw          $v1, 0xEFC($v0)
    ctx->pc = 0x253fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3836)));
    // 0x253fb4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x253FB4u;
    {
        const bool branch_taken_0x253fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FB4u;
        // 0x253fb8: 0x8c440f00  lw          $a0, 0xF00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fb4) {
            ctx->pc = 0x254008u;
            goto label_254008;
        }
    }
    ctx->pc = 0x253FBCu;
label_253fbc:
    // 0x253fbc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x253fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x253fc0: 0x8c431750  lw          $v1, 0x1750($v0)
    ctx->pc = 0x253fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5968)));
    // 0x253fc4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x253FC4u;
    {
        const bool branch_taken_0x253fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FC4u;
        // 0x253fc8: 0x8c441754  lw          $a0, 0x1754($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fc4) {
            ctx->pc = 0x254008u;
            goto label_254008;
        }
    }
    ctx->pc = 0x253FCCu;
label_253fcc:
    // 0x253fcc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x253fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x253fd0: 0x8c431750  lw          $v1, 0x1750($v0)
    ctx->pc = 0x253fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5968)));
    // 0x253fd4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x253FD4u;
    {
        const bool branch_taken_0x253fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FD4u;
        // 0x253fd8: 0x8c441754  lw          $a0, 0x1754($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fd4) {
            ctx->pc = 0x254008u;
            goto label_254008;
        }
    }
    ctx->pc = 0x253FDCu;
label_253fdc:
    // 0x253fdc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x253fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x253fe0: 0x8c4305e0  lw          $v1, 0x5E0($v0)
    ctx->pc = 0x253fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1504)));
    // 0x253fe4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x253FE4u;
    {
        const bool branch_taken_0x253fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FE4u;
        // 0x253fe8: 0x8c4405e4  lw          $a0, 0x5E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fe4) {
            ctx->pc = 0x254008u;
            goto label_254008;
        }
    }
    ctx->pc = 0x253FECu;
label_253fec:
    // 0x253fec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x253fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x253ff0: 0x8c432e4c  lw          $v1, 0x2E4C($v0)
    ctx->pc = 0x253ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11852)));
    // 0x253ff4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x253FF4u;
    {
        const bool branch_taken_0x253ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FF4u;
        // 0x253ff8: 0x8c442e50  lw          $a0, 0x2E50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ff4) {
            ctx->pc = 0x254008u;
            goto label_254008;
        }
    }
    ctx->pc = 0x253FFCu;
label_253ffc:
    // 0x253ffc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x253ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254000: 0x8c431328  lw          $v1, 0x1328($v0)
    ctx->pc = 0x254000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4904)));
    // 0x254004: 0x8c44132c  lw          $a0, 0x132C($v0)
    ctx->pc = 0x254004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4908)));
label_254008:
    // 0x254008: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x254008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25400c: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x25400cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_254010:
    // 0x254010: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x254010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x254014: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x254014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254018: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x254018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25401c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x25401cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254024: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x254024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x254028: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x254028u;
    SET_GPR_U32(ctx, 31, 0x254030u);
    ctx->pc = 0x25402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254028u;
    // 0x25402c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x254028u, 0x254030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254030u;
label_254030:
    // 0x254030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254034: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x254034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x254038: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x254038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x25403c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25403cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254040: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x254040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254044: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x254044u;
    SET_GPR_U32(ctx, 31, 0x25404Cu);
    ctx->pc = 0x254048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254044u;
    // 0x254048: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x254044u, 0x25404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25404Cu;
label_25404c:
    // 0x25404c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x25404Cu;
    {
        const bool branch_taken_0x25404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25404Cu;
        // 0x254050: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25404c) {
            ctx->pc = 0x2541CCu;
            goto label_2541cc;
        }
    }
    ctx->pc = 0x254054u;
label_254054:
    // 0x254054: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x254054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x254058: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x254058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x25405c: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x25405cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x254060: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x254060u;
    {
        const bool branch_taken_0x254060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x254064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254060u;
        // 0x254064: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254060) {
            ctx->pc = 0x254080u;
            goto label_254080;
        }
    }
    ctx->pc = 0x254068u;
    // 0x254068: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x254068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25406c: 0x244204e0  addiu       $v0, $v0, 0x4E0
    ctx->pc = 0x25406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1248));
    // 0x254070: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x254070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254074: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x254074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254078: 0x800008  jr          $a0
    ctx->pc = 0x254078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254080u: goto label_254080;
            case 0x254090u: goto label_254090;
            case 0x2540A0u: goto label_2540a0;
            case 0x2540F8u: goto label_2540f8;
            case 0x254108u: goto label_254108;
            case 0x254118u: goto label_254118;
            case 0x254128u: goto label_254128;
            case 0x254138u: goto label_254138;
            case 0x254148u: goto label_254148;
            case 0x254158u: goto label_254158;
            case 0x254168u: goto label_254168;
            case 0x254178u: goto label_254178;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254078u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x254080u;
label_254080:
    // 0x254080: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254084: 0x8c4305e8  lw          $v1, 0x5E8($v0)
    ctx->pc = 0x254084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1512)));
    // 0x254088: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x254088u;
    {
        const bool branch_taken_0x254088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254088u;
        // 0x25408c: 0x8c4405ec  lw          $a0, 0x5EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254088) {
            ctx->pc = 0x254184u;
            goto label_254184;
        }
    }
    ctx->pc = 0x254090u;
label_254090:
    // 0x254090: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254094: 0x8c430ac4  lw          $v1, 0xAC4($v0)
    ctx->pc = 0x254094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2756)));
    // 0x254098: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x254098u;
    {
        const bool branch_taken_0x254098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254098u;
        // 0x25409c: 0x8c440ac8  lw          $a0, 0xAC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254098) {
            ctx->pc = 0x254184u;
            goto label_254184;
        }
    }
    ctx->pc = 0x2540A0u;
label_2540a0:
    // 0x2540a0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2540a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2540a4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2540a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2540a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2540a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540ac: 0x2470ee00  addiu       $s0, $v1, -0x1200
    ctx->pc = 0x2540acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x2540b0: 0x8c460ac4  lw          $a2, 0xAC4($v0)
    ctx->pc = 0x2540b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2756)));
    // 0x2540b4: 0x8c450ac8  lw          $a1, 0xAC8($v0)
    ctx->pc = 0x2540b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2760)));
    // 0x2540b8: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x2540b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2540bc: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2540BCu;
    SET_GPR_U32(ctx, 31, 0x2540C4u);
    ctx->pc = 0x2540C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540BCu;
    // 0x2540c0: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2540BCu, 0x2540C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2540C4u;
label_2540c4:
    // 0x2540c4: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x2540c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x2540c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2540c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2540ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2540d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2540d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2540d4: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2540d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2540d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2540d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2540dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2540e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2540e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540e8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2540E8u;
    SET_GPR_U32(ctx, 31, 0x2540F0u);
    ctx->pc = 0x2540ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540E8u;
    // 0x2540ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2540E8u, 0x2540F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2540F0u;
label_2540f0:
    // 0x2540f0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2540F0u;
    {
        const bool branch_taken_0x2540f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2540f0) {
            ctx->pc = 0x25418Cu;
            goto label_25418c;
        }
    }
    ctx->pc = 0x2540F8u;
label_2540f8:
    // 0x2540f8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2540f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2540fc: 0x8c430ac4  lw          $v1, 0xAC4($v0)
    ctx->pc = 0x2540fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2756)));
    // 0x254100: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x254100u;
    {
        const bool branch_taken_0x254100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254100u;
        // 0x254104: 0x8c440ac8  lw          $a0, 0xAC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254100) {
            ctx->pc = 0x254184u;
            goto label_254184;
        }
    }
    ctx->pc = 0x254108u;
label_254108:
    // 0x254108: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25410c: 0x8c433300  lw          $v1, 0x3300($v0)
    ctx->pc = 0x25410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13056)));
    // 0x254110: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x254110u;
    {
        const bool branch_taken_0x254110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254110u;
        // 0x254114: 0x8c443304  lw          $a0, 0x3304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254110) {
            ctx->pc = 0x254184u;
            goto label_254184;
        }
    }
    ctx->pc = 0x254118u;
label_254118:
    // 0x254118: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25411c: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x25411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x254120: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x254120u;
    {
        const bool branch_taken_0x254120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254120u;
        // 0x254124: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254120) {
            ctx->pc = 0x254184u;
            goto label_254184;
        }
    }
    ctx->pc = 0x254128u;
label_254128:
    // 0x254128: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25412c: 0x8c430f04  lw          $v1, 0xF04($v0)
    ctx->pc = 0x25412cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3844)));
    // 0x254130: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x254130u;
    {
        const bool branch_taken_0x254130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254130u;
        // 0x254134: 0x8c440f08  lw          $a0, 0xF08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254130) {
            ctx->pc = 0x254184u;
            goto label_254184;
        }
    }
    ctx->pc = 0x254138u;
label_254138:
    // 0x254138: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25413c: 0x8c431758  lw          $v1, 0x1758($v0)
    ctx->pc = 0x25413cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5976)));
    // 0x254140: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x254140u;
    {
        const bool branch_taken_0x254140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254140u;
        // 0x254144: 0x8c44175c  lw          $a0, 0x175C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5980)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254140) {
            ctx->pc = 0x254184u;
            goto label_254184;
        }
    }
    ctx->pc = 0x254148u;
label_254148:
    // 0x254148: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25414c: 0x8c431758  lw          $v1, 0x1758($v0)
    ctx->pc = 0x25414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5976)));
    // 0x254150: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x254150u;
    {
        const bool branch_taken_0x254150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254150u;
        // 0x254154: 0x8c44175c  lw          $a0, 0x175C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5980)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254150) {
            ctx->pc = 0x254184u;
            goto label_254184;
        }
    }
    ctx->pc = 0x254158u;
label_254158:
    // 0x254158: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25415c: 0x8c4305e8  lw          $v1, 0x5E8($v0)
    ctx->pc = 0x25415cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1512)));
    // 0x254160: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254160u;
    {
        const bool branch_taken_0x254160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254160u;
        // 0x254164: 0x8c4405ec  lw          $a0, 0x5EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254160) {
            ctx->pc = 0x254184u;
            goto label_254184;
        }
    }
    ctx->pc = 0x254168u;
label_254168:
    // 0x254168: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25416c: 0x8c432e4c  lw          $v1, 0x2E4C($v0)
    ctx->pc = 0x25416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11852)));
    // 0x254170: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x254170u;
    {
        const bool branch_taken_0x254170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254170u;
        // 0x254174: 0x8c442e50  lw          $a0, 0x2E50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254170) {
            ctx->pc = 0x254184u;
            goto label_254184;
        }
    }
    ctx->pc = 0x254178u;
label_254178:
    // 0x254178: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25417c: 0x8c431330  lw          $v1, 0x1330($v0)
    ctx->pc = 0x25417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4912)));
    // 0x254180: 0x8c441334  lw          $a0, 0x1334($v0)
    ctx->pc = 0x254180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4916)));
label_254184:
    // 0x254184: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x254184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254188: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x254188u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25418c:
    // 0x25418c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25418cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x254190: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x254190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254194: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x254194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254198: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x254198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25419c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25419cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541a0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2541a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2541a4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2541A4u;
    SET_GPR_U32(ctx, 31, 0x2541ACu);
    ctx->pc = 0x2541A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2541A4u;
    // 0x2541a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2541A4u, 0x2541ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2541ACu;
label_2541ac:
    // 0x2541ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2541acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541b0: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x2541b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2541b4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2541b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2541b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2541b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541bc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2541bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2541c0: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x2541C0u;
    SET_GPR_U32(ctx, 31, 0x2541C8u);
    ctx->pc = 0x2541C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2541C0u;
    // 0x2541c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x2541C0u, 0x2541C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2541C8u;
label_2541c8:
    // 0x2541c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2541c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2541cc:
    // 0x2541cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2541ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541d0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2541D0u;
    SET_GPR_U32(ctx, 31, 0x2541D8u);
    ctx->pc = 0x2541D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2541D0u;
    // 0x2541d4: 0x2450ee00  addiu       $s0, $v0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2541D0u, 0x2541D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2541D8u;
label_2541d8:
    // 0x2541d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2541d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2541dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2541dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541e0: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2541e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2541e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2541e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2541e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2541e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2541ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2541f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2541f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541f8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2541F8u;
    SET_GPR_U32(ctx, 31, 0x254200u);
    ctx->pc = 0x2541FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2541F8u;
    // 0x2541fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2541F8u, 0x254200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254200u;
label_254200:
    // 0x254200: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x254200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x254204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254208: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x254208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x25420c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x254210: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x254210u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_254214:
    // 0x254214: 0xc055f06  jal         func_157C18
    ctx->pc = 0x254214u;
    SET_GPR_U32(ctx, 31, 0x25421Cu);
    ctx->pc = 0x254218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254214u;
    // 0x254218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x254214u, 0x25421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25421Cu;
label_25421c:
    // 0x25421c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x25421Cu;
    {
        const bool branch_taken_0x25421c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25421c) {
            ctx->pc = 0x254294u;
            goto label_254294;
        }
    }
    ctx->pc = 0x254224u;
    // 0x254224: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x254224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x254228: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x254228u;
    {
        const bool branch_taken_0x254228 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x25422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254228u;
        // 0x25422c: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254228) {
            ctx->pc = 0x25427Cu;
            goto label_25427c;
        }
    }
    ctx->pc = 0x254230u;
    // 0x254230: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x254230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x254234: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x254234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x254238: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x254238u;
    {
        const bool branch_taken_0x254238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254238u;
        // 0x25423c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254238) {
            ctx->pc = 0x254318u;
            goto label_254318;
        }
    }
    ctx->pc = 0x254240u;
    // 0x254240: 0x8e221644  lw          $v0, 0x1644($s1)
    ctx->pc = 0x254240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5700)));
    // 0x254244: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x254244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x254248: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x254248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25424c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25424Cu;
    {
        const bool branch_taken_0x25424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25424Cu;
        // 0x254250: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25424c) {
            ctx->pc = 0x25425Cu;
            goto label_25425c;
        }
    }
    ctx->pc = 0x254254u;
    // 0x254254: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x254254u;
    {
        const bool branch_taken_0x254254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254254u;
        // 0x254258: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254254) {
            ctx->pc = 0x254330u;
            goto label_254330;
        }
    }
    ctx->pc = 0x25425Cu;
label_25425c:
    // 0x25425c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254260: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x254260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x254264: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x254264u;
    SET_GPR_U32(ctx, 31, 0x25426Cu);
    ctx->pc = 0x254268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254264u;
    // 0x254268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x254264u, 0x25426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25426Cu;
label_25426c:
    // 0x25426c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x25426Cu;
    {
        const bool branch_taken_0x25426c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25426Cu;
        // 0x254270: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25426c) {
            ctx->pc = 0x254318u;
            goto label_254318;
        }
    }
    ctx->pc = 0x254274u;
    // 0x254274: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x254274u;
    {
        const bool branch_taken_0x254274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254274u;
        // 0x254278: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254274) {
            ctx->pc = 0x254330u;
            goto label_254330;
        }
    }
    ctx->pc = 0x25427Cu;
label_25427c:
    // 0x25427c: 0xc09d3a6  jal         func_274E98
    ctx->pc = 0x25427Cu;
    SET_GPR_U32(ctx, 31, 0x254284u);
    ctx->pc = 0x254280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25427Cu;
    // 0x254280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E98u, 0x25427Cu, 0x254284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254284u;
label_254284:
    // 0x254284: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x254284u;
    {
        const bool branch_taken_0x254284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254284u;
        // 0x254288: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254284) {
            ctx->pc = 0x25442Cu;
            goto label_25442c;
        }
    }
    ctx->pc = 0x25428Cu;
    // 0x25428c: 0xc09d3fa  jal         func_274FE8
    ctx->pc = 0x25428Cu;
    SET_GPR_U32(ctx, 31, 0x254294u);
    ctx->pc = 0x254290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25428Cu;
    // 0x254290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x25428Cu, 0x254294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254294u;
label_254294:
    // 0x254294: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x254294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x254298: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x254298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25429c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2542a0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2542A0u;
    SET_GPR_U32(ctx, 31, 0x2542A8u);
    ctx->pc = 0x2542A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2542A0u;
    // 0x2542a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2542A0u, 0x2542A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2542A8u;
label_2542a8:
    // 0x2542a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2542a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2542ac: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2542ACu;
    SET_GPR_U32(ctx, 31, 0x2542B4u);
    ctx->pc = 0x2542B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2542ACu;
    // 0x2542b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2542ACu, 0x2542B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2542B4u;
label_2542b4:
    // 0x2542b4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2542b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2542b8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2542b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2542bc: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2542BCu;
    {
        const bool branch_taken_0x2542bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2542bc) {
            ctx->pc = 0x2542C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2542BCu;
            // 0x2542c0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254344u;
            goto label_254344;
        }
    }
    ctx->pc = 0x2542C4u;
    // 0x2542c4: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2542c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2542c8: 0x5c40001e  bgtzl       $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2542C8u;
    {
        const bool branch_taken_0x2542c8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2542c8) {
            ctx->pc = 0x2542CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2542C8u;
            // 0x2542cc: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254344u;
            goto label_254344;
        }
    }
    ctx->pc = 0x2542D0u;
    // 0x2542d0: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x2542d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2542d4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2542d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2542d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2542d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2542dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2542DCu;
    {
        const bool branch_taken_0x2542dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2542E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542DCu;
        // 0x2542e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542dc) {
            ctx->pc = 0x254318u;
            goto label_254318;
        }
    }
    ctx->pc = 0x2542E4u;
    // 0x2542e4: 0x8e221644  lw          $v0, 0x1644($s1)
    ctx->pc = 0x2542e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5700)));
    // 0x2542e8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2542e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2542ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2542ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2542f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2542F0u;
    {
        const bool branch_taken_0x2542f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2542F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542F0u;
        // 0x2542f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542f0) {
            ctx->pc = 0x254300u;
            goto label_254300;
        }
    }
    ctx->pc = 0x2542F8u;
    // 0x2542f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2542F8u;
    {
        const bool branch_taken_0x2542f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2542FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542F8u;
        // 0x2542fc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542f8) {
            ctx->pc = 0x254330u;
            goto label_254330;
        }
    }
    ctx->pc = 0x254300u;
label_254300:
    // 0x254300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254304: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x254304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x254308: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x254308u;
    SET_GPR_U32(ctx, 31, 0x254310u);
    ctx->pc = 0x25430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254308u;
    // 0x25430c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x254308u, 0x254310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254310u;
label_254310:
    // 0x254310: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x254310u;
    {
        const bool branch_taken_0x254310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254310u;
        // 0x254314: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254310) {
            ctx->pc = 0x25432Cu;
            goto label_25432c;
        }
    }
    ctx->pc = 0x254318u;
label_254318:
    // 0x254318: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x254318u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x25431c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x25431cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x254320: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x254320u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x254324: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x254324u;
    {
        const bool branch_taken_0x254324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254324u;
        // 0x254328: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254324) {
            ctx->pc = 0x254428u;
            goto label_254428;
        }
    }
    ctx->pc = 0x25432Cu;
label_25432c:
    // 0x25432c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25432cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254330:
    // 0x254330: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x254330u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x254334: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x254334u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x254338: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x254338u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x25433c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x25433Cu;
    {
        const bool branch_taken_0x25433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25433Cu;
        // 0x254340: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25433c) {
            ctx->pc = 0x254428u;
            goto label_254428;
        }
    }
    ctx->pc = 0x254344u;
label_254344:
    // 0x254344: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x254344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x254348: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x254348u;
    {
        const bool branch_taken_0x254348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254348u;
        // 0x25434c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254348) {
            ctx->pc = 0x25442Cu;
            goto label_25442c;
        }
    }
    ctx->pc = 0x254350u;
    // 0x254350: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x254350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x254354: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x254354u;
    {
        const bool branch_taken_0x254354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254354) {
            ctx->pc = 0x254358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254354u;
            // 0x254358: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254430u;
            goto label_254430;
        }
    }
    ctx->pc = 0x25435Cu;
    // 0x25435c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x25435Cu;
    SET_GPR_U32(ctx, 31, 0x254364u);
    ctx->pc = 0x254360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25435Cu;
    // 0x254360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x25435Cu, 0x254364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254364u;
label_254364:
    // 0x254364: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x254364u;
    {
        const bool branch_taken_0x254364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254364u;
        // 0x254368: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254364) {
            ctx->pc = 0x25442Cu;
            goto label_25442c;
        }
    }
    ctx->pc = 0x25436Cu;
    // 0x25436c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x25436cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x254370: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x254370u;
    {
        const bool branch_taken_0x254370 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x254374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254370u;
        // 0x254374: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254370) {
            ctx->pc = 0x25442Cu;
            goto label_25442c;
        }
    }
    ctx->pc = 0x254378u;
    // 0x254378: 0xae2005f0  sw          $zero, 0x5F0($s1)
    ctx->pc = 0x254378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 0));
    // 0x25437c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x25437cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x254380: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x254380u;
    SET_GPR_U32(ctx, 31, 0x254388u);
    ctx->pc = 0x254384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254380u;
    // 0x254384: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x254380u, 0x254388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254388u;
label_254388:
    // 0x254388: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x254388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25438c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x25438Cu;
    {
        const bool branch_taken_0x25438c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25438c) {
            ctx->pc = 0x254390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25438Cu;
            // 0x254390: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2543F8u;
            goto label_2543f8;
        }
    }
    ctx->pc = 0x254394u;
    // 0x254394: 0x922317b8  lbu         $v1, 0x17B8($s1)
    ctx->pc = 0x254394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6072)));
    // 0x254398: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x254398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25439c: 0x10720008  beq         $v1, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x25439Cu;
    {
        const bool branch_taken_0x25439c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2543A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25439Cu;
        // 0x2543a0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25439c) {
            ctx->pc = 0x2543C0u;
            goto label_2543c0;
        }
    }
    ctx->pc = 0x2543A4u;
    // 0x2543a4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2543A4u;
    {
        const bool branch_taken_0x2543a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2543a4) {
            ctx->pc = 0x2543A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2543A4u;
            // 0x2543a8: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2543F8u;
            goto label_2543f8;
        }
    }
    ctx->pc = 0x2543ACu;
    // 0x2543ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2543acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2543b0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2543B0u;
    {
        const bool branch_taken_0x2543b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2543b0) {
            ctx->pc = 0x2543D4u;
            goto label_2543d4;
        }
    }
    ctx->pc = 0x2543B8u;
    // 0x2543b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2543B8u;
    {
        const bool branch_taken_0x2543b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2543BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543B8u;
        // 0x2543bc: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543b8) {
            ctx->pc = 0x2543F8u;
            goto label_2543f8;
        }
    }
    ctx->pc = 0x2543C0u;
label_2543c0:
    // 0x2543c0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2543C0u;
    SET_GPR_U32(ctx, 31, 0x2543C8u);
    ctx->pc = 0x2543C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2543C0u;
    // 0x2543c4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2543C0u, 0x2543C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2543C8u;
label_2543c8:
    // 0x2543c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2543c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2543cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2543CCu;
    {
        const bool branch_taken_0x2543cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2543D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543CCu;
        // 0x2543d0: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543cc) {
            ctx->pc = 0x2543F4u;
            goto label_2543f4;
        }
    }
    ctx->pc = 0x2543D4u;
label_2543d4:
    // 0x2543d4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2543D4u;
    SET_GPR_U32(ctx, 31, 0x2543DCu);
    ctx->pc = 0x2543D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2543D4u;
    // 0x2543d8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2543D4u, 0x2543DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2543DCu;
label_2543dc:
    // 0x2543dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2543dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2543e0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2543e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2543e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2543E4u;
    {
        const bool branch_taken_0x2543e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2543e4) {
            ctx->pc = 0x2543E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2543E4u;
            // 0x2543e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2543ECu;
            goto label_2543ec;
        }
    }
    ctx->pc = 0x2543ECu;
label_2543ec:
    // 0x2543ec: 0x2010  mfhi        $a0
    ctx->pc = 0x2543ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2543f0: 0x4800a  movz        $s0, $zero, $a0
    ctx->pc = 0x2543f0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_2543f4:
    // 0x2543f4: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2543f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_2543f8:
    // 0x2543f8: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2543f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2543fc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2543fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x254400: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x254400u;
    {
        const bool branch_taken_0x254400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x254404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254400u;
        // 0x254404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254400) {
            ctx->pc = 0x254428u;
            goto label_254428;
        }
    }
    ctx->pc = 0x254408u;
    // 0x254408: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x254408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x25440c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25440cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254410: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x254410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x254414: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x254414u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x254418: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x254418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x25441c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x25441cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x254420: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x254420u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x254424: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x254424u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_254428:
    // 0x254428: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x254428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25442c:
    // 0x25442c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25442cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_254430:
    // 0x254430: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x254430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254434: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x254434u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254438: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x254438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25443c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25443cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254440: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x254440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x254444: 0x3e00008  jr          $ra
    ctx->pc = 0x254444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254444u;
        // 0x254448: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25444Cu;
    // 0x25444c: 0x0  nop
    ctx->pc = 0x25444cu;
    // NOP
    ctx->pc = 0x254450u;
}
