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

// Function: func_003A9E58
// Address: 0x3a9e58 - 0x3aaea0
void func_003A9E58_0x3a9e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A9E58_0x3a9e58");
#endif

    switch (ctx->pc) {
        case 0x3a9e94u: goto label_3a9e94;
        case 0x3a9eb0u: goto label_3a9eb0;
        case 0x3a9eb8u: goto label_3a9eb8;
        case 0x3a9ed8u: goto label_3a9ed8;
        case 0x3a9f28u: goto label_3a9f28;
        case 0x3a9f50u: goto label_3a9f50;
        case 0x3a9f8cu: goto label_3a9f8c;
        case 0x3a9fd4u: goto label_3a9fd4;
        case 0x3a9fd8u: goto label_3a9fd8;
        case 0x3a9fdcu: goto label_3a9fdc;
        case 0x3aa098u: goto label_3aa098;
        case 0x3aa0e0u: goto label_3aa0e0;
        case 0x3aa1f0u: goto label_3aa1f0;
        case 0x3aa204u: goto label_3aa204;
        case 0x3aa214u: goto label_3aa214;
        case 0x3aa220u: goto label_3aa220;
        case 0x3aa240u: goto label_3aa240;
        case 0x3aa250u: goto label_3aa250;
        case 0x3aa25cu: goto label_3aa25c;
        case 0x3aa2a8u: goto label_3aa2a8;
        case 0x3aa2c0u: goto label_3aa2c0;
        case 0x3aa3d8u: goto label_3aa3d8;
        case 0x3aa3fcu: goto label_3aa3fc;
        case 0x3aa520u: goto label_3aa520;
        case 0x3aa570u: goto label_3aa570;
        case 0x3aa578u: goto label_3aa578;
        case 0x3aa594u: goto label_3aa594;
        case 0x3aa5c8u: goto label_3aa5c8;
        case 0x3aa60cu: goto label_3aa60c;
        case 0x3aa640u: goto label_3aa640;
        case 0x3aa6e8u: goto label_3aa6e8;
        case 0x3aa750u: goto label_3aa750;
        case 0x3aa78cu: goto label_3aa78c;
        case 0x3aa7c8u: goto label_3aa7c8;
        case 0x3aa7f0u: goto label_3aa7f0;
        case 0x3aa82cu: goto label_3aa82c;
        case 0x3aa8a0u: goto label_3aa8a0;
        case 0x3aa914u: goto label_3aa914;
        case 0x3aa954u: goto label_3aa954;
        case 0x3aa988u: goto label_3aa988;
        case 0x3aa9f0u: goto label_3aa9f0;
        case 0x3aaa24u: goto label_3aaa24;
        case 0x3aaa60u: goto label_3aaa60;
        case 0x3aaa88u: goto label_3aaa88;
        case 0x3aaac4u: goto label_3aaac4;
        case 0x3aaae8u: goto label_3aaae8;
        case 0x3aab50u: goto label_3aab50;
        case 0x3aab84u: goto label_3aab84;
        case 0x3aabc0u: goto label_3aabc0;
        case 0x3aabe8u: goto label_3aabe8;
        case 0x3aac24u: goto label_3aac24;
        case 0x3aac4cu: goto label_3aac4c;
        case 0x3aac78u: goto label_3aac78;
        case 0x3aacb8u: goto label_3aacb8;
        case 0x3aace8u: goto label_3aace8;
        case 0x3aad50u: goto label_3aad50;
        case 0x3aad84u: goto label_3aad84;
        case 0x3aadc0u: goto label_3aadc0;
        case 0x3aade8u: goto label_3aade8;
        case 0x3aae24u: goto label_3aae24;
        case 0x3aae68u: goto label_3aae68;
        default: break;
    }

    ctx->pc = 0x3a9e58u;

    // 0x3a9e58: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x3a9e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x3a9e5c: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x3a9e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x3a9e60: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x3a9e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x3a9e64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a9e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9e68: 0x7fbe01d0  sq          $fp, 0x1D0($sp)
    ctx->pc = 0x3a9e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 30));
    // 0x3a9e6c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3a9e6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9e70: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x3a9e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x3a9e74: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x3a9e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x3a9e78: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x3a9e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x3a9e7c: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x3a9e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
    // 0x3a9e80: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x3a9e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
    // 0x3a9e84: 0x7fb701e0  sq          $s7, 0x1E0($sp)
    ctx->pc = 0x3a9e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 23));
    // 0x3a9e88: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x3a9e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x3a9e8c: 0xc0eb44c  jal         func_3AD130
    ctx->pc = 0x3A9E8Cu;
    SET_GPR_U32(ctx, 31, 0x3A9E94u);
    ctx->pc = 0x3A9E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E8Cu;
    // 0x3a9e90: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD130u, 0x3A9E8Cu, 0x3A9E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E94u;
label_3a9e94:
    // 0x3a9e94: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x3a9e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x3a9e98: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x3a9e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x3a9e9c: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x3a9e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x3a9ea0: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x3a9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x3a9ea4: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x3a9ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
    // 0x3a9ea8: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x3a9ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x3a9eac: 0x0  nop
    ctx->pc = 0x3a9eacu;
    // NOP
label_3a9eb0:
    // 0x3a9eb0: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x3a9eb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9eb4: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x3a9eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3a9eb8:
    // 0x3a9eb8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3a9eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3a9ebc: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3a9ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3a9ec0: 0x8ca4a62c  lw          $a0, -0x59D4($a1)
    ctx->pc = 0x3a9ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3a9ec4: 0x8cc7ae28  lw          $a3, -0x51D8($a2)
    ctx->pc = 0x3a9ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FAE28u));
    // 0x3a9ec8: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x3a9ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x3a9ecc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3a9eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9ed0: 0xc0e9f42  jal         func_3A7D08
    ctx->pc = 0x3A9ED0u;
    SET_GPR_U32(ctx, 31, 0x3A9ED8u);
    ctx->pc = 0x3A9ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9ED0u;
    // 0x3a9ed4: 0x8fa801ac  lw          $t0, 0x1AC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D08u, 0x3A9ED0u, 0x3A9ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9ED8u;
label_3a9ed8:
    // 0x3a9ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a9ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9edc: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A9EDCu;
    {
        const bool branch_taken_0x3a9edc = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3A9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9EDCu;
        // 0x3a9ee0: 0x8fa20184  lw          $v0, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9edc) {
            ctx->pc = 0x3A9EF0u;
            goto label_3a9ef0;
        }
    }
    ctx->pc = 0x3A9EE4u;
    // 0x3a9ee4: 0x1452fff4  bne         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A9EE4u;
    {
        const bool branch_taken_0x3a9ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3A9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9EE4u;
        // 0x3a9ee8: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ee4) {
            ctx->pc = 0x3A9EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9eb8;
        }
    }
    ctx->pc = 0x3A9EECu;
    // 0x3a9eec: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x3a9eecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_3a9ef0:
    // 0x3a9ef0: 0x3d49023  subu        $s2, $fp, $s4
    ctx->pc = 0x3a9ef0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x3a9ef4: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x3A9EF4u;
    {
        const bool branch_taken_0x3a9ef4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9ef4) {
            ctx->pc = 0x3A9F98u;
            goto label_3a9f98;
        }
    }
    ctx->pc = 0x3A9EFCu;
    // 0x3a9efc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3a9efcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3a9f00: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3a9f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3a9f04: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3A9F04u;
    {
        const bool branch_taken_0x3a9f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9f04) {
            ctx->pc = 0x3A9F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9F04u;
            // 0x3a9f08: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9F68u;
            goto label_3a9f68;
        }
    }
    ctx->pc = 0x3A9F0Cu;
    // 0x3a9f0c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3a9f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a9f10: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x3a9f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3a9f14: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A9F14u;
    {
        const bool branch_taken_0x3a9f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F14u;
        // 0x3a9f18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9f14) {
            ctx->pc = 0x3A9F44u;
            goto label_3a9f44;
        }
    }
    ctx->pc = 0x3A9F1Cu;
    // 0x3a9f1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3a9f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a9f20: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3A9F20u;
    SET_GPR_U32(ctx, 31, 0x3A9F28u);
    ctx->pc = 0x3A9F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9F20u;
    // 0x3a9f24: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3A9F20u, 0x3A9F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9F28u;
label_3a9f28:
    // 0x3a9f28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a9f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a9f2c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3a9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a9f30: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3a9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3a9f34: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3a9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3a9f38: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3a9f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3a9f3c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3A9F3Cu;
    {
        const bool branch_taken_0x3a9f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F3Cu;
        // 0x3a9f40: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9f3c) {
            ctx->pc = 0x3A9F8Cu;
            goto label_3a9f8c;
        }
    }
    ctx->pc = 0x3A9F44u;
label_3a9f44:
    // 0x3a9f44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3a9f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a9f48: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3A9F48u;
    SET_GPR_U32(ctx, 31, 0x3A9F50u);
    ctx->pc = 0x3A9F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9F48u;
    // 0x3a9f4c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3A9F48u, 0x3A9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9F50u;
label_3a9f50:
    // 0x3a9f50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a9f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a9f54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3a9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a9f58: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3a9f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3a9f5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a9f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a9f60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A9F60u;
    {
        const bool branch_taken_0x3a9f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F60u;
        // 0x3a9f64: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9f60) {
            ctx->pc = 0x3A9F8Cu;
            goto label_3a9f8c;
        }
    }
    ctx->pc = 0x3A9F68u;
label_3a9f68:
    // 0x3a9f68: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A9F68u;
    {
        const bool branch_taken_0x3a9f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9f68) {
            ctx->pc = 0x3A9F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9F68u;
            // 0x3a9f6c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9F7Cu;
            goto label_3a9f7c;
        }
    }
    ctx->pc = 0x3A9F70u;
    // 0x3a9f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9f74: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3a9f74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a9f78: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3a9f78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3a9f7c:
    // 0x3a9f7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a9f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9f80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a9f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9f84: 0xc0ea720  jal         func_3A9C80
    ctx->pc = 0x3A9F84u;
    SET_GPR_U32(ctx, 31, 0x3A9F8Cu);
    ctx->pc = 0x3A9F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9F84u;
    // 0x3a9f88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9C80u, 0x3A9F84u, 0x3A9F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9F8Cu;
label_3a9f8c:
    // 0x3a9f8c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x3a9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3a9f90: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3a9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3a9f94: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x3a9f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_3a9f98:
    // 0x3a9f98: 0x5a0003ab  blezl       $s0, . + 4 + (0x3AB << 2)
    ctx->pc = 0x3A9F98u;
    {
        const bool branch_taken_0x3a9f98 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x3a9f98) {
            ctx->pc = 0x3A9F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9F98u;
            // 0x3a9f9c: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAE48u;
            goto label_3aae48;
        }
    }
    ctx->pc = 0x3A9FA0u;
    // 0x3a9fa0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3a9fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a9fa4: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A9FA4u;
    {
        const bool branch_taken_0x3a9fa4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a9fa4) {
            ctx->pc = 0x3A9FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9FA4u;
            // 0x3a9fa8: 0xa3a00180  sb          $zero, 0x180($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9FC0u;
            goto label_3a9fc0;
        }
    }
    ctx->pc = 0x3A9FACu;
    // 0x3a9fac: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3a9facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3a9fb0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3a9fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3a9fb4: 0x144003ad  bnez        $v0, . + 4 + (0x3AD << 2)
    ctx->pc = 0x3A9FB4u;
    {
        const bool branch_taken_0x3a9fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FB4u;
        // 0x3a9fb8: 0x8fa20190  lw          $v0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9fb4) {
            ctx->pc = 0x3AAE6Cu;
            goto label_3aae6c;
        }
    }
    ctx->pc = 0x3A9FBCu;
    // 0x3a9fbc: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x3a9fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
