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

// Function: func_001A2E88
// Address: 0x1a2e88 - 0x1a34a0
void func_001A2E88_0x1a2e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A2E88_0x1a2e88");
#endif

    switch (ctx->pc) {
        case 0x1a2f08u: goto label_1a2f08;
        case 0x1a2f48u: goto label_1a2f48;
        case 0x1a2f5cu: goto label_1a2f5c;
        case 0x1a2f68u: goto label_1a2f68;
        case 0x1a2f80u: goto label_1a2f80;
        case 0x1a2fccu: goto label_1a2fcc;
        case 0x1a2ffcu: goto label_1a2ffc;
        case 0x1a3010u: goto label_1a3010;
        case 0x1a3024u: goto label_1a3024;
        case 0x1a3154u: goto label_1a3154;
        case 0x1a3160u: goto label_1a3160;
        case 0x1a316cu: goto label_1a316c;
        case 0x1a317cu: goto label_1a317c;
        case 0x1a3188u: goto label_1a3188;
        case 0x1a3194u: goto label_1a3194;
        case 0x1a31b4u: goto label_1a31b4;
        case 0x1a31e0u: goto label_1a31e0;
        case 0x1a3204u: goto label_1a3204;
        case 0x1a3270u: goto label_1a3270;
        case 0x1a32b4u: goto label_1a32b4;
        case 0x1a32c4u: goto label_1a32c4;
        case 0x1a3340u: goto label_1a3340;
        case 0x1a33b8u: goto label_1a33b8;
        case 0x1a33d4u: goto label_1a33d4;
        default: break;
    }

    ctx->pc = 0x1a2e88u;

    // 0x1a2e88: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a2e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a2e8c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1a2e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1a2e90: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1a2e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1a2e94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a2e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e98: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1a2e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1a2e9c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1a2e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1a2ea0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1a2ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1a2ea4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a2ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a2ea8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a2ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a2eac: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1a2eacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1a2eb0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1a2eb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1a2eb4: 0x924302f5  lbu         $v1, 0x2F5($s2)
    ctx->pc = 0x1a2eb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
    // 0x1a2eb8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1a2eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1a2ebc: 0x1040016c  beqz        $v0, . + 4 + (0x16C << 2)
    ctx->pc = 0x1A2EBCu;
    {
        const bool branch_taken_0x1a2ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EBCu;
        // 0x1a2ec0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ebc) {
            ctx->pc = 0x1A3470u;
            goto label_1a3470;
        }
    }
    ctx->pc = 0x1A2EC4u;
    // 0x1a2ec4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2ec8: 0x24426f70  addiu       $v0, $v0, 0x6F70
    ctx->pc = 0x1a2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28528));
    // 0x1a2ecc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a2eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a2ed0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a2ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2ed4: 0x800008  jr          $a0
    ctx->pc = 0x1A2ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2EDCu: goto label_1a2edc;
            case 0x1A3234u: goto label_1a3234;
            case 0x1A3258u: goto label_1a3258;
            case 0x1A33ECu: goto label_1a33ec;
            case 0x1A3418u: goto label_1a3418;
            case 0x1A345Cu: goto label_1a345c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2ED4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A2EDCu;
label_1a2edc:
    // 0x1a2edc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1a2edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1a2ee0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a2ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2ee4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a2ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ee8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a2ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a2eec: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1a2eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1a2ef0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1a2ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ef4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a2ef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ef8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a2ef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2efc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a2efcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f00: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1A2F00u;
    SET_GPR_U32(ctx, 31, 0x1A2F08u);
    ctx->pc = 0x1A2F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F00u;
    // 0x1a2f04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1A2F00u, 0x1A2F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F08u;
label_1a2f08:
    // 0x1a2f08: 0x8e430d94  lw          $v1, 0xD94($s2)
    ctx->pc = 0x1a2f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3476)));
    // 0x1a2f0c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2F0Cu;
    {
        const bool branch_taken_0x1a2f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f0c) {
            ctx->pc = 0x1A2F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2F0Cu;
            // 0x1a2f10: 0x82430d9e  lb          $v1, 0xD9E($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3486)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2F20u;
            goto label_1a2f20;
        }
    }
    ctx->pc = 0x1A2F14u;
    // 0x1a2f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2f18: 0xa2420d9f  sb          $v0, 0xD9F($s2)
    ctx->pc = 0x1a2f18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3487), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a2f1c: 0x82430d9e  lb          $v1, 0xD9E($s2)
    ctx->pc = 0x1a2f1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3486)));