label_3a9fc0:
    // 0x3a9fc0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3a9fc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x3a9fc4: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x3a9fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x3a9fc8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3a9fc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9fcc: 0xafa00194  sw          $zero, 0x194($sp)
    ctx->pc = 0x3a9fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 0));
    // 0x3a9fd0: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x3a9fd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a9fd4:
    // 0x3a9fd4: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x3a9fd4u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_3a9fd8:
    // 0x3a9fd8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3a9fd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_3a9fdc:
    // 0x3a9fdc: 0x26c3ffe0  addiu       $v1, $s6, -0x20
    ctx->pc = 0x3a9fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967264));
    // 0x3a9fe0: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x3a9fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x3a9fe4: 0x1040019c  beqz        $v0, . + 4 + (0x19C << 2)
    ctx->pc = 0x3A9FE4u;
    {
        const bool branch_taken_0x3a9fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FE4u;
        // 0x3a9fe8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9fe4) {
            ctx->pc = 0x3AA658u;
            goto label_3aa658;
        }
    }
    ctx->pc = 0x3A9FECu;
    // 0x3a9fec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a9fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a9ff0: 0x2442f820  addiu       $v0, $v0, -0x7E0
    ctx->pc = 0x3a9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965280));
    // 0x3a9ff4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a9ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a9ff8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a9ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9ffc: 0x800008  jr          $a0
    ctx->pc = 0x3A9FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3AA004u: goto label_3aa004;
            case 0x3AA01Cu: goto label_3aa01c;
            case 0x3AA024u: goto label_3aa024;
            case 0x3AA02Cu: goto label_3aa02c;
            case 0x3AA044u: goto label_3aa044;
            case 0x3AA04Cu: goto label_3aa04c;
            case 0x3AA058u: goto label_3aa058;
            case 0x3AA0CCu: goto label_3aa0cc;
            case 0x3AA0D4u: goto label_3aa0d4;
            case 0x3AA108u: goto label_3aa108;
            case 0x3AA110u: goto label_3aa110;
            case 0x3AA118u: goto label_3aa118;
            case 0x3AA12Cu: goto label_3aa12c;
            case 0x3AA134u: goto label_3aa134;
            case 0x3AA160u: goto label_3aa160;
            case 0x3AA164u: goto label_3aa164;
            case 0x3AA1B4u: goto label_3aa1b4;
            case 0x3AA2E0u: goto label_3aa2e0;
            case 0x3AA348u: goto label_3aa348;
            case 0x3AA34Cu: goto label_3aa34c;
            case 0x3AA38Cu: goto label_3aa38c;
            case 0x3AA3B0u: goto label_3aa3b0;
            case 0x3AA414u: goto label_3aa414;
            case 0x3AA418u: goto label_3aa418;
            case 0x3AA458u: goto label_3aa458;
            case 0x3AA464u: goto label_3aa464;
            case 0x3AA658u: goto label_3aa658;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9FFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AA004u;
label_3aa004:
    // 0x3aa004: 0x83a20180  lb          $v0, 0x180($sp)
    ctx->pc = 0x3aa004u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3aa008: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x3AA008u;
    {
        const bool branch_taken_0x3aa008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa008) {
            ctx->pc = 0x3AA00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA008u;
            // 0x3aa00c: 0x83d60000  lb          $s6, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fd8;
        }
    }
    ctx->pc = 0x3AA010u;
    // 0x3aa010: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3aa010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3aa014: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x3AA014u;
    {
        const bool branch_taken_0x3aa014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA014u;
        // 0x3aa018: 0xa3a20180  sb          $v0, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa014) {
            ctx->pc = 0x3A9FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fd4;
        }
    }
    ctx->pc = 0x3AA01Cu;
label_3aa01c:
    // 0x3aa01c: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x3AA01Cu;
    {
        const bool branch_taken_0x3aa01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA01Cu;
        // 0x3aa020: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa01c) {
            ctx->pc = 0x3A9FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fd4;
        }
    }
    ctx->pc = 0x3AA024u;
label_3aa024:
    // 0x3aa024: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x3AA024u;
    {
        const bool branch_taken_0x3aa024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA024u;
        // 0x3aa028: 0x36b50200  ori         $s5, $s5, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa024) {
            ctx->pc = 0x3A9FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fd4;
        }
    }
    ctx->pc = 0x3AA02Cu;
label_3aa02c:
    // 0x3aa02c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa02cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3aa030: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x3aa030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3aa034: 0x461ffe7  bgez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3AA034u;
    {
        const bool branch_taken_0x3aa034 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3AA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA034u;
        // 0x3aa038: 0xafa30194  sw          $v1, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa034) {
            ctx->pc = 0x3A9FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fd4;
        }
    }
    ctx->pc = 0x3AA03Cu;
    // 0x3aa03c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x3aa03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3aa040: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x3aa040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
label_3aa044:
    // 0x3aa044: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x3AA044u;
    {
        const bool branch_taken_0x3aa044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA044u;
        // 0x3aa048: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa044) {
            ctx->pc = 0x3A9FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fd4;
        }
    }
    ctx->pc = 0x3AA04Cu;
label_3aa04c:
    // 0x3aa04c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x3aa04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3aa050: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x3AA050u;
    {
        const bool branch_taken_0x3aa050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA050u;
        // 0x3aa054: 0xa3a20180  sb          $v0, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa050) {
            ctx->pc = 0x3A9FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fd4;
        }
    }
    ctx->pc = 0x3AA058u;
label_3aa058:
    // 0x3aa058: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x3aa058u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3aa05c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x3aa05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3aa060: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA060u;
    {
        const bool branch_taken_0x3aa060 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA060u;
        // 0x3aa064: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa060) {
            ctx->pc = 0x3AA084u;
            goto label_3aa084;
        }
    }
    ctx->pc = 0x3AA068u;
    // 0x3aa068: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3aa06c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3aa06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3aa070: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x3aa070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3aa074: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x3aa074u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa078: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3aa078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3aa07c: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x3AA07Cu;
    {
        const bool branch_taken_0x3aa07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA07Cu;
        // 0x3aa080: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa07c) {
            ctx->pc = 0x3A9FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fd4;
        }
    }
    ctx->pc = 0x3AA084u;
label_3aa084:
    // 0x3aa084: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x3aa084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x3aa088: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3aa088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3aa08c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AA08Cu;
    {
        const bool branch_taken_0x3aa08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA08Cu;
        // 0x3aa090: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa08c) {
            ctx->pc = 0x3AA0B8u;
            goto label_3aa0b8;
        }
    }
    ctx->pc = 0x3AA094u;
    // 0x3aa094: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3aa094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3aa098:
    // 0x3aa098: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x3aa098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3aa09c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3aa09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3aa0a0: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x3aa0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3aa0a4: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x3aa0a4u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3aa0a8: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x3aa0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x3aa0ac: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3aa0acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3aa0b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3AA0B0u;
    {
        const bool branch_taken_0x3aa0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0B0u;
        // 0x3aa0b4: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa0b0) {
            ctx->pc = 0x3AA098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa098;
        }
    }
    ctx->pc = 0x3AA0B8u;
label_3aa0b8:
    // 0x3aa0b8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3aa0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3aa0bc: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x3aa0bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa0c0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3aa0c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3aa0c4: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x3AA0C4u;
    {
        const bool branch_taken_0x3aa0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0C4u;
        // 0x3aa0c8: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa0c4) {
            ctx->pc = 0x3A9FDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fdc;
        }
    }
    ctx->pc = 0x3AA0CCu;
label_3aa0cc:
    // 0x3aa0cc: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x3AA0CCu;
    {
        const bool branch_taken_0x3aa0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0CCu;
        // 0x3aa0d0: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa0cc) {
            ctx->pc = 0x3A9FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fd4;
        }
    }
    ctx->pc = 0x3AA0D4u;
label_3aa0d4:
    // 0x3aa0d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3aa0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa0d8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3aa0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3aa0dc: 0x0  nop
    ctx->pc = 0x3aa0dcu;
    // NOP
label_3aa0e0:
    // 0x3aa0e0: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x3aa0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3aa0e4: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3aa0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3aa0e8: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x3aa0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3aa0ec: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x3aa0ecu;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3aa0f0: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x3aa0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x3aa0f4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3aa0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3aa0f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3AA0F8u;
    {
        const bool branch_taken_0x3aa0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0F8u;
        // 0x3aa0fc: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa0f8) {
            ctx->pc = 0x3AA0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa0e0;
        }
    }
    ctx->pc = 0x3AA100u;
    // 0x3aa100: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x3AA100u;
    {
        const bool branch_taken_0x3aa100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA100u;
        // 0x3aa104: 0xafb00194  sw          $s0, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa100) {
            ctx->pc = 0x3A9FDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fdc;
        }
    }
    ctx->pc = 0x3AA108u;
label_3aa108:
    // 0x3aa108: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x3AA108u;
    {
        const bool branch_taken_0x3aa108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA108u;
        // 0x3aa10c: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa108) {
            ctx->pc = 0x3A9FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fd4;
        }
    }
    ctx->pc = 0x3AA110u;
label_3aa110:
    // 0x3aa110: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
    ctx->pc = 0x3AA110u;
    {
        const bool branch_taken_0x3aa110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA110u;
        // 0x3aa114: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa110) {
            ctx->pc = 0x3A9FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fd4;
        }
    }
    ctx->pc = 0x3AA118u;
label_3aa118:
    // 0x3aa118: 0x83c30000  lb          $v1, 0x0($fp)
    ctx->pc = 0x3aa118u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3aa11c: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x3aa11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x3aa120: 0x5462ffac  bnel        $v1, $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x3AA120u;
    {
        const bool branch_taken_0x3aa120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aa120) {
            ctx->pc = 0x3AA124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA120u;
            // 0x3aa124: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fd4;
        }
    }
    ctx->pc = 0x3AA128u;
    // 0x3aa128: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3aa128u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_3aa12c:
    // 0x3aa12c: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
    ctx->pc = 0x3AA12Cu;
    {
        const bool branch_taken_0x3aa12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA12Cu;
        // 0x3aa130: 0x36b50020  ori         $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa12c) {
            ctx->pc = 0x3A9FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9fd4;
        }
    }
    ctx->pc = 0x3AA134u;
label_3aa134:
    // 0x3aa134: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3aa138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa13c: 0x9263fff8  lbu         $v1, -0x8($s3)
    ctx->pc = 0x3aa13cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3aa140: 0x32a40004  andi        $a0, $s5, 0x4
    ctx->pc = 0x3aa140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3aa144: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x3aa144u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3aa148: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x3aa148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x3aa14c: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3aa14cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3aa150: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x3aa150u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3aa154: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x3aa154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x3aa158: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x3AA158u;
    {
        const bool branch_taken_0x3aa158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA158u;
        // 0x3aa15c: 0xa3a00180  sb          $zero, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa158) {
            ctx->pc = 0x3AA67Cu;
            goto label_3aa67c;
        }
    }
    ctx->pc = 0x3AA160u;
label_3aa160:
    // 0x3aa160: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x3aa160u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_3aa164:
    // 0x3aa164: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3aa164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x3aa168: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AA168u;
    {
        const bool branch_taken_0x3aa168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa168) {
            ctx->pc = 0x3AA16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA168u;
            // 0x3aa16c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA180u;
            goto label_3aa180;
        }
    }
    ctx->pc = 0x3AA170u;
    // 0x3aa170: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x3aa170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x3aa174: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA174u;
    {
        const bool branch_taken_0x3aa174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA174u;
        // 0x3aa178: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa174) {
            ctx->pc = 0x3AA188u;
            goto label_3aa188;
        }
    }
    ctx->pc = 0x3AA17Cu;
    // 0x3aa17c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa17cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3aa180:
    // 0x3aa180: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AA180u;
    {
        const bool branch_taken_0x3aa180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA180u;
        // 0x3aa184: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa180) {
            ctx->pc = 0x3AA19Cu;
            goto label_3aa19c;
        }
    }
    ctx->pc = 0x3AA188u;
label_3aa188:
    // 0x3aa188: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA188u;
    {
        const bool branch_taken_0x3aa188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA188u;
        // 0x3aa18c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa188) {
            ctx->pc = 0x3AA198u;
            goto label_3aa198;
        }
    }
    ctx->pc = 0x3AA190u;
    // 0x3aa190: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AA190u;
    {
        const bool branch_taken_0x3aa190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA190u;
        // 0x3aa194: 0x8670fff8  lh          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa190) {
            ctx->pc = 0x3AA19Cu;
            goto label_3aa19c;
        }
    }
    ctx->pc = 0x3AA198u;
label_3aa198:
    // 0x3aa198: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x3aa198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3aa19c:
    // 0x3aa19c: 0x60100c8  bgez        $s0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x3AA19Cu;
    {
        const bool branch_taken_0x3aa19c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3AA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA19Cu;
        // 0x3aa1a0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa19c) {
            ctx->pc = 0x3AA4C0u;
            goto label_3aa4c0;
        }
    }
    ctx->pc = 0x3AA1A4u;
    // 0x3aa1a4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3aa1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3aa1a8: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x3aa1a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x3aa1ac: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x3AA1ACu;
    {
        const bool branch_taken_0x3aa1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1ACu;
        // 0x3aa1b0: 0xa3a20180  sb          $v0, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa1ac) {
            ctx->pc = 0x3AA4C0u;
            goto label_3aa4c0;
        }
    }
    ctx->pc = 0x3AA1B4u;
label_3aa1b4:
    // 0x3aa1b4: 0x171027  nor         $v0, $zero, $s7
    ctx->pc = 0x3aa1b4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x3aa1b8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3aa1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3aa1bc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa1bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3aa1c0: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x3aa1c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
    // 0x3aa1c4: 0xde74fff8  ld          $s4, -0x8($s3)
    ctx->pc = 0x3aa1c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3aa1c8: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x3aa1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x3aa1cc: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA1CCu;
    {
        const bool branch_taken_0x3aa1cc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1CCu;
        // 0x3aa1d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa1cc) {
            ctx->pc = 0x3AA1E0u;
            goto label_3aa1e0;
        }
    }
    ctx->pc = 0x3AA1D4u;
    // 0x3aa1d4: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x3aa1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3aa1d8: 0x16c2002a  bne         $s6, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3AA1D8u;
    {
        const bool branch_taken_0x3aa1d8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1D8u;
        // 0x3aa1dc: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa1d8) {
            ctx->pc = 0x3AA284u;
            goto label_3aa284;
        }
    }
    ctx->pc = 0x3AA1E0u;
label_3aa1e0:
    // 0x3aa1e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3aa1e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa1e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3aa1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa1e8: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3AA1E8u;
    SET_GPR_U32(ctx, 31, 0x3AA1F0u);
    ctx->pc = 0x3AA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA1E8u;
    // 0x3aa1ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3AA1E8u, 0x3AA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA1F0u;
label_3aa1f0:
    // 0x3aa1f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3AA1F0u;
    {
        const bool branch_taken_0x3aa1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1F0u;
        // 0x3aa1f4: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa1f0) {
            ctx->pc = 0x3AA228u;
            goto label_3aa228;
        }
    }
    ctx->pc = 0x3AA1F8u;
    // 0x3aa1f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3aa1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa1fc: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3AA1FCu;
    SET_GPR_U32(ctx, 31, 0x3AA204u);
    ctx->pc = 0x3AA200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA1FCu;
    // 0x3aa200: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3AA1FCu, 0x3AA204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA204u;
label_3aa204:
    // 0x3aa204: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA204u;
    {
        const bool branch_taken_0x3aa204 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3AA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA204u;
        // 0x3aa208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa204) {
            ctx->pc = 0x3AA218u;
            goto label_3aa218;
        }
    }
    ctx->pc = 0x3AA20Cu;
    // 0x3aa20c: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3AA20Cu;
    SET_GPR_U32(ctx, 31, 0x3AA214u);
    ctx->pc = 0x3AA210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA20Cu;
    // 0x3aa210: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3AA20Cu, 0x3AA214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA214u;
label_3aa214:
    // 0x3aa214: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3aa214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa218:
    // 0x3aa218: 0xc0eb76a  jal         func_3ADDA8
    ctx->pc = 0x3AA218u;
    SET_GPR_U32(ctx, 31, 0x3AA220u);
    ctx->pc = 0x3AA21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA218u;
    // 0x3aa21c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADDA8u, 0x3AA218u, 0x3AA220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA220u;
label_3aa220:
    // 0x3aa220: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA220u;
    {
        const bool branch_taken_0x3aa220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA220u;
        // 0x3aa224: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa220) {
            ctx->pc = 0x3AA230u;
            goto label_3aa230;
        }
    }
    ctx->pc = 0x3AA228u;
label_3aa228:
    // 0x3aa228: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x3aa228u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3aa22c: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x3aa22cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
label_3aa230:
    // 0x3aa230: 0x3405c010  ori         $a1, $zero, 0xC010
    ctx->pc = 0x3aa230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49168);
    // 0x3aa234: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x3aa234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3aa238: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3AA238u;
    SET_GPR_U32(ctx, 31, 0x3AA240u);
    ctx->pc = 0x3AA23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA238u;
    // 0x3aa23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3AA238u, 0x3AA240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA240u;
label_3aa240:
    // 0x3aa240: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA240u;
    {
        const bool branch_taken_0x3aa240 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3AA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA240u;
        // 0x3aa244: 0x3ac40067  xori        $a0, $s6, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa240) {
            ctx->pc = 0x3AA264u;
            goto label_3aa264;
        }
    }
    ctx->pc = 0x3AA248u;
    // 0x3aa248: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x3AA248u;
    SET_GPR_U32(ctx, 31, 0x3AA250u);
    ctx->pc = 0x3AA24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA248u;
    // 0x3aa24c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x3AA248u, 0x3AA250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA250u;
label_3aa250:
    // 0x3aa250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa254: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3AA254u;
    SET_GPR_U32(ctx, 31, 0x3AA25Cu);
    ctx->pc = 0x3AA258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA254u;
    // 0x3aa258: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3AA254u, 0x3AA25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA25Cu;
label_3aa25c:
    // 0x3aa25c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AA25Cu;
    {
        const bool branch_taken_0x3aa25c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3AA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA25Cu;
        // 0x3aa260: 0x3ac40067  xori        $a0, $s6, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa25c) {
            ctx->pc = 0x3AA278u;
            goto label_3aa278;
        }
    }
    ctx->pc = 0x3AA264u;
label_3aa264:
    // 0x3aa264: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x3aa264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x3aa268: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x3aa268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x3aa26c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3aa26cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa270: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AA270u;
    {
        const bool branch_taken_0x3aa270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA270u;
        // 0x3aa274: 0x64b00b  movn        $s6, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa270) {
            ctx->pc = 0x3AA27Cu;
            goto label_3aa27c;
        }
    }
    ctx->pc = 0x3AA278u;
label_3aa278:
    // 0x3aa278: 0x24160066  addiu       $s6, $zero, 0x66
    ctx->pc = 0x3aa278u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_3aa27c:
    // 0x3aa27c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3aa27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa280: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x3aa280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3aa284:
    // 0x3aa284: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA284u;
    {
        const bool branch_taken_0x3aa284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA284u;
        // 0x3aa288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa284) {
            ctx->pc = 0x3AA294u;
            goto label_3aa294;
        }
    }
    ctx->pc = 0x3AA28Cu;
    // 0x3aa28c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aa28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa290: 0x57b80a  movz        $s7, $v0, $s7
    ctx->pc = 0x3aa290u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_3aa294:
    // 0x3aa294: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3aa294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa298: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3aa298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa29c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3aa29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa2a0: 0xc0ea5b0  jal         func_3A96C0
    ctx->pc = 0x3AA2A0u;
    SET_GPR_U32(ctx, 31, 0x3AA2A8u);
    ctx->pc = 0x3AA2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA2A0u;
    // 0x3aa2a4: 0x27a80180  addiu       $t0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A96C0u, 0x3AA2A0u, 0x3AA2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA2A8u;
label_3aa2a8:
    // 0x3aa2a8: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3aa2a8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3aa2ac: 0x32a50004  andi        $a1, $s5, 0x4
    ctx->pc = 0x3aa2acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3aa2b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3aa2b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa2b4: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x3aa2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
    // 0x3aa2b8: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3AA2B8u;
    SET_GPR_U32(ctx, 31, 0x3AA2C0u);
    ctx->pc = 0x3AA2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA2B8u;
    // 0x3aa2bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3AA2B8u, 0x3AA2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA2C0u;
label_3aa2c0:
    // 0x3aa2c0: 0x32a30200  andi        $v1, $s5, 0x200
    ctx->pc = 0x3aa2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)512);
    // 0x3aa2c4: 0x106000ed  beqz        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x3AA2C4u;
    {
        const bool branch_taken_0x3aa2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA2C4u;
        // 0x3aa2c8: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa2c4) {
            ctx->pc = 0x3AA67Cu;
            goto label_3aa67c;
        }
    }
    ctx->pc = 0x3AA2CCu;
    // 0x3aa2cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3aa2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa2d0: 0x27a7018c  addiu       $a3, $sp, 0x18C
    ctx->pc = 0x3aa2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x3aa2d4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x3aa2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3aa2d8: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x3AA2D8u;
    {
        const bool branch_taken_0x3aa2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA2D8u;
        // 0x3aa2dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa2d8) {
            ctx->pc = 0x3AA638u;
            goto label_3aa638;
        }
    }
    ctx->pc = 0x3AA2E0u;
label_3aa2e0:
    // 0x3aa2e0: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3aa2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x3aa2e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AA2E4u;
    {
        const bool branch_taken_0x3aa2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA2E4u;
        // 0x3aa2e8: 0x8fa60190  lw          $a2, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa2e4) {
            ctx->pc = 0x3AA2FCu;
            goto label_3aa2fc;
        }
    }
    ctx->pc = 0x3AA2ECu;
    // 0x3aa2ec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa2ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3aa2f0: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3aa2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3aa2f4: 0x1000feee  b           . + 4 + (-0x112 << 2)
    ctx->pc = 0x3AA2F4u;
    {
        const bool branch_taken_0x3aa2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA2F4u;
        // 0x3aa2f8: 0xfc460000  sd          $a2, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa2f4) {
            ctx->pc = 0x3A9EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9eb0;
        }
    }
    ctx->pc = 0x3AA2FCu;
label_3aa2fc:
    // 0x3aa2fc: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x3aa2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x3aa300: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AA300u;
    {
        const bool branch_taken_0x3aa300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA300u;
        // 0x3aa304: 0x8fa30190  lw          $v1, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa300) {
            ctx->pc = 0x3AA318u;
            goto label_3aa318;
        }
    }
    ctx->pc = 0x3AA308u;
    // 0x3aa308: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3aa30c: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3aa30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3aa310: 0x1000fee7  b           . + 4 + (-0x119 << 2)
    ctx->pc = 0x3AA310u;
    {
        const bool branch_taken_0x3aa310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA310u;
        // 0x3aa314: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa310) {
            ctx->pc = 0x3A9EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9eb0;
        }
    }
    ctx->pc = 0x3AA318u;
label_3aa318:
    // 0x3aa318: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x3aa318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x3aa31c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AA31Cu;
    {
        const bool branch_taken_0x3aa31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA31Cu;
        // 0x3aa320: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa31c) {
            ctx->pc = 0x3AA334u;
            goto label_3aa334;
        }
    }
    ctx->pc = 0x3AA324u;
    // 0x3aa324: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3aa328: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3aa328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3aa32c: 0x1000fee0  b           . + 4 + (-0x120 << 2)
    ctx->pc = 0x3AA32Cu;
    {
        const bool branch_taken_0x3aa32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA32Cu;
        // 0x3aa330: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa32c) {
            ctx->pc = 0x3A9EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9eb0;
        }
    }
    ctx->pc = 0x3AA334u;
label_3aa334:
    // 0x3aa334: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3aa338: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x3aa338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3aa33c: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3aa33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3aa340: 0x1000fedb  b           . + 4 + (-0x125 << 2)
    ctx->pc = 0x3AA340u;
    {
        const bool branch_taken_0x3aa340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA340u;
        // 0x3aa344: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa340) {
            ctx->pc = 0x3A9EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9eb0;
        }
    }
    ctx->pc = 0x3AA348u;
label_3aa348:
    // 0x3aa348: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x3aa348u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_3aa34c:
    // 0x3aa34c: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3aa34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x3aa350: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AA350u;
    {
        const bool branch_taken_0x3aa350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa350) {
            ctx->pc = 0x3AA354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA350u;
            // 0x3aa354: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA368u;
            goto label_3aa368;
        }
    }
    ctx->pc = 0x3AA358u;
    // 0x3aa358: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x3aa358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x3aa35c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA35Cu;
    {
        const bool branch_taken_0x3aa35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA35Cu;
        // 0x3aa360: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa35c) {
            ctx->pc = 0x3AA370u;
            goto label_3aa370;
        }
    }
    ctx->pc = 0x3AA364u;
    // 0x3aa364: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3aa368:
    // 0x3aa368: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AA368u;
    {
        const bool branch_taken_0x3aa368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA368u;
        // 0x3aa36c: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa368) {
            ctx->pc = 0x3AA384u;
            goto label_3aa384;
        }
    }
    ctx->pc = 0x3AA370u;
label_3aa370:
    // 0x3aa370: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA370u;
    {
        const bool branch_taken_0x3aa370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA370u;
        // 0x3aa374: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa370) {
            ctx->pc = 0x3AA380u;
            goto label_3aa380;
        }
    }
    ctx->pc = 0x3AA378u;
    // 0x3aa378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AA378u;
    {
        const bool branch_taken_0x3aa378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA378u;
        // 0x3aa37c: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa378) {
            ctx->pc = 0x3AA384u;
            goto label_3aa384;
        }
    }
    ctx->pc = 0x3AA380u;
label_3aa380:
    // 0x3aa380: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x3aa380u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3aa384:
    // 0x3aa384: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3AA384u;
    {
        const bool branch_taken_0x3aa384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA384u;
        // 0x3aa388: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa384) {
            ctx->pc = 0x3AA4BCu;
            goto label_3aa4bc;
        }
    }
    ctx->pc = 0x3AA38Cu;
label_3aa38c:
    // 0x3aa38c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3aa38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3aa390: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3aa394: 0x2442f7c0  addiu       $v0, $v0, -0x840
    ctx->pc = 0x3aa394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965184));
    // 0x3aa398: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x3aa398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aa39c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x3aa39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x3aa3a0: 0x36b50002  ori         $s5, $s5, 0x2
    ctx->pc = 0x3aa3a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x3aa3a4: 0x24160078  addiu       $s6, $zero, 0x78
    ctx->pc = 0x3aa3a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3aa3a8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3AA3A8u;
    {
        const bool branch_taken_0x3aa3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3A8u;
        // 0x3aa3ac: 0x8e70fff8  lw          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa3a8) {
            ctx->pc = 0x3AA4BCu;
            goto label_3aa4bc;
        }
    }
    ctx->pc = 0x3AA3B0u;