label_1a2f20:
    // 0x1a2f20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2F20u;
    {
        const bool branch_taken_0x1a2f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F20u;
        // 0x1a2f24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f20) {
            ctx->pc = 0x1A2F38u;
            goto label_1a2f38;
        }
    }
    ctx->pc = 0x1A2F28u;
    // 0x1a2f28: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2F28u;
    {
        const bool branch_taken_0x1a2f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F28u;
        // 0x1a2f2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f28) {
            ctx->pc = 0x1A2F50u;
            goto label_1a2f50;
        }
    }
    ctx->pc = 0x1A2F30u;
    // 0x1a2f30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A2F30u;
    {
        const bool branch_taken_0x1a2f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F30u;
        // 0x1a2f34: 0x82450d9e  lb          $a1, 0xD9E($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3486)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f30) {
            ctx->pc = 0x1A2F60u;
            goto label_1a2f60;
        }
    }
    ctx->pc = 0x1A2F38u;
label_1a2f38:
    // 0x1a2f38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f40: 0xc068e18  jal         func_1A3860
    ctx->pc = 0x1A2F40u;
    SET_GPR_U32(ctx, 31, 0x1A2F48u);
    ctx->pc = 0x1A2F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F40u;
    // 0x1a2f44: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3860u, 0x1A2F40u, 0x1A2F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F48u;
label_1a2f48:
    // 0x1a2f48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2F48u;
    {
        const bool branch_taken_0x1a2f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F48u;
        // 0x1a2f4c: 0x82450d9e  lb          $a1, 0xD9E($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3486)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f48) {
            ctx->pc = 0x1A2F60u;
            goto label_1a2f60;
        }
    }
    ctx->pc = 0x1A2F50u;
label_1a2f50:
    // 0x1a2f50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a2f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2f54: 0xc068e18  jal         func_1A3860
    ctx->pc = 0x1A2F54u;
    SET_GPR_U32(ctx, 31, 0x1A2F5Cu);
    ctx->pc = 0x1A2F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F54u;
    // 0x1a2f58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3860u, 0x1A2F54u, 0x1A2F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F5Cu;
label_1a2f5c:
    // 0x1a2f5c: 0x82450d9e  lb          $a1, 0xD9E($s2)
    ctx->pc = 0x1a2f5cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3486)));
label_1a2f60:
    // 0x1a2f60: 0xc068dfc  jal         func_1A37F0
    ctx->pc = 0x1A2F60u;
    SET_GPR_U32(ctx, 31, 0x1A2F68u);
    ctx->pc = 0x1A2F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F60u;
    // 0x1a2f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A37F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A37F0u, 0x1A2F60u, 0x1A2F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F68u;
label_1a2f68:
    // 0x1a2f68: 0xa2400d9f  sb          $zero, 0xD9F($s2)
    ctx->pc = 0x1a2f68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3487), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2f6c: 0x26480d90  addiu       $t0, $s2, 0xD90
    ctx->pc = 0x1a2f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 3472));
    // 0x1a2f70: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1a2f70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2f74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a2f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f7c: 0x0  nop
    ctx->pc = 0x1a2f7cu;
    // NOP