label_3aa3b0:
    // 0x3aa3b0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa3b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3aa3b4: 0x8e74fff8  lw          $s4, -0x8($s3)
    ctx->pc = 0x3aa3b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3aa3b8: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AA3B8u;
    {
        const bool branch_taken_0x3aa3b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3B8u;
        // 0x3aa3bc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa3b8) {
            ctx->pc = 0x3AA3C4u;
            goto label_3aa3c4;
        }
    }
    ctx->pc = 0x3AA3C0u;
    // 0x3aa3c0: 0x2454f7d8  addiu       $s4, $v0, -0x828
    ctx->pc = 0x3aa3c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965208));
label_3aa3c4:
    // 0x3aa3c4: 0x6e0000b  bltz        $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x3AA3C4u;
    {
        const bool branch_taken_0x3aa3c4 = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x3AA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3C4u;
        // 0x3aa3c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa3c4) {
            ctx->pc = 0x3AA3F4u;
            goto label_3aa3f4;
        }
    }
    ctx->pc = 0x3AA3CCu;
    // 0x3aa3cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aa3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa3d0: 0xc0e93f2  jal         func_3A4FC8
    ctx->pc = 0x3AA3D0u;
    SET_GPR_U32(ctx, 31, 0x3AA3D8u);
    ctx->pc = 0x3AA3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA3D0u;
    // 0x3aa3d4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FC8u, 0x3AA3D0u, 0x3AA3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA3D8u;
label_3aa3d8:
    // 0x3aa3d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA3D8u;
    {
        const bool branch_taken_0x3aa3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3D8u;
        // 0x3aa3dc: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa3d8) {
            ctx->pc = 0x3AA3ECu;
            goto label_3aa3ec;
        }
    }
    ctx->pc = 0x3AA3E0u;
    // 0x3aa3e0: 0x2e2182a  slt         $v1, $s7, $v0
    ctx->pc = 0x3aa3e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3aa3e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AA3E4u;
    {
        const bool branch_taken_0x3aa3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3E4u;
        // 0x3aa3e8: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa3e4) {
            ctx->pc = 0x3AA400u;
            goto label_3aa400;
        }
    }
    ctx->pc = 0x3AA3ECu;
label_3aa3ec:
    // 0x3aa3ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA3ECu;
    {
        const bool branch_taken_0x3aa3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3ECu;
        // 0x3aa3f0: 0xafb7018c  sw          $s7, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa3ec) {
            ctx->pc = 0x3AA400u;
            goto label_3aa400;
        }
    }
    ctx->pc = 0x3AA3F4u;
label_3aa3f4:
    // 0x3aa3f4: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3AA3F4u;
    SET_GPR_U32(ctx, 31, 0x3AA3FCu);
    ctx->pc = 0x3AA3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA3F4u;
    // 0x3aa3f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3AA3F4u, 0x3AA3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA3FCu;
label_3aa3fc:
    // 0x3aa3fc: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x3aa3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_3aa400:
    // 0x3aa400: 0x32a60004  andi        $a2, $s5, 0x4
    ctx->pc = 0x3aa400u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3aa404: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x3aa404u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa408: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3aa408u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3aa40c: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3AA40Cu;
    {
        const bool branch_taken_0x3aa40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA40Cu;
        // 0x3aa410: 0xafa601b0  sw          $a2, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa40c) {
            ctx->pc = 0x3AA67Cu;
            goto label_3aa67c;
        }
    }
    ctx->pc = 0x3AA414u;
label_3aa414:
    // 0x3aa414: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x3aa414u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_3aa418:
    // 0x3aa418: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3aa418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x3aa41c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AA41Cu;
    {
        const bool branch_taken_0x3aa41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa41c) {
            ctx->pc = 0x3AA420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA41Cu;
            // 0x3aa420: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA434u;
            goto label_3aa434;
        }
    }
    ctx->pc = 0x3AA424u;
    // 0x3aa424: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x3aa424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x3aa428: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA428u;
    {
        const bool branch_taken_0x3aa428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA428u;
        // 0x3aa42c: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa428) {
            ctx->pc = 0x3AA43Cu;
            goto label_3aa43c;
        }
    }
    ctx->pc = 0x3AA430u;
    // 0x3aa430: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3aa434:
    // 0x3aa434: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AA434u;
    {
        const bool branch_taken_0x3aa434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA434u;
        // 0x3aa438: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa434) {
            ctx->pc = 0x3AA450u;
            goto label_3aa450;
        }
    }
    ctx->pc = 0x3AA43Cu;
label_3aa43c:
    // 0x3aa43c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA43Cu;
    {
        const bool branch_taken_0x3aa43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA43Cu;
        // 0x3aa440: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa43c) {
            ctx->pc = 0x3AA44Cu;
            goto label_3aa44c;
        }
    }
    ctx->pc = 0x3AA444u;
    // 0x3aa444: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AA444u;
    {
        const bool branch_taken_0x3aa444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA444u;
        // 0x3aa448: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa444) {
            ctx->pc = 0x3AA450u;
            goto label_3aa450;
        }
    }
    ctx->pc = 0x3AA44Cu;
label_3aa44c:
    // 0x3aa44c: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x3aa44cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3aa450:
    // 0x3aa450: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3AA450u;
    {
        const bool branch_taken_0x3aa450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA450u;
        // 0x3aa454: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa450) {
            ctx->pc = 0x3AA4BCu;
            goto label_3aa4bc;
        }
    }
    ctx->pc = 0x3AA458u;
label_3aa458:
    // 0x3aa458: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3aa458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3aa45c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA45Cu;
    {
        const bool branch_taken_0x3aa45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA45Cu;
        // 0x3aa460: 0x2442f7e0  addiu       $v0, $v0, -0x820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa45c) {
            ctx->pc = 0x3AA46Cu;
            goto label_3aa46c;
        }
    }
    ctx->pc = 0x3AA464u;
label_3aa464:
    // 0x3aa464: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3aa464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3aa468: 0x2442f7c0  addiu       $v0, $v0, -0x840
    ctx->pc = 0x3aa468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965184));
label_3aa46c:
    // 0x3aa46c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x3aa46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x3aa470: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3aa470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x3aa474: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AA474u;
    {
        const bool branch_taken_0x3aa474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa474) {
            ctx->pc = 0x3AA478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA474u;
            // 0x3aa478: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA48Cu;
            goto label_3aa48c;
        }
    }
    ctx->pc = 0x3AA47Cu;
    // 0x3aa47c: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x3aa47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x3aa480: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA480u;
    {
        const bool branch_taken_0x3aa480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA480u;
        // 0x3aa484: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa480) {
            ctx->pc = 0x3AA494u;
            goto label_3aa494;
        }
    }
    ctx->pc = 0x3AA488u;
    // 0x3aa488: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3aa488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3aa48c:
    // 0x3aa48c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AA48Cu;
    {
        const bool branch_taken_0x3aa48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA48Cu;
        // 0x3aa490: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa48c) {
            ctx->pc = 0x3AA4A8u;
            goto label_3aa4a8;
        }
    }
    ctx->pc = 0x3AA494u;
label_3aa494:
    // 0x3aa494: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA494u;
    {
        const bool branch_taken_0x3aa494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA494u;
        // 0x3aa498: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa494) {
            ctx->pc = 0x3AA4A4u;
            goto label_3aa4a4;
        }
    }
    ctx->pc = 0x3AA49Cu;
    // 0x3aa49c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AA49Cu;
    {
        const bool branch_taken_0x3aa49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA49Cu;
        // 0x3aa4a0: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa49c) {
            ctx->pc = 0x3AA4A8u;
            goto label_3aa4a8;
        }
    }
    ctx->pc = 0x3AA4A4u;
label_3aa4a4:
    // 0x3aa4a4: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x3aa4a4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3aa4a8:
    // 0x3aa4a8: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x3aa4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x3aa4ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA4ACu;
    {
        const bool branch_taken_0x3aa4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4ACu;
        // 0x3aa4b0: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4ac) {
            ctx->pc = 0x3AA4BCu;
            goto label_3aa4bc;
        }
    }
    ctx->pc = 0x3AA4B4u;
    // 0x3aa4b4: 0x36a20002  ori         $v0, $s5, 0x2
    ctx->pc = 0x3aa4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x3aa4b8: 0x50a80b  movn        $s5, $v0, $s0
    ctx->pc = 0x3aa4b8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_3aa4bc:
    // 0x3aa4bc: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x3aa4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
label_3aa4c0:
    // 0x3aa4c0: 0x6e00003  bltz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA4C0u;
    {
        const bool branch_taken_0x3aa4c0 = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x3AA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4C0u;
        // 0x3aa4c4: 0xafb70198  sw          $s7, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4c0) {
            ctx->pc = 0x3AA4D0u;
            goto label_3aa4d0;
        }
    }
    ctx->pc = 0x3AA4C8u;
    // 0x3aa4c8: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x3aa4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x3aa4cc: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x3aa4ccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_3aa4d0:
    // 0x3aa4d0: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AA4D0u;
    {
        const bool branch_taken_0x3aa4d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4D0u;
        // 0x3aa4d4: 0x27b4016c  addiu       $s4, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4d0) {
            ctx->pc = 0x3AA4ECu;
            goto label_3aa4ec;
        }
    }
    ctx->pc = 0x3AA4D8u;
    // 0x3aa4d8: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x3aa4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3aa4dc: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x3aa4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x3aa4e0: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3aa4e0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3aa4e4: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x3AA4E4u;
    {
        const bool branch_taken_0x3aa4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4E4u;
        // 0x3aa4e8: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4e4) {
            ctx->pc = 0x3AA614u;
            goto label_3aa614;
        }
    }
    ctx->pc = 0x3AA4ECu;
label_3aa4ec:
    // 0x3aa4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa4f0: 0x12420019  beq         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3AA4F0u;
    {
        const bool branch_taken_0x3aa4f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4F0u;
        // 0x3aa4f4: 0x32a50004  andi        $a1, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4f0) {
            ctx->pc = 0x3AA558u;
            goto label_3aa558;
        }
    }
    ctx->pc = 0x3AA4F8u;
    // 0x3aa4f8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AA4F8u;
    {
        const bool branch_taken_0x3aa4f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4F8u;
        // 0x3aa4fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4f8) {
            ctx->pc = 0x3AA510u;
            goto label_3aa510;
        }
    }
    ctx->pc = 0x3AA500u;
    // 0x3aa500: 0x1242002d  beq         $s2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3AA500u;
    {
        const bool branch_taken_0x3aa500 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA500u;
        // 0x3aa504: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa500) {
            ctx->pc = 0x3AA5B8u;
            goto label_3aa5b8;
        }
    }
    ctx->pc = 0x3AA508u;
    // 0x3aa508: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3AA508u;
    {
        const bool branch_taken_0x3aa508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA508u;
        // 0x3aa50c: 0x32a40004  andi        $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa508) {
            ctx->pc = 0x3AA5F8u;
            goto label_3aa5f8;
        }
    }
    ctx->pc = 0x3AA510u;
label_3aa510:
    // 0x3aa510: 0x32a40004  andi        $a0, $s5, 0x4
    ctx->pc = 0x3aa510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3aa514: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x3aa514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x3aa518: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x3aa518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x3aa51c: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3aa51cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
label_3aa520:
    // 0x3aa520: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x3aa520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x3aa524: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3aa524u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3aa528: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3aa528u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x3aa52c: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x3aa52cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x3aa530: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3aa530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3aa534: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AA534u;
    {
        const bool branch_taken_0x3aa534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA534u;
        // 0x3aa538: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa534) {
            ctx->pc = 0x3AA520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa520;
        }
    }
    ctx->pc = 0x3AA53Cu;
    // 0x3aa53c: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3AA53Cu;
    {
        const bool branch_taken_0x3aa53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA53Cu;
        // 0x3aa540: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa53c) {
            ctx->pc = 0x3AA614u;
            goto label_3aa614;
        }
    }
    ctx->pc = 0x3AA544u;
    // 0x3aa544: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3AA544u;
    {
        const bool branch_taken_0x3aa544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA544u;
        // 0x3aa548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa544) {
            ctx->pc = 0x3AA618u;
            goto label_3aa618;
        }
    }
    ctx->pc = 0x3AA54Cu;
    // 0x3aa54c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3aa54cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3aa550: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3AA550u;
    {
        const bool branch_taken_0x3aa550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA550u;
        // 0x3aa554: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa550) {
            ctx->pc = 0x3AA618u;
            goto label_3aa618;
        }
    }
    ctx->pc = 0x3AA558u;
label_3aa558:
    // 0x3aa558: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x3aa558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3aa55c: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3aa55cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3aa560: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3AA560u;
    {
        const bool branch_taken_0x3aa560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA560u;
        // 0x3aa564: 0xafa501b0  sw          $a1, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa560) {
            ctx->pc = 0x3AA5A4u;
            goto label_3aa5a4;
        }
    }
    ctx->pc = 0x3AA568u;
    // 0x3aa568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa56c: 0x0  nop
    ctx->pc = 0x3aa56cu;
    // NOP
label_3aa570:
    // 0x3aa570: 0xc0ee516  jal         func_3B9458
    ctx->pc = 0x3AA570u;
    SET_GPR_U32(ctx, 31, 0x3AA578u);
    ctx->pc = 0x3AA574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA570u;
    // 0x3aa574: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9458u, 0x3AA570u, 0x3AA578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA578u;
label_3aa578:
    // 0x3aa578: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3aa578u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3aa57c: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3aa57cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x3aa580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa584: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3aa584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3aa588: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3aa588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3aa58c: 0xc0ee3a2  jal         func_3B8E88
    ctx->pc = 0x3AA58Cu;
    SET_GPR_U32(ctx, 31, 0x3AA594u);
    ctx->pc = 0x3AA590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA58Cu;
    // 0x3aa590: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8E88u, 0x3AA58Cu, 0x3AA594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA594u;
label_3aa594:
    // 0x3aa594: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3aa594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa598: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x3aa598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3aa59c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3AA59Cu;
    {
        const bool branch_taken_0x3aa59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA59Cu;
        // 0x3aa5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa59c) {
            ctx->pc = 0x3AA570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa570;
        }
    }
    ctx->pc = 0x3AA5A4u;
label_3aa5a4:
    // 0x3aa5a4: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x3aa5a4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x3aa5a8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3aa5a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3aa5ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3aa5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3aa5b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3AA5B0u;
    {
        const bool branch_taken_0x3aa5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5B0u;
        // 0x3aa5b4: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5b0) {
            ctx->pc = 0x3AA614u;
            goto label_3aa614;
        }
    }
    ctx->pc = 0x3AA5B8u;
label_3aa5b8:
    // 0x3aa5b8: 0x32a60004  andi        $a2, $s5, 0x4
    ctx->pc = 0x3aa5b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3aa5bc: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3aa5bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3aa5c0: 0xafa601b0  sw          $a2, 0x1B0($sp)
    ctx->pc = 0x3aa5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
    // 0x3aa5c4: 0x0  nop
    ctx->pc = 0x3aa5c4u;
    // NOP
label_3aa5c8:
    // 0x3aa5c8: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x3aa5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3aa5cc: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x3aa5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x3aa5d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3aa5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3aa5d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3aa5d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3aa5d8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3aa5d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3aa5dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3aa5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aa5e0: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x3aa5e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x3aa5e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3aa5e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3aa5e8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3AA5E8u;
    {
        const bool branch_taken_0x3aa5e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5E8u;
        // 0x3aa5ec: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5e8) {
            ctx->pc = 0x3AA5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa5c8;
        }
    }
    ctx->pc = 0x3AA5F0u;
    // 0x3aa5f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3AA5F0u;
    {
        const bool branch_taken_0x3aa5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5F0u;
        // 0x3aa5f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5f0) {
            ctx->pc = 0x3AA618u;
            goto label_3aa618;
        }
    }
    ctx->pc = 0x3AA5F8u;
label_3aa5f8:
    // 0x3aa5f8: 0x2454f7f8  addiu       $s4, $v0, -0x808
    ctx->pc = 0x3aa5f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965240));
    // 0x3aa5fc: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x3aa5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x3aa600: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3aa600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa604: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3AA604u;
    SET_GPR_U32(ctx, 31, 0x3AA60Cu);
    ctx->pc = 0x3AA608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA604u;
    // 0x3aa608: 0x32b70084  andi        $s7, $s5, 0x84 (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3AA604u, 0x3AA60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA60Cu;
label_3aa60c:
    // 0x3aa60c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3AA60Cu;
    {
        const bool branch_taken_0x3aa60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA60Cu;
        // 0x3aa610: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa60c) {
            ctx->pc = 0x3AA67Cu;
            goto label_3aa67c;
        }
    }
    ctx->pc = 0x3AA614u;
label_3aa614:
    // 0x3aa614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aa618:
    // 0x3aa618: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3AA618u;
    {
        const bool branch_taken_0x3aa618 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA618u;
        // 0x3aa61c: 0x3b41023  subu        $v0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa618) {
            ctx->pc = 0x3AA64Cu;
            goto label_3aa64c;
        }
    }
    ctx->pc = 0x3AA620u;
    // 0x3aa620: 0x32a20200  andi        $v0, $s5, 0x200
    ctx->pc = 0x3aa620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)512);
    // 0x3aa624: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA624u;
    {
        const bool branch_taken_0x3aa624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA624u;
        // 0x3aa628: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa624) {
            ctx->pc = 0x3AA648u;
            goto label_3aa648;
        }
    }
    ctx->pc = 0x3AA62Cu;
    // 0x3aa62c: 0x27a6016c  addiu       $a2, $sp, 0x16C
    ctx->pc = 0x3aa62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x3aa630: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3aa630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3aa634: 0x27a7018c  addiu       $a3, $sp, 0x18C
    ctx->pc = 0x3aa634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_3aa638:
    // 0x3aa638: 0xc0eaba8  jal         func_3AAEA0
    ctx->pc = 0x3AA638u;
    SET_GPR_U32(ctx, 31, 0x3AA640u);
    ctx->pc = 0x3AAEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAEA0u, 0x3AA638u, 0x3AA640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA640u;
label_3aa640:
    // 0x3aa640: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3AA640u;
    {
        const bool branch_taken_0x3aa640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA640u;
        // 0x3aa644: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa640) {
            ctx->pc = 0x3AA67Cu;
            goto label_3aa67c;
        }
    }
    ctx->pc = 0x3AA648u;
label_3aa648:
    // 0x3aa648: 0x3b41023  subu        $v0, $sp, $s4
    ctx->pc = 0x3aa648u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
label_3aa64c:
    // 0x3aa64c: 0x2442016c  addiu       $v0, $v0, 0x16C
    ctx->pc = 0x3aa64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 364));
    // 0x3aa650: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3AA650u;
    {
        const bool branch_taken_0x3aa650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA650u;
        // 0x3aa654: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa650) {
            ctx->pc = 0x3AA67Cu;
            goto label_3aa67c;
        }
    }
    ctx->pc = 0x3AA658u;
label_3aa658:
    // 0x3aa658: 0x12c001fa  beqz        $s6, . + 4 + (0x1FA << 2)
    ctx->pc = 0x3AA658u;
    {
        const bool branch_taken_0x3aa658 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA658u;
        // 0x3aa65c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa658) {
            ctx->pc = 0x3AAE44u;
            goto label_3aae44;
        }
    }
    ctx->pc = 0x3AA660u;
    // 0x3aa660: 0x32a50004  andi        $a1, $s5, 0x4
    ctx->pc = 0x3aa660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3aa664: 0xa3b60010  sb          $s6, 0x10($sp)
    ctx->pc = 0x3aa664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 22));
    // 0x3aa668: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x3aa668u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3aa66c: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x3aa66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x3aa670: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3aa670u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3aa674: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x3aa674u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa678: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x3aa678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
label_3aa67c:
    // 0x3aa67c: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x3aa67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x3aa680: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x3aa680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x3aa684: 0x83a30180  lb          $v1, 0x180($sp)
    ctx->pc = 0x3aa684u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3aa688: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x3aa688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3aa68c: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x3aa68cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x3aa690: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA690u;
    {
        const bool branch_taken_0x3aa690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA690u;
        // 0x3aa694: 0xafa4019c  sw          $a0, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa690) {
            ctx->pc = 0x3AA6A4u;
            goto label_3aa6a4;
        }
    }
    ctx->pc = 0x3AA698u;
    // 0x3aa698: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3aa698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3aa69c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3AA69Cu;
    {
        const bool branch_taken_0x3aa69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA69Cu;
        // 0x3aa6a0: 0xafa4019c  sw          $a0, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa69c) {
            ctx->pc = 0x3AA6B4u;
            goto label_3aa6b4;
        }
    }
    ctx->pc = 0x3AA6A4u;
label_3aa6a4:
    // 0x3aa6a4: 0x8fa5019c  lw          $a1, 0x19C($sp)
    ctx->pc = 0x3aa6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3aa6a8: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x3aa6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x3aa6ac: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3aa6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3aa6b0: 0xafa5019c  sw          $a1, 0x19C($sp)
    ctx->pc = 0x3aa6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 5));
label_3aa6b4:
    // 0x3aa6b4: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x3aa6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3aa6b8: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x3aa6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x3aa6bc: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x3aa6bcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3aa6c0: 0x16e0005a  bnez        $s7, . + 4 + (0x5A << 2)
    ctx->pc = 0x3AA6C0u;
    {
        const bool branch_taken_0x3aa6c0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6C0u;
        // 0x3aa6c4: 0xafa601a4  sw          $a2, 0x1A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6c0) {
            ctx->pc = 0x3AA82Cu;
            goto label_3aa82c;
        }
    }
    ctx->pc = 0x3AA6C8u;
    // 0x3aa6c8: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x3aa6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3aa6cc: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x3aa6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3aa6d0: 0x1a000056  blez        $s0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3AA6D0u;
    {
        const bool branch_taken_0x3aa6d0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3AA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6D0u;
        // 0x3aa6d4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6d0) {
            ctx->pc = 0x3AA82Cu;
            goto label_3aa82c;
        }
    }
    ctx->pc = 0x3AA6D8u;
    // 0x3aa6d8: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3AA6D8u;
    {
        const bool branch_taken_0x3aa6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6D8u;
        // 0x3aa6dc: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6d8) {
            ctx->pc = 0x3AA79Cu;
            goto label_3aa79c;
        }
    }
    ctx->pc = 0x3AA6E0u;
    // 0x3aa6e0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3aa6e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aa6e4: 0x0  nop
    ctx->pc = 0x3aa6e4u;
    // NOP
label_3aa6e8:
    // 0x3aa6e8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3aa6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3aa6ec: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3AA6ECu;
    {
        const bool branch_taken_0x3aa6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa6ec) {
            ctx->pc = 0x3AA6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA6ECu;
            // 0x3aa6f0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA768u;
            goto label_3aa768;
        }
    }
    ctx->pc = 0x3AA6F4u;
    // 0x3aa6f4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3aa6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa6f8: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3aa6f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3aa6fc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AA6FCu;
    {
        const bool branch_taken_0x3aa6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa6fc) {
            ctx->pc = 0x3AA700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA6FCu;
            // 0x3aa700: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA748u;
            goto label_3aa748;
        }
    }
    ctx->pc = 0x3AA704u;
    // 0x3aa704: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3aa704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa708: 0x2643f7a0  addiu       $v1, $s2, -0x860
    ctx->pc = 0x3aa708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965152));
    // 0x3aa70c: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x3aa70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3aa710: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x3aa710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3aa714: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x3aa714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3aa718: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x3aa718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3aa71c: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x3aa71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aa720: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x3aa720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aa724: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x3aa724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aa728: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x3aa728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aa72c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aa72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa730: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aa730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa734: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3aa734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3aa738: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3aa738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3aa73c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3aa73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3aa740: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3AA740u;
    {
        const bool branch_taken_0x3aa740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA740u;
        // 0x3aa744: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa740) {
            ctx->pc = 0x3AA78Cu;
            goto label_3aa78c;
        }
    }
    ctx->pc = 0x3AA748u;
label_3aa748:
    // 0x3aa748: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AA748u;
    SET_GPR_U32(ctx, 31, 0x3AA750u);
    ctx->pc = 0x3AA74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA748u;
    // 0x3aa74c: 0x2645f7a0  addiu       $a1, $s2, -0x860 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AA748u, 0x3AA750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA750u;
label_3aa750:
    // 0x3aa750: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aa750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa754: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aa754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa758: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3aa758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3aa75c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3aa75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aa760: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3AA760u;
    {
        const bool branch_taken_0x3aa760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA760u;
        // 0x3aa764: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa760) {
            ctx->pc = 0x3AA78Cu;
            goto label_3aa78c;
        }
    }
    ctx->pc = 0x3AA768u;
label_3aa768:
    // 0x3aa768: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA768u;
    {
        const bool branch_taken_0x3aa768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa768) {
            ctx->pc = 0x3AA76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA768u;
            // 0x3aa76c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA77Cu;
            goto label_3aa77c;
        }
    }
    ctx->pc = 0x3AA770u;
    // 0x3aa770: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3aa770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa774: 0xa624000e  sh          $a0, 0xE($s1)
    ctx->pc = 0x3aa774u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x3aa778: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aa778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3aa77c:
    // 0x3aa77c: 0x2645f7a0  addiu       $a1, $s2, -0x860
    ctx->pc = 0x3aa77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965152));
    // 0x3aa780: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3aa780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3aa784: 0xc0ea720  jal         func_3A9C80
    ctx->pc = 0x3AA784u;
    SET_GPR_U32(ctx, 31, 0x3AA78Cu);
    ctx->pc = 0x3AA788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA784u;
    // 0x3aa788: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9C80u, 0x3AA784u, 0x3AA78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA78Cu;