label_1a2f80:
    // 0x1a2f80: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x1a2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x1a2f84: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x1a2f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x1a2f88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a2f8c: 0x892006  srlv        $a0, $t1, $a0
    ctx->pc = 0x1a2f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a2f90: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1a2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1a2f94: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x1a2f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a2f98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a2f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2f9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a2f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a2fa0: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1a2fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a2fa4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a2fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a2fa8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A2FA8u;
    {
        const bool branch_taken_0x1a2fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FA8u;
        // 0x1a2fac: 0xa3380b  movn        $a3, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fa8) {
            ctx->pc = 0x1A2F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2f80;
        }
    }
    ctx->pc = 0x1A2FB0u;
    // 0x1a2fb0: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2FB0u;
    {
        const bool branch_taken_0x1a2fb0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FB0u;
        // 0x1a2fb4: 0xae470d94  sw          $a3, 0xD94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3476), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fb0) {
            ctx->pc = 0x1A2FC4u;
            goto label_1a2fc4;
        }
    }
    ctx->pc = 0x1A2FB8u;
    // 0x1a2fb8: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1a2fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2fbc: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x1A2FBCu;
    {
        const bool branch_taken_0x1a2fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FBCu;
        // 0x1a2fc0: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fbc) {
            ctx->pc = 0x1A3468u;
            goto label_1a3468;
        }
    }
    ctx->pc = 0x1A2FC4u;
label_1a2fc4:
    // 0x1a2fc4: 0xc06de42  jal         func_1B7908
    ctx->pc = 0x1A2FC4u;
    SET_GPR_U32(ctx, 31, 0x1A2FCCu);
    ctx->pc = 0x1A2FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2FC4u;
    // 0x1a2fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1A2FC4u, 0x1A2FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FCCu;
label_1a2fcc:
    // 0x1a2fcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2fd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2fd4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a2fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a2fd8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1a2fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a2fdc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a2fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1a2fe0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a2fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1a2fe4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1a2fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a2fe8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1a2fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1a2fec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a2fecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a2ff0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a2ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a2ff4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A2FF4u;
    SET_GPR_U32(ctx, 31, 0x1A2FFCu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A2FF4u, 0x1A2FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FFCu;
label_1a2ffc:
    // 0x1a2ffc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1a2ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3000: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a3000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a3004: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a3004u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a3008: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A3008u;
    SET_GPR_U32(ctx, 31, 0x1A3010u);
    ctx->pc = 0x1A300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3008u;
    // 0x1a300c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A3008u, 0x1A3010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3010u;
label_1a3010:
    // 0x1a3010: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a3010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a3014: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a3014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3018: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a3018u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a301c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A301Cu;
    SET_GPR_U32(ctx, 31, 0x1A3024u);
    ctx->pc = 0x1A3020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A301Cu;
    // 0x1a3020: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A301Cu, 0x1A3024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3024u;
label_1a3024:
    // 0x1a3024: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a3024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a3028: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a3028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a302c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a302cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a3030: 0x924502b4  lbu         $a1, 0x2B4($s2)
    ctx->pc = 0x1a3030u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a3034: 0x24437040  addiu       $v1, $v0, 0x7040
    ctx->pc = 0x1a3034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28736));
    // 0x1a3038: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a3038u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a303c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a303cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a3040: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x1a3040u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x427044u));
    // 0x1a3044: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a3044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a3048: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a3048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a304c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1a304cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a3050: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3050u;
    {
        const bool branch_taken_0x1a3050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3050u;
        // 0x1a3054: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3050) {
            ctx->pc = 0x1A3060u;
            goto label_1a3060;
        }
    }
    ctx->pc = 0x1A3058u;
    // 0x1a3058: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1a3058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a305c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a305cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3060:
    // 0x1a3060: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1a3060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a3064: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3064u;
    {
        const bool branch_taken_0x1a3064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3064u;
        // 0x1a3068: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3064) {
            ctx->pc = 0x1A307Cu;
            goto label_1a307c;
        }
    }
    ctx->pc = 0x1A306Cu;
    // 0x1a306c: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a3070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a3074: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3074u;
    {
        const bool branch_taken_0x1a3074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3074u;
        // 0x1a3078: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3074) {
            ctx->pc = 0x1A3080u;
            goto label_1a3080;
        }
    }
    ctx->pc = 0x1A307Cu;
label_1a307c:
    // 0x1a307c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a307cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3080:
    // 0x1a3080: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1a3080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1a3084: 0x26a37040  addiu       $v1, $s5, 0x7040
    ctx->pc = 0x1a3084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 28736));
    // 0x1a3088: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x1a3088u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a308c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a308cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3090: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a3090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1a3094: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1a3094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1a3098: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1a3098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a309c: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1a309cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a30a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A30A0u;
    {
        const bool branch_taken_0x1a30a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30A0u;
        // 0x1a30a4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30a0) {
            ctx->pc = 0x1A30B0u;
            goto label_1a30b0;
        }
    }
    ctx->pc = 0x1A30A8u;
    // 0x1a30a8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a30a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a30ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a30acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a30b0:
    // 0x1a30b0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1a30b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1a30b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A30B4u;
    {
        const bool branch_taken_0x1a30b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30B4u;
        // 0x1a30b8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30b4) {
            ctx->pc = 0x1A30CCu;
            goto label_1a30cc;
        }
    }
    ctx->pc = 0x1A30BCu;
    // 0x1a30bc: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a30bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a30c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a30c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A30C4u;
    {
        const bool branch_taken_0x1a30c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30C4u;
        // 0x1a30c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30c4) {
            ctx->pc = 0x1A30D0u;
            goto label_1a30d0;
        }
    }
    ctx->pc = 0x1A30CCu;
label_1a30cc:
    // 0x1a30cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a30ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a30d0:
    // 0x1a30d0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1a30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1a30d4: 0x26a37040  addiu       $v1, $s5, 0x7040
    ctx->pc = 0x1a30d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 28736));
    // 0x1a30d8: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x1a30d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a30dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a30dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30e0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1a30e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1a30e4: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1a30e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1a30e8: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1a30e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a30ec: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1a30ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a30f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A30F0u;
    {
        const bool branch_taken_0x1a30f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30F0u;
        // 0x1a30f4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30f0) {
            ctx->pc = 0x1A3100u;
            goto label_1a3100;
        }
    }
    ctx->pc = 0x1A30F8u;
    // 0x1a30f8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a30f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a30fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a30fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3100:
    // 0x1a3100: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1a3100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1a3104: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3104u;
    {
        const bool branch_taken_0x1a3104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3104u;
        // 0x1a3108: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3104) {
            ctx->pc = 0x1A311Cu;
            goto label_1a311c;
        }
    }
    ctx->pc = 0x1A310Cu;
    // 0x1a310c: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a310cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a3110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a3114: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3114u;
    {
        const bool branch_taken_0x1a3114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3114u;
        // 0x1a3118: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3114) {
            ctx->pc = 0x1A3120u;
            goto label_1a3120;
        }
    }
    ctx->pc = 0x1A311Cu;
label_1a311c:
    // 0x1a311c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a311cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3120:
    // 0x1a3120: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1a3120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1a3124: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1a3124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a3128: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x1a3128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a312c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a312cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a3130: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a3130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a3134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3138: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1a3138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1a313c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a313cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a3140: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a3140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a3144: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x1a3144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a3148: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x1a3148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1a314c: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A314Cu;
    SET_GPR_U32(ctx, 31, 0x1A3154u);
    ctx->pc = 0x1A3150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A314Cu;
    // 0x1a3150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A314Cu, 0x1A3154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3154u;
label_1a3154:
    // 0x1a3154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3158: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1A3158u;
    SET_GPR_U32(ctx, 31, 0x1A3160u);
    ctx->pc = 0x1A315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3158u;
    // 0x1a315c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1A3158u, 0x1A3160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3160u;
label_1a3160:
    // 0x1a3160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3164: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1A3164u;
    SET_GPR_U32(ctx, 31, 0x1A316Cu);
    ctx->pc = 0x1A3168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3164u;
    // 0x1a3168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1A3164u, 0x1A316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A316Cu;
label_1a316c:
    // 0x1a316c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a316cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3170: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a3170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3174: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1A3174u;
    SET_GPR_U32(ctx, 31, 0x1A317Cu);
    ctx->pc = 0x1A3178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3174u;
    // 0x1a3178: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1A3174u, 0x1A317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A317Cu;