label_3aa78c:
    // 0x3aa78c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3aa78cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3aa790: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3aa790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3aa794: 0x5040ffd4  beql        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x3AA794u;
    {
        const bool branch_taken_0x3aa794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa794) {
            ctx->pc = 0x3AA798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA794u;
            // 0x3aa798: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa6e8;
        }
    }
    ctx->pc = 0x3AA79Cu;
label_3aa79c:
    // 0x3aa79c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3aa79cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aa7a0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3aa7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3aa7a4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AA7A4u;
    {
        const bool branch_taken_0x3aa7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa7a4) {
            ctx->pc = 0x3AA7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA7A4u;
            // 0x3aa7a8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA808u;
            goto label_3aa808;
        }
    }
    ctx->pc = 0x3AA7ACu;
    // 0x3aa7ac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3aa7acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa7b0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3aa7b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3aa7b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AA7B4u;
    {
        const bool branch_taken_0x3aa7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7B4u;
        // 0x3aa7b8: 0x2645f7a0  addiu       $a1, $s2, -0x860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa7b4) {
            ctx->pc = 0x3AA7E4u;
            goto label_3aa7e4;
        }
    }
    ctx->pc = 0x3AA7BCu;
    // 0x3aa7bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3aa7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa7c0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AA7C0u;
    SET_GPR_U32(ctx, 31, 0x3AA7C8u);
    ctx->pc = 0x3AA7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA7C0u;
    // 0x3aa7c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AA7C0u, 0x3AA7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA7C8u;
label_3aa7c8:
    // 0x3aa7c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aa7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa7cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aa7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa7d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3aa7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3aa7d4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3aa7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3aa7d8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3aa7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3aa7dc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3AA7DCu;
    {
        const bool branch_taken_0x3aa7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7DCu;
        // 0x3aa7e0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa7dc) {
            ctx->pc = 0x3AA82Cu;
            goto label_3aa82c;
        }
    }
    ctx->pc = 0x3AA7E4u;
label_3aa7e4:
    // 0x3aa7e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3aa7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa7e8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AA7E8u;
    SET_GPR_U32(ctx, 31, 0x3AA7F0u);
    ctx->pc = 0x3AA7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA7E8u;
    // 0x3aa7ec: 0x2645f7a0  addiu       $a1, $s2, -0x860 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AA7E8u, 0x3AA7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA7F0u;
label_3aa7f0:
    // 0x3aa7f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aa7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa7f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aa7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa7f8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3aa7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3aa7fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3aa7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aa800: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3AA800u;
    {
        const bool branch_taken_0x3aa800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA800u;
        // 0x3aa804: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa800) {
            ctx->pc = 0x3AA82Cu;
            goto label_3aa82c;
        }
    }
    ctx->pc = 0x3AA808u;
label_3aa808:
    // 0x3aa808: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA808u;
    {
        const bool branch_taken_0x3aa808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa808) {
            ctx->pc = 0x3AA80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA808u;
            // 0x3aa80c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA81Cu;
            goto label_3aa81c;
        }
    }
    ctx->pc = 0x3AA810u;
    // 0x3aa810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa814: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3aa814u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aa818: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aa818u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3aa81c:
    // 0x3aa81c: 0x2645f7a0  addiu       $a1, $s2, -0x860
    ctx->pc = 0x3aa81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965152));
    // 0x3aa820: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3aa820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa824: 0xc0ea720  jal         func_3A9C80
    ctx->pc = 0x3AA824u;
    SET_GPR_U32(ctx, 31, 0x3AA82Cu);
    ctx->pc = 0x3AA828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA824u;
    // 0x3aa828: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9C80u, 0x3AA824u, 0x3AA82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA82Cu;
label_3aa82c:
    // 0x3aa82c: 0x83a20180  lb          $v0, 0x180($sp)
    ctx->pc = 0x3aa82cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3aa830: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3AA830u;
    {
        const bool branch_taken_0x3aa830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA830u;
        // 0x3aa834: 0x93a30180  lbu         $v1, 0x180($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa830) {
            ctx->pc = 0x3AA8A8u;
            goto label_3aa8a8;
        }
    }
    ctx->pc = 0x3AA838u;
    // 0x3aa838: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3aa838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aa83c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3aa83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3aa840: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3AA840u;
    {
        const bool branch_taken_0x3aa840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa840) {
            ctx->pc = 0x3AA844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA840u;
            // 0x3aa844: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA87Cu;
            goto label_3aa87c;
        }
    }
    ctx->pc = 0x3AA848u;
    // 0x3aa848: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3aa848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa84c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x3aa84cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3aa850: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA850u;
    {
        const bool branch_taken_0x3aa850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa850) {
            ctx->pc = 0x3AA854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA850u;
            // 0x3aa854: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA874u;
            goto label_3aa874;
        }
    }
    ctx->pc = 0x3AA858u;
    // 0x3aa858: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3aa858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa85c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3aa85cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3aa860: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aa860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa864: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aa864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa868: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3aa868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3aa86c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3AA86Cu;
    {
        const bool branch_taken_0x3aa86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA86Cu;
        // 0x3aa870: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa86c) {
            ctx->pc = 0x3AA8FCu;
            goto label_3aa8fc;
        }
    }
    ctx->pc = 0x3AA874u;
label_3aa874:
    // 0x3aa874: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3AA874u;
    {
        const bool branch_taken_0x3aa874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA874u;
        // 0x3aa878: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa874) {
            ctx->pc = 0x3AA90Cu;
            goto label_3aa90c;
        }
    }
    ctx->pc = 0x3AA87Cu;
label_3aa87c:
    // 0x3aa87c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA87Cu;
    {
        const bool branch_taken_0x3aa87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa87c) {
            ctx->pc = 0x3AA880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA87Cu;
            // 0x3aa880: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA890u;
            goto label_3aa890;
        }
    }
    ctx->pc = 0x3AA884u;
    // 0x3aa884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa888: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3aa888u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aa88c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aa88cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3aa890:
    // 0x3aa890: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x3aa890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3aa894: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3aa894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa898: 0xc0ea720  jal         func_3A9C80
    ctx->pc = 0x3AA898u;
    SET_GPR_U32(ctx, 31, 0x3AA8A0u);
    ctx->pc = 0x3AA89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA898u;
    // 0x3aa89c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9C80u, 0x3AA898u, 0x3AA8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA8A0u;
label_3aa8a0:
    // 0x3aa8a0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3AA8A0u;
    {
        const bool branch_taken_0x3aa8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8A0u;
        // 0x3aa8a4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa8a0) {
            ctx->pc = 0x3AA958u;
            goto label_3aa958;
        }
    }
    ctx->pc = 0x3AA8A8u;
label_3aa8a8:
    // 0x3aa8a8: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x3aa8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x3aa8ac: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3AA8ACu;
    {
        const bool branch_taken_0x3aa8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8ACu;
        // 0x3aa8b0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa8ac) {
            ctx->pc = 0x3AA954u;
            goto label_3aa954;
        }
    }
    ctx->pc = 0x3AA8B4u;
    // 0x3aa8b4: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x3aa8b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aa8b8: 0xa3a20170  sb          $v0, 0x170($sp)
    ctx->pc = 0x3aa8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aa8bc: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x3aa8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x3aa8c0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3AA8C0u;
    {
        const bool branch_taken_0x3aa8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8C0u;
        // 0x3aa8c4: 0xa3b60171  sb          $s6, 0x171($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 369), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa8c0) {
            ctx->pc = 0x3AA92Cu;
            goto label_3aa92c;
        }
    }
    ctx->pc = 0x3AA8C8u;
    // 0x3aa8c8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3aa8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa8cc: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x3aa8ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3aa8d0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3AA8D0u;
    {
        const bool branch_taken_0x3aa8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa8d0) {
            ctx->pc = 0x3AA8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA8D0u;
            // 0x3aa8d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA908u;
            goto label_3aa908;
        }
    }
    ctx->pc = 0x3AA8D8u;
    // 0x3aa8d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3aa8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa8dc: 0x83a50170  lb          $a1, 0x170($sp)
    ctx->pc = 0x3aa8dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3aa8e0: 0x83a60171  lb          $a2, 0x171($sp)
    ctx->pc = 0x3aa8e0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 369)));
    // 0x3aa8e4: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x3aa8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3aa8e8: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x3aa8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x3aa8ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aa8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa8f0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aa8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa8f4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3aa8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3aa8f8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3aa8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3aa8fc:
    // 0x3aa8fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3aa8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3aa900: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3AA900u;
    {
        const bool branch_taken_0x3aa900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA900u;
        // 0x3aa904: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa900) {
            ctx->pc = 0x3AA954u;
            goto label_3aa954;
        }
    }
    ctx->pc = 0x3AA908u;
label_3aa908:
    // 0x3aa908: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x3aa908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_3aa90c:
    // 0x3aa90c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AA90Cu;
    SET_GPR_U32(ctx, 31, 0x3AA914u);
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AA90Cu, 0x3AA914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA914u;
label_3aa914:
    // 0x3aa914: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aa914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa918: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aa918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa91c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3aa91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3aa920: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3aa920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aa924: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3AA924u;
    {
        const bool branch_taken_0x3aa924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA924u;
        // 0x3aa928: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa924) {
            ctx->pc = 0x3AA954u;
            goto label_3aa954;
        }
    }
    ctx->pc = 0x3AA92Cu;
label_3aa92c:
    // 0x3aa92c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3aa92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aa930: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA930u;
    {
        const bool branch_taken_0x3aa930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa930) {
            ctx->pc = 0x3AA934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA930u;
            // 0x3aa934: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA944u;
            goto label_3aa944;
        }
    }
    ctx->pc = 0x3AA938u;
    // 0x3aa938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa93c: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3aa93cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aa940: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aa940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3aa944:
    // 0x3aa944: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x3aa944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3aa948: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3aa948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aa94c: 0xc0ea720  jal         func_3A9C80
    ctx->pc = 0x3AA94Cu;
    SET_GPR_U32(ctx, 31, 0x3AA954u);
    ctx->pc = 0x3AA950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA94Cu;
    // 0x3aa950: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9C80u, 0x3AA94Cu, 0x3AA954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA954u;
label_3aa954:
    // 0x3aa954: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3aa954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3aa958:
    // 0x3aa958: 0x16e2005b  bne         $s7, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x3AA958u;
    {
        const bool branch_taken_0x3aa958 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA958u;
        // 0x3aa95c: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa958) {
            ctx->pc = 0x3AAAC8u;
            goto label_3aaac8;
        }
    }
    ctx->pc = 0x3AA960u;
    // 0x3aa960: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x3aa960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x3aa964: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x3aa964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3aa968: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x3aa968u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3aa96c: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3AA96Cu;
    {
        const bool branch_taken_0x3aa96c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3AA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA96Cu;
        // 0x3aa970: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa96c) {
            ctx->pc = 0x3AAAC4u;
            goto label_3aaac4;
        }
    }
    ctx->pc = 0x3AA974u;
    // 0x3aa974: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3AA974u;
    {
        const bool branch_taken_0x3aa974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA974u;
        // 0x3aa978: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa974) {
            ctx->pc = 0x3AAA34u;
            goto label_3aaa34;
        }
    }
    ctx->pc = 0x3AA97Cu;
    // 0x3aa97c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3aa97cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa980: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3aa980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aa984: 0x0  nop
    ctx->pc = 0x3aa984u;
    // NOP
label_3aa988:
    // 0x3aa988: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3aa988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3aa98c: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3AA98Cu;
    {
        const bool branch_taken_0x3aa98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa98c) {
            ctx->pc = 0x3AA990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA98Cu;
            // 0x3aa990: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAA08u;
            goto label_3aaa08;
        }
    }
    ctx->pc = 0x3AA994u;
    // 0x3aa994: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3aa994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa998: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3aa998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3aa99c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AA99Cu;
    {
        const bool branch_taken_0x3aa99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa99c) {
            ctx->pc = 0x3AA9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA99Cu;
            // 0x3aa9a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA9E8u;
            goto label_3aa9e8;
        }
    }
    ctx->pc = 0x3AA9A4u;
    // 0x3aa9a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3aa9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa9a8: 0x2646f7b0  addiu       $a2, $s2, -0x850
    ctx->pc = 0x3aa9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965168));
    // 0x3aa9ac: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x3aa9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3aa9b0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x3aa9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3aa9b4: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x3aa9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3aa9b8: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x3aa9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3aa9bc: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3aa9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aa9c0: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3aa9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aa9c4: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3aa9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aa9c8: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3aa9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aa9cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aa9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa9d0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aa9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa9d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3aa9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3aa9d8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3aa9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3aa9dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3aa9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3aa9e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3AA9E0u;
    {
        const bool branch_taken_0x3aa9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA9E0u;
        // 0x3aa9e4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa9e0) {
            ctx->pc = 0x3AAA24u;
            goto label_3aaa24;
        }
    }
    ctx->pc = 0x3AA9E8u;