label_1a317c:
    // 0x1a317c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a317cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3180: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1A3180u;
    SET_GPR_U32(ctx, 31, 0x1A3188u);
    ctx->pc = 0x1A3184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3180u;
    // 0x1a3184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1A3180u, 0x1A3188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3188u;
label_1a3188:
    // 0x1a3188: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a3188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a318c: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1A318Cu;
    SET_GPR_U32(ctx, 31, 0x1A3194u);
    ctx->pc = 0x1A3190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A318Cu;
    // 0x1a3190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1A318Cu, 0x1A3194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3194u;
label_1a3194:
    // 0x1a3194: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a3194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a3198: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1a3198u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a319c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a319cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31a0: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x1a31a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a31a4: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x1a31a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a31a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a31a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31ac: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1A31ACu;
    SET_GPR_U32(ctx, 31, 0x1A31B4u);
    ctx->pc = 0x1A31B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31ACu;
    // 0x1a31b0: 0xe455000c  swc1        $f21, 0xC($v0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1A31ACu, 0x1A31B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31B4u;
label_1a31b4:
    // 0x1a31b4: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1a31b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1a31b8: 0x8e4505ec  lw          $a1, 0x5EC($s2)
    ctx->pc = 0x1a31b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1516)));
    // 0x1a31bc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A31BCu;
    {
        const bool branch_taken_0x1a31bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31BCu;
        // 0x1a31c0: 0x2664ee00  addiu       $a0, $s3, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31bc) {
            ctx->pc = 0x1A31E4u;
            goto label_1a31e4;
        }
    }
    ctx->pc = 0x1A31C4u;
    // 0x1a31c4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1a31c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a31c8: 0x8e4405f0  lw          $a0, 0x5F0($s2)
    ctx->pc = 0x1a31c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x1a31cc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1a31ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1a31d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a31d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1a31d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31d8: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1A31D8u;
    SET_GPR_U32(ctx, 31, 0x1A31E0u);
    ctx->pc = 0x1A31DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31D8u;
    // 0x1a31dc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1A31D8u, 0x1A31E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31E0u;
label_1a31e0:
    // 0x1a31e0: 0x2664ee00  addiu       $a0, $s3, -0x1200
    ctx->pc = 0x1a31e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962688));
label_1a31e4:
    // 0x1a31e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a31e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a31e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a31e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a31ec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1a31ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a31f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a31f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a31f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31fc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1A31FCu;
    SET_GPR_U32(ctx, 31, 0x1A3204u);
    ctx->pc = 0x1A3200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31FCu;
    // 0x1a3200: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1A31FCu, 0x1A3204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3204u;
label_1a3204:
    // 0x1a3204: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1a3204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1a3208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a320c: 0x264305c0  addiu       $v1, $s2, 0x5C0
    ctx->pc = 0x1a320cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x1a3210: 0xae4005c0  sw          $zero, 0x5C0($s2)
    ctx->pc = 0x1a3210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1472), GPR_U32(ctx, 0));
    // 0x1a3214: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1a3214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a3218: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1a3218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a321c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3220: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a3220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1a3224: 0xa6440d98  sh          $a0, 0xD98($s2)
    ctx->pc = 0x1a3224u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3480), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a3228: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x1a3228u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a322c: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1a322cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a3230: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1a3230u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_1a3234:
    // 0x1a3234: 0x96420d98  lhu         $v0, 0xD98($s2)
    ctx->pc = 0x1a3234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3480)));
    // 0x1a3238: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a3238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a323c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a323cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a3240: 0x1c60008b  bgtz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1A3240u;
    {
        const bool branch_taken_0x1a3240 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1A3244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3240u;
        // 0x1a3244: 0xa6420d98  sh          $v0, 0xD98($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3480), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3240) {
            ctx->pc = 0x1A3470u;
            goto label_1a3470;
        }
    }
    ctx->pc = 0x1A3248u;
    // 0x1a3248: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a3248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a324c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1a324cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a3250: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1A3250u;
    {
        const bool branch_taken_0x1a3250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3250u;
        // 0x1a3254: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3250) {
            ctx->pc = 0x1A346Cu;
            goto label_1a346c;
        }
    }
    ctx->pc = 0x1A3258u;
label_1a3258:
    // 0x1a3258: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a3258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a325c: 0x26510d90  addiu       $s1, $s2, 0xD90
    ctx->pc = 0x1a325cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 3472));
    // 0x1a3260: 0x3c150042  lui         $s5, 0x42
    ctx->pc = 0x1a3260u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)66 << 16));
    // 0x1a3264: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x1a3264u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3268: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a3268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a326c: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x1a326cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_1a3270:
    // 0x1a3270: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x1a3270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1a3274: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a3274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a3278: 0x942006  srlv        $a0, $s4, $a0
    ctx->pc = 0x1a3278u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a327c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a3280: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a3280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3284: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a3284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a3288: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1A3288u;
    {
        const bool branch_taken_0x1a3288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3288) {
            ctx->pc = 0x1A328Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3288u;
            // 0x1a328c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A32C8u;
            goto label_1a32c8;
        }
    }
    ctx->pc = 0x1A3290u;
    // 0x1a3290: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3290u;
    {
        const bool branch_taken_0x1a3290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3290u;
        // 0x1a3294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3290) {
            ctx->pc = 0x1A32A8u;
            goto label_1a32a8;
        }
    }
    ctx->pc = 0x1A3298u;
    // 0x1a3298: 0x12130008  beq         $s0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3298u;
    {
        const bool branch_taken_0x1a3298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3298u;
        // 0x1a329c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3298) {
            ctx->pc = 0x1A32BCu;
            goto label_1a32bc;
        }
    }
    ctx->pc = 0x1A32A0u;
    // 0x1a32a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A32A0u;
    {
        const bool branch_taken_0x1a32a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32A0u;
        // 0x1a32a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32a0) {
            ctx->pc = 0x1A32C8u;
            goto label_1a32c8;
        }
    }
    ctx->pc = 0x1A32A8u;
label_1a32a8:
    // 0x1a32a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a32a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a32ac: 0xc068e18  jal         func_1A3860
    ctx->pc = 0x1A32ACu;
    SET_GPR_U32(ctx, 31, 0x1A32B4u);
    ctx->pc = 0x1A32B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32ACu;
    // 0x1a32b0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3860u, 0x1A32ACu, 0x1A32B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A32B4u;
label_1a32b4:
    // 0x1a32b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A32B4u;
    {
        const bool branch_taken_0x1a32b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32B4u;
        // 0x1a32b8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32b4) {
            ctx->pc = 0x1A32C8u;
            goto label_1a32c8;
        }
    }
    ctx->pc = 0x1A32BCu;
label_1a32bc:
    // 0x1a32bc: 0xc068e18  jal         func_1A3860
    ctx->pc = 0x1A32BCu;
    SET_GPR_U32(ctx, 31, 0x1A32C4u);
    ctx->pc = 0x1A32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32BCu;
    // 0x1a32c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3860u, 0x1A32BCu, 0x1A32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A32C4u;
label_1a32c4:
    // 0x1a32c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a32c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a32c8:
    // 0x1a32c8: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x1a32c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a32cc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1A32CCu;
    {
        const bool branch_taken_0x1a32cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32CCu;
        // 0x1a32d0: 0x101142  srl         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32cc) {
            ctx->pc = 0x1A3270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3270;
        }
    }
    ctx->pc = 0x1A32D4u;
    // 0x1a32d4: 0x26a27040  addiu       $v0, $s5, 0x7040
    ctx->pc = 0x1a32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 28736));
    // 0x1a32d8: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1a32d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a32dc: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x1a32dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a32e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a32e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a32e4: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1a32e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a32e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A32E8u;
    {
        const bool branch_taken_0x1a32e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32E8u;
        // 0x1a32ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32e8) {
            ctx->pc = 0x1A32F8u;
            goto label_1a32f8;
        }
    }
    ctx->pc = 0x1A32F0u;
    // 0x1a32f0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a32f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a32f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a32f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a32f8:
    // 0x1a32f8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a32f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a32fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A32FCu;
    {
        const bool branch_taken_0x1a32fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32FCu;
        // 0x1a3300: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32fc) {
            ctx->pc = 0x1A3314u;
            goto label_1a3314;
        }
    }
    ctx->pc = 0x1A3304u;
    // 0x1a3304: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a3304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a3308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a330c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A330Cu;
    {
        const bool branch_taken_0x1a330c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A330Cu;
        // 0x1a3310: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a330c) {
            ctx->pc = 0x1A3318u;
            goto label_1a3318;
        }
    }
    ctx->pc = 0x1A3314u;