label_3aa9e8:
    // 0x3aa9e8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AA9E8u;
    SET_GPR_U32(ctx, 31, 0x3AA9F0u);
    ctx->pc = 0x3AA9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA9E8u;
    // 0x3aa9ec: 0x2645f7b0  addiu       $a1, $s2, -0x850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AA9E8u, 0x3AA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA9F0u;
label_3aa9f0:
    // 0x3aa9f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aa9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aa9f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aa9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aa9f8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3aa9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3aa9fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3aa9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aaa00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AAA00u;
    {
        const bool branch_taken_0x3aaa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA00u;
        // 0x3aaa04: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaa00) {
            ctx->pc = 0x3AAA24u;
            goto label_3aaa24;
        }
    }
    ctx->pc = 0x3AAA08u;
label_3aaa08:
    // 0x3aaa08: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AAA08u;
    {
        const bool branch_taken_0x3aaa08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aaa08) {
            ctx->pc = 0x3AAA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAA08u;
            // 0x3aaa0c: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAA10u;
            goto label_3aaa10;
        }
    }
    ctx->pc = 0x3AAA10u;
label_3aaa10:
    // 0x3aaa10: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aaa10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3aaa14: 0x2645f7b0  addiu       $a1, $s2, -0x850
    ctx->pc = 0x3aaa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965168));
    // 0x3aaa18: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3aaa18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3aaa1c: 0xc0ea720  jal         func_3A9C80
    ctx->pc = 0x3AAA1Cu;
    SET_GPR_U32(ctx, 31, 0x3AAA24u);
    ctx->pc = 0x3AAA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAA1Cu;
    // 0x3aaa20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9C80u, 0x3AAA1Cu, 0x3AAA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA24u;
label_3aaa24:
    // 0x3aaa24: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3aaa24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3aaa28: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3aaa28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3aaa2c: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3AAA2Cu;
    {
        const bool branch_taken_0x3aaa2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aaa2c) {
            ctx->pc = 0x3AAA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAA2Cu;
            // 0x3aaa30: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa988;
        }
    }
    ctx->pc = 0x3AAA34u;
label_3aaa34:
    // 0x3aaa34: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3aaa34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aaa38: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3aaa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3aaa3c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AAA3Cu;
    {
        const bool branch_taken_0x3aaa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aaa3c) {
            ctx->pc = 0x3AAA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAA3Cu;
            // 0x3aaa40: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAAA0u;
            goto label_3aaaa0;
        }
    }
    ctx->pc = 0x3AAA44u;
    // 0x3aaa44: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3aaa44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aaa48: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3aaa48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3aaa4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AAA4Cu;
    {
        const bool branch_taken_0x3aaa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA4Cu;
        // 0x3aaa50: 0x2645f7b0  addiu       $a1, $s2, -0x850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaa4c) {
            ctx->pc = 0x3AAA7Cu;
            goto label_3aaa7c;
        }
    }
    ctx->pc = 0x3AAA54u;
    // 0x3aaa54: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3aaa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aaa58: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AAA58u;
    SET_GPR_U32(ctx, 31, 0x3AAA60u);
    ctx->pc = 0x3AAA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAA58u;
    // 0x3aaa5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AAA58u, 0x3AAA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA60u;
label_3aaa60:
    // 0x3aaa60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aaa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aaa64: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aaa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aaa68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3aaa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3aaa6c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3aaa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3aaa70: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3aaa70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3aaa74: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3AAA74u;
    {
        const bool branch_taken_0x3aaa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA74u;
        // 0x3aaa78: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaa74) {
            ctx->pc = 0x3AAAC4u;
            goto label_3aaac4;
        }
    }
    ctx->pc = 0x3AAA7Cu;
label_3aaa7c:
    // 0x3aaa7c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3aaa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aaa80: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AAA80u;
    SET_GPR_U32(ctx, 31, 0x3AAA88u);
    ctx->pc = 0x3AAA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAA80u;
    // 0x3aaa84: 0x2645f7b0  addiu       $a1, $s2, -0x850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AAA80u, 0x3AAA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA88u;
label_3aaa88:
    // 0x3aaa88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aaa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aaa8c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aaa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aaa90: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3aaa90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3aaa94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3aaa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aaa98: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3AAA98u;
    {
        const bool branch_taken_0x3aaa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA98u;
        // 0x3aaa9c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaa98) {
            ctx->pc = 0x3AAAC4u;
            goto label_3aaac4;
        }
    }
    ctx->pc = 0x3AAAA0u;
label_3aaaa0:
    // 0x3aaaa0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AAAA0u;
    {
        const bool branch_taken_0x3aaaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aaaa0) {
            ctx->pc = 0x3AAAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAAA0u;
            // 0x3aaaa4: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAAB4u;
            goto label_3aaab4;
        }
    }
    ctx->pc = 0x3AAAA8u;
    // 0x3aaaa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aaaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aaaac: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3aaaacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aaab0: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aaab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3aaab4:
    // 0x3aaab4: 0x2645f7b0  addiu       $a1, $s2, -0x850
    ctx->pc = 0x3aaab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965168));
    // 0x3aaab8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3aaab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaabc: 0xc0ea720  jal         func_3A9C80
    ctx->pc = 0x3AAABCu;
    SET_GPR_U32(ctx, 31, 0x3AAAC4u);
    ctx->pc = 0x3AAAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAABCu;
    // 0x3aaac0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9C80u, 0x3AAABCu, 0x3AAAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAAC4u;
label_3aaac4:
    // 0x3aaac4: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x3aaac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_3aaac8:
    // 0x3aaac8: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x3aaac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x3aaacc: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x3aaaccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aaad0: 0x1a000054  blez        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x3AAAD0u;
    {
        const bool branch_taken_0x3aaad0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3AAAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAD0u;
        // 0x3aaad4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaad0) {
            ctx->pc = 0x3AAC24u;
            goto label_3aac24;
        }
    }
    ctx->pc = 0x3AAAD8u;
    // 0x3aaad8: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3AAAD8u;
    {
        const bool branch_taken_0x3aaad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAD8u;
        // 0x3aaadc: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaad8) {
            ctx->pc = 0x3AAB94u;
            goto label_3aab94;
        }
    }
    ctx->pc = 0x3AAAE0u;
    // 0x3aaae0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3aaae0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aaae4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3aaae4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3aaae8:
    // 0x3aaae8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3aaae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3aaaec: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3AAAECu;
    {
        const bool branch_taken_0x3aaaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aaaec) {
            ctx->pc = 0x3AAAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAAECu;
            // 0x3aaaf0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAB68u;
            goto label_3aab68;
        }
    }
    ctx->pc = 0x3AAAF4u;
    // 0x3aaaf4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3aaaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aaaf8: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3aaaf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3aaafc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AAAFCu;
    {
        const bool branch_taken_0x3aaafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aaafc) {
            ctx->pc = 0x3AAB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAAFCu;
            // 0x3aab00: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAB48u;
            goto label_3aab48;
        }
    }
    ctx->pc = 0x3AAB04u;
    // 0x3aab04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3aab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aab08: 0x2643f7b0  addiu       $v1, $s2, -0x850
    ctx->pc = 0x3aab08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965168));
    // 0x3aab0c: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x3aab0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3aab10: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x3aab10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3aab14: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x3aab14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3aab18: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x3aab18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3aab1c: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x3aab1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aab20: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x3aab20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aab24: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x3aab24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aab28: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x3aab28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aab2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aab30: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aab34: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3aab34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3aab38: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3aab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3aab3c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3aab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3aab40: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3AAB40u;
    {
        const bool branch_taken_0x3aab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB40u;
        // 0x3aab44: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab40) {
            ctx->pc = 0x3AAB84u;
            goto label_3aab84;
        }
    }
    ctx->pc = 0x3AAB48u;
label_3aab48:
    // 0x3aab48: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AAB48u;
    SET_GPR_U32(ctx, 31, 0x3AAB50u);
    ctx->pc = 0x3AAB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAB48u;
    // 0x3aab4c: 0x2645f7b0  addiu       $a1, $s2, -0x850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AAB48u, 0x3AAB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAB50u;
label_3aab50:
    // 0x3aab50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aab50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aab54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aab58: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3aab58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3aab5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3aab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aab60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AAB60u;
    {
        const bool branch_taken_0x3aab60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB60u;
        // 0x3aab64: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab60) {
            ctx->pc = 0x3AAB84u;
            goto label_3aab84;
        }
    }
    ctx->pc = 0x3AAB68u;
label_3aab68:
    // 0x3aab68: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AAB68u;
    {
        const bool branch_taken_0x3aab68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aab68) {
            ctx->pc = 0x3AAB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAB68u;
            // 0x3aab6c: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAB70u;
            goto label_3aab70;
        }
    }
    ctx->pc = 0x3AAB70u;
label_3aab70:
    // 0x3aab70: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aab70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3aab74: 0x2645f7b0  addiu       $a1, $s2, -0x850
    ctx->pc = 0x3aab74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965168));
    // 0x3aab78: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3aab78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3aab7c: 0xc0ea720  jal         func_3A9C80
    ctx->pc = 0x3AAB7Cu;
    SET_GPR_U32(ctx, 31, 0x3AAB84u);
    ctx->pc = 0x3AAB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAB7Cu;
    // 0x3aab80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9C80u, 0x3AAB7Cu, 0x3AAB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAB84u;
label_3aab84:
    // 0x3aab84: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3aab84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3aab88: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3aab88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3aab8c: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3AAB8Cu;
    {
        const bool branch_taken_0x3aab8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aab8c) {
            ctx->pc = 0x3AAB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAB8Cu;
            // 0x3aab90: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aaae8;
        }
    }
    ctx->pc = 0x3AAB94u;
label_3aab94:
    // 0x3aab94: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3aab94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aab98: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3aab98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3aab9c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AAB9Cu;
    {
        const bool branch_taken_0x3aab9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aab9c) {
            ctx->pc = 0x3AABA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAB9Cu;
            // 0x3aaba0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAC00u;
            goto label_3aac00;
        }
    }
    ctx->pc = 0x3AABA4u;
    // 0x3aaba4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3aaba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aaba8: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3aaba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3aabac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AABACu;
    {
        const bool branch_taken_0x3aabac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABACu;
        // 0x3aabb0: 0x2645f7b0  addiu       $a1, $s2, -0x850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aabac) {
            ctx->pc = 0x3AABDCu;
            goto label_3aabdc;
        }
    }
    ctx->pc = 0x3AABB4u;
    // 0x3aabb4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3aabb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aabb8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AABB8u;
    SET_GPR_U32(ctx, 31, 0x3AABC0u);
    ctx->pc = 0x3AABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AABB8u;
    // 0x3aabbc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AABB8u, 0x3AABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AABC0u;
label_3aabc0:
    // 0x3aabc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aabc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aabc4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aabc8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3aabc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3aabcc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3aabccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3aabd0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3aabd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3aabd4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3AABD4u;
    {
        const bool branch_taken_0x3aabd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABD4u;
        // 0x3aabd8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aabd4) {
            ctx->pc = 0x3AAC24u;
            goto label_3aac24;
        }
    }
    ctx->pc = 0x3AABDCu;
label_3aabdc:
    // 0x3aabdc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3aabdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aabe0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AABE0u;
    SET_GPR_U32(ctx, 31, 0x3AABE8u);
    ctx->pc = 0x3AABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AABE0u;
    // 0x3aabe4: 0x2645f7b0  addiu       $a1, $s2, -0x850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AABE0u, 0x3AABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AABE8u;
label_3aabe8:
    // 0x3aabe8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aabec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aabecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aabf0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3aabf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3aabf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3aabf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aabf8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3AABF8u;
    {
        const bool branch_taken_0x3aabf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABF8u;
        // 0x3aabfc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aabf8) {
            ctx->pc = 0x3AAC24u;
            goto label_3aac24;
        }
    }
    ctx->pc = 0x3AAC00u;
label_3aac00:
    // 0x3aac00: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AAC00u;
    {
        const bool branch_taken_0x3aac00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aac00) {
            ctx->pc = 0x3AAC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAC00u;
            // 0x3aac04: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAC14u;
            goto label_3aac14;
        }
    }
    ctx->pc = 0x3AAC08u;
    // 0x3aac08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aac0c: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3aac0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aac10: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aac10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3aac14:
    // 0x3aac14: 0x2645f7b0  addiu       $a1, $s2, -0x850
    ctx->pc = 0x3aac14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965168));
    // 0x3aac18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3aac18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aac1c: 0xc0ea720  jal         func_3A9C80
    ctx->pc = 0x3AAC1Cu;
    SET_GPR_U32(ctx, 31, 0x3AAC24u);
    ctx->pc = 0x3AAC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC1Cu;
    // 0x3aac20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9C80u, 0x3AAC1Cu, 0x3AAC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC24u;