label_1a3314:
    // 0x1a3314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3318:
    // 0x1a3318: 0x26a27040  addiu       $v0, $s5, 0x7040
    ctx->pc = 0x1a3318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 28736));
    // 0x1a331c: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x1a331cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x1a3320: 0x9050000a  lbu         $s0, 0xA($v0)
    ctx->pc = 0x1a3320u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1a3324: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1a3324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a3328: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1a3328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a332c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A332Cu;
    {
        const bool branch_taken_0x1a332c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A332Cu;
        // 0x1a3330: 0x24b40080  addiu       $s4, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a332c) {
            ctx->pc = 0x1A33C4u;
            goto label_1a33c4;
        }
    }
    ctx->pc = 0x1A3334u;
    // 0x1a3334: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1a3334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3338: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1a3338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a333c: 0x0  nop
    ctx->pc = 0x1a333cu;
    // NOP
label_1a3340:
    // 0x1a3340: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1a3340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a3344: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a3344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3348: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3348u;
    {
        const bool branch_taken_0x1a3348 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x1A334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3348u;
        // 0x1a334c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3348) {
            ctx->pc = 0x1A3354u;
            goto label_1a3354;
        }
    }
    ctx->pc = 0x1A3350u;
    // 0x1a3350: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1a3350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a3354:
    // 0x1a3354: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a3354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a3358: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3358u;
    {
        const bool branch_taken_0x1a3358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3358u;
        // 0x1a335c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3358) {
            ctx->pc = 0x1A3370u;
            goto label_1a3370;
        }
    }
    ctx->pc = 0x1A3360u;
    // 0x1a3360: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a3360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a3364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a3368: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3368u;
    {
        const bool branch_taken_0x1a3368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3368u;
        // 0x1a336c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3368) {
            ctx->pc = 0x1A3374u;
            goto label_1a3374;
        }
    }
    ctx->pc = 0x1A3370u;
label_1a3370:
    // 0x1a3370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a3370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3374:
    // 0x1a3374: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1a3374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a3378: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1a3378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1a337c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a337cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3380: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3380u;
    {
        const bool branch_taken_0x1a3380 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x1A3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3380u;
        // 0x1a3384: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3380) {
            ctx->pc = 0x1A338Cu;
            goto label_1a338c;
        }
    }
    ctx->pc = 0x1A3388u;
    // 0x1a3388: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1a3388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a338c:
    // 0x1a338c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a338cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a3390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3390u;
    {
        const bool branch_taken_0x1a3390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3390u;
        // 0x1a3394: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3390) {
            ctx->pc = 0x1A33A8u;
            goto label_1a33a8;
        }
    }
    ctx->pc = 0x1A3398u;
    // 0x1a3398: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a3398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a339c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a33a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A33A0u;
    {
        const bool branch_taken_0x1a33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33A0u;
        // 0x1a33a4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a33a0) {
            ctx->pc = 0x1A33ACu;
            goto label_1a33ac;
        }
    }
    ctx->pc = 0x1A33A8u;
label_1a33a8:
    // 0x1a33a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a33a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a33ac:
    // 0x1a33ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a33acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33b0: 0xc051d52  jal         func_147548
    ctx->pc = 0x1A33B0u;
    SET_GPR_U32(ctx, 31, 0x1A33B8u);
    ctx->pc = 0x1A33B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33B0u;
    // 0x1a33b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x1A33B0u, 0x1A33B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33B8u;
label_1a33b8:
    // 0x1a33b8: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1a33b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1a33bc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1A33BCu;
    {
        const bool branch_taken_0x1a33bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33BCu;
        // 0x1a33c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a33bc) {
            ctx->pc = 0x1A3340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3340;
        }
    }
    ctx->pc = 0x1A33C4u;
label_1a33c4:
    // 0x1a33c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a33c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a33c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a33cc: 0xc068e18  jal         func_1A3860
    ctx->pc = 0x1A33CCu;
    SET_GPR_U32(ctx, 31, 0x1A33D4u);
    ctx->pc = 0x1A33D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33CCu;
    // 0x1a33d0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3860u, 0x1A33CCu, 0x1A33D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33D4u;
label_1a33d4:
    // 0x1a33d4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1a33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1a33d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a33d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a33dc: 0xa6420d98  sh          $v0, 0xD98($s2)
    ctx->pc = 0x1a33dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3480), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a33e0: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x1a33e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a33e4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1A33E4u;
    {
        const bool branch_taken_0x1a33e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33E4u;
        // 0x1a33e8: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a33e4) {
            ctx->pc = 0x1A346Cu;
            goto label_1a346c;
        }
    }
    ctx->pc = 0x1A33ECu;
label_1a33ec:
    // 0x1a33ec: 0x96420d98  lhu         $v0, 0xD98($s2)
    ctx->pc = 0x1a33ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3480)));
    // 0x1a33f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a33f4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a33f8: 0x1c60001d  bgtz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A33F8u;
    {
        const bool branch_taken_0x1a33f8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1A33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33F8u;
        // 0x1a33fc: 0xa6420d98  sh          $v0, 0xD98($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3480), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a33f8) {
            ctx->pc = 0x1A3470u;
            goto label_1a3470;
        }
    }
    ctx->pc = 0x1A3400u;
    // 0x1a3400: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1a3400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a3404: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a3404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a3408: 0xa6420d98  sh          $v0, 0xD98($s2)
    ctx->pc = 0x1a3408u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3480), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a340c: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x1a340cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a3410: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A3410u;
    {
        const bool branch_taken_0x1a3410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3410u;
        // 0x1a3414: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3410) {
            ctx->pc = 0x1A346Cu;
            goto label_1a346c;
        }
    }
    ctx->pc = 0x1A3418u;
label_1a3418:
    // 0x1a3418: 0x96420d98  lhu         $v0, 0xD98($s2)
    ctx->pc = 0x1a3418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3480)));
    // 0x1a341c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1a341cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1a3420: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a3420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3424: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a3424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a3428: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a3428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a342c: 0xa6420d98  sh          $v0, 0xD98($s2)
    ctx->pc = 0x1a342cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3480), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3430: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1a3430u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1a3434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a3434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3438: 0x0  nop
    ctx->pc = 0x1a3438u;
    // NOP
    // 0x1a343c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a343cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3440: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a3440u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1a3444: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A3444u;
    {
        const bool branch_taken_0x1a3444 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1A3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3444u;
        // 0x1a3448: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3444) {
            ctx->pc = 0x1A3470u;
            goto label_1a3470;
        }
    }
    ctx->pc = 0x1A344Cu;
    // 0x1a344c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a344cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a3450: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1a3450u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a3454: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3454u;
    {
        const bool branch_taken_0x1a3454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3454u;
        // 0x1a3458: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3454) {
            ctx->pc = 0x1A346Cu;
            goto label_1a346c;
        }
    }
    ctx->pc = 0x1A345Cu;
label_1a345c:
    // 0x1a345c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a345cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3460: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1a3460u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a3464: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x1a3464u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
label_1a3468:
    // 0x1a3468: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x1a3468u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_1a346c:
    // 0x1a346c: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1a346cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a3470:
    // 0x1a3470: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1a3470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a3474: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1a3474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a3478: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1a3478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a347c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1a347cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a3480: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1a3480u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3484: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a3484u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3488: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a3488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a348c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1a348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a3490: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1a3490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a3494: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3494u;
        // 0x1a3498: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A349Cu;
    // 0x1a349c: 0x0  nop
    ctx->pc = 0x1a349cu;
    // NOP
    ctx->pc = 0x1a34a0u;
}