label_3aac24:
    // 0x3aac24: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3aac24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aac28: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3aac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3aac2c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AAC2Cu;
    {
        const bool branch_taken_0x3aac2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC2Cu;
        // 0x3aac30: 0x8fa6018c  lw          $a2, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aac2c) {
            ctx->pc = 0x3AAC90u;
            goto label_3aac90;
        }
    }
    ctx->pc = 0x3AAC34u;
    // 0x3aac34: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3aac34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aac38: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x3aac38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3aac3c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AAC3Cu;
    {
        const bool branch_taken_0x3aac3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC3Cu;
        // 0x3aac40: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aac3c) {
            ctx->pc = 0x3AAC6Cu;
            goto label_3aac6c;
        }
    }
    ctx->pc = 0x3AAC44u;
    // 0x3aac44: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AAC44u;
    SET_GPR_U32(ctx, 31, 0x3AAC4Cu);
    ctx->pc = 0x3AAC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC44u;
    // 0x3aac48: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AAC44u, 0x3AAC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC4Cu;
label_3aac4c:
    // 0x3aac4c: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x3aac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x3aac50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aac54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aac58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3aac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3aac5c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3aac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3aac60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3aac60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3aac64: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3AAC64u;
    {
        const bool branch_taken_0x3aac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC64u;
        // 0x3aac68: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aac64) {
            ctx->pc = 0x3AACB8u;
            goto label_3aacb8;
        }
    }
    ctx->pc = 0x3AAC6Cu;
label_3aac6c:
    // 0x3aac6c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3aac6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aac70: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AAC70u;
    SET_GPR_U32(ctx, 31, 0x3AAC78u);
    ctx->pc = 0x3AAC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC70u;
    // 0x3aac74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AAC70u, 0x3AAC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC78u;
label_3aac78:
    // 0x3aac78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aac7c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aac80: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3aac80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3aac84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3aac84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aac88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3AAC88u;
    {
        const bool branch_taken_0x3aac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC88u;
        // 0x3aac8c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aac88) {
            ctx->pc = 0x3AACB8u;
            goto label_3aacb8;
        }
    }
    ctx->pc = 0x3AAC90u;
label_3aac90:
    // 0x3aac90: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3aac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aac94: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AAC94u;
    {
        const bool branch_taken_0x3aac94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aac94) {
            ctx->pc = 0x3AAC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAC94u;
            // 0x3aac98: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AACA8u;
            goto label_3aaca8;
        }
    }
    ctx->pc = 0x3AAC9Cu;
    // 0x3aac9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aaca0: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3aaca0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aaca4: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aaca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3aaca8:
    // 0x3aaca8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3aaca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aacac: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x3aacacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x3aacb0: 0xc0ea720  jal         func_3A9C80
    ctx->pc = 0x3AACB0u;
    SET_GPR_U32(ctx, 31, 0x3AACB8u);
    ctx->pc = 0x3AACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AACB0u;
    // 0x3aacb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9C80u, 0x3AACB0u, 0x3AACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AACB8u;
label_3aacb8:
    // 0x3aacb8: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x3aacb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x3aacbc: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3AACBCu;
    {
        const bool branch_taken_0x3aacbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AACBCu;
        // 0x3aacc0: 0x8fa50194  lw          $a1, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aacbc) {
            ctx->pc = 0x3AAE24u;
            goto label_3aae24;
        }
    }
    ctx->pc = 0x3AACC4u;
    // 0x3aacc4: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x3aacc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3aacc8: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x3aacc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3aaccc: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3AACCCu;
    {
        const bool branch_taken_0x3aaccc = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3AACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AACCCu;
        // 0x3aacd0: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaccc) {
            ctx->pc = 0x3AAE24u;
            goto label_3aae24;
        }
    }
    ctx->pc = 0x3AACD4u;
    // 0x3aacd4: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3AACD4u;
    {
        const bool branch_taken_0x3aacd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AACD4u;
        // 0x3aacd8: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aacd4) {
            ctx->pc = 0x3AAD94u;
            goto label_3aad94;
        }
    }
    ctx->pc = 0x3AACDCu;
    // 0x3aacdc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3aacdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aace0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3aace0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aace4: 0x0  nop
    ctx->pc = 0x3aace4u;
    // NOP
label_3aace8:
    // 0x3aace8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3aace8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3aacec: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3AACECu;
    {
        const bool branch_taken_0x3aacec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aacec) {
            ctx->pc = 0x3AACF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AACECu;
            // 0x3aacf0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAD68u;
            goto label_3aad68;
        }
    }
    ctx->pc = 0x3AACF4u;
    // 0x3aacf4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3aacf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aacf8: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3aacf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3aacfc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AACFCu;
    {
        const bool branch_taken_0x3aacfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aacfc) {
            ctx->pc = 0x3AAD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AACFCu;
            // 0x3aad00: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAD48u;
            goto label_3aad48;
        }
    }
    ctx->pc = 0x3AAD04u;
    // 0x3aad04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3aad04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aad08: 0x2646f7a0  addiu       $a2, $s2, -0x860
    ctx->pc = 0x3aad08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965152));
    // 0x3aad0c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x3aad0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3aad10: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x3aad10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3aad14: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x3aad14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3aad18: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x3aad18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3aad1c: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3aad1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aad20: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3aad20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aad24: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3aad24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aad28: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3aad28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aad2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aad30: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aad34: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3aad34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3aad38: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3aad38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3aad3c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3aad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3aad40: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3AAD40u;
    {
        const bool branch_taken_0x3aad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD40u;
        // 0x3aad44: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aad40) {
            ctx->pc = 0x3AAD84u;
            goto label_3aad84;
        }
    }
    ctx->pc = 0x3AAD48u;
label_3aad48:
    // 0x3aad48: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AAD48u;
    SET_GPR_U32(ctx, 31, 0x3AAD50u);
    ctx->pc = 0x3AAD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAD48u;
    // 0x3aad4c: 0x2645f7a0  addiu       $a1, $s2, -0x860 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AAD48u, 0x3AAD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAD50u;
label_3aad50:
    // 0x3aad50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aad50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aad54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aad58: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3aad58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3aad5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3aad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aad60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AAD60u;
    {
        const bool branch_taken_0x3aad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD60u;
        // 0x3aad64: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aad60) {
            ctx->pc = 0x3AAD84u;
            goto label_3aad84;
        }
    }
    ctx->pc = 0x3AAD68u;
label_3aad68:
    // 0x3aad68: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AAD68u;
    {
        const bool branch_taken_0x3aad68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aad68) {
            ctx->pc = 0x3AAD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAD68u;
            // 0x3aad6c: 0xa634000e  sh          $s4, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAD70u;
            goto label_3aad70;
        }
    }
    ctx->pc = 0x3AAD70u;
label_3aad70:
    // 0x3aad70: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aad70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3aad74: 0x2645f7a0  addiu       $a1, $s2, -0x860
    ctx->pc = 0x3aad74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965152));
    // 0x3aad78: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3aad78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3aad7c: 0xc0ea720  jal         func_3A9C80
    ctx->pc = 0x3AAD7Cu;
    SET_GPR_U32(ctx, 31, 0x3AAD84u);
    ctx->pc = 0x3AAD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAD7Cu;
    // 0x3aad80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9C80u, 0x3AAD7Cu, 0x3AAD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAD84u;
label_3aad84:
    // 0x3aad84: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3aad84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3aad88: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3aad88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3aad8c: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3AAD8Cu;
    {
        const bool branch_taken_0x3aad8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aad8c) {
            ctx->pc = 0x3AAD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAD8Cu;
            // 0x3aad90: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AACE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aace8;
        }
    }
    ctx->pc = 0x3AAD94u;
label_3aad94:
    // 0x3aad94: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3aad94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aad98: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3aad98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3aad9c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AAD9Cu;
    {
        const bool branch_taken_0x3aad9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aad9c) {
            ctx->pc = 0x3AADA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAD9Cu;
            // 0x3aada0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAE00u;
            goto label_3aae00;
        }
    }
    ctx->pc = 0x3AADA4u;
    // 0x3aada4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3aada4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aada8: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3aada8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3aadac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AADACu;
    {
        const bool branch_taken_0x3aadac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADACu;
        // 0x3aadb0: 0x2645f7a0  addiu       $a1, $s2, -0x860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aadac) {
            ctx->pc = 0x3AADDCu;
            goto label_3aaddc;
        }
    }
    ctx->pc = 0x3AADB4u;
    // 0x3aadb4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3aadb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aadb8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AADB8u;
    SET_GPR_U32(ctx, 31, 0x3AADC0u);
    ctx->pc = 0x3AADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AADB8u;
    // 0x3aadbc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AADB8u, 0x3AADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AADC0u;
label_3aadc0:
    // 0x3aadc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aadc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aadc4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aadc8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3aadc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3aadcc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3aadccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3aadd0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3aadd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3aadd4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3AADD4u;
    {
        const bool branch_taken_0x3aadd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADD4u;
        // 0x3aadd8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aadd4) {
            ctx->pc = 0x3AAE24u;
            goto label_3aae24;
        }
    }
    ctx->pc = 0x3AADDCu;
label_3aaddc:
    // 0x3aaddc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3aaddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aade0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AADE0u;
    SET_GPR_U32(ctx, 31, 0x3AADE8u);
    ctx->pc = 0x3AADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AADE0u;
    // 0x3aade4: 0x2645f7a0  addiu       $a1, $s2, -0x860 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AADE0u, 0x3AADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AADE8u;
label_3aade8:
    // 0x3aade8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aade8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aadec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aadecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aadf0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3aadf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3aadf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3aadf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aadf8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3AADF8u;
    {
        const bool branch_taken_0x3aadf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADF8u;
        // 0x3aadfc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aadf8) {
            ctx->pc = 0x3AAE24u;
            goto label_3aae24;
        }
    }
    ctx->pc = 0x3AAE00u;
label_3aae00:
    // 0x3aae00: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AAE00u;
    {
        const bool branch_taken_0x3aae00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aae00) {
            ctx->pc = 0x3AAE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAE00u;
            // 0x3aae04: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAE14u;
            goto label_3aae14;
        }
    }
    ctx->pc = 0x3AAE08u;
    // 0x3aae08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aae0c: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3aae0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aae10: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aae10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3aae14:
    // 0x3aae14: 0x2645f7a0  addiu       $a1, $s2, -0x860
    ctx->pc = 0x3aae14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965152));
    // 0x3aae18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3aae18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aae1c: 0xc0ea720  jal         func_3A9C80
    ctx->pc = 0x3AAE1Cu;
    SET_GPR_U32(ctx, 31, 0x3AAE24u);
    ctx->pc = 0x3AAE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAE1Cu;
    // 0x3aae20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9C80u, 0x3AAE1Cu, 0x3AAE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAE24u;
label_3aae24:
    // 0x3aae24: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x3aae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x3aae28: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x3aae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x3aae2c: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x3aae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3aae30: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x3aae30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3aae34: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x3aae34u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3aae38: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3aae38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3aae3c: 0x1000fc1c  b           . + 4 + (-0x3E4 << 2)
    ctx->pc = 0x3AAE3Cu;
    {
        const bool branch_taken_0x3aae3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE3Cu;
        // 0x3aae40: 0xafa50190  sw          $a1, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae3c) {
            ctx->pc = 0x3A9EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9eb0;
        }
    }
    ctx->pc = 0x3AAE44u;
label_3aae44:
    // 0x3aae44: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3aae44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3aae48:
    // 0x3aae48: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3aae48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3aae4c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AAE4Cu;
    {
        const bool branch_taken_0x3aae4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE4Cu;
        // 0x3aae50: 0x8fa20190  lw          $v0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae4c) {
            ctx->pc = 0x3AAE6Cu;
            goto label_3aae6c;
        }
    }
    ctx->pc = 0x3AAE54u;
    // 0x3aae54: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aae54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3aae58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aae58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aae5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aae5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aae60: 0xc0ea720  jal         func_3A9C80
    ctx->pc = 0x3AAE60u;
    SET_GPR_U32(ctx, 31, 0x3AAE68u);
    ctx->pc = 0x3AAE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAE60u;
    // 0x3aae64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9C80u, 0x3AAE60u, 0x3AAE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAE68u;
label_3aae68:
    // 0x3aae68: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x3aae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_3aae6c:
    // 0x3aae6c: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x3aae6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x3aae70: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x3aae70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x3aae74: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x3aae74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x3aae78: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x3aae78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x3aae7c: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x3aae7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x3aae80: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x3aae80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3aae84: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x3aae84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x3aae88: 0x7bb701e0  lq          $s7, 0x1E0($sp)
    ctx->pc = 0x3aae88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x3aae8c: 0x7bbe01d0  lq          $fp, 0x1D0($sp)
    ctx->pc = 0x3aae8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x3aae90: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x3aae90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x3aae94: 0x3e00008  jr          $ra
    ctx->pc = 0x3AAE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE94u;
        // 0x3aae98: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AAE9Cu;
    // 0x3aae9c: 0x0  nop
    ctx->pc = 0x3aae9cu;
    // NOP
    ctx->pc = 0x3aaea0u;
}
