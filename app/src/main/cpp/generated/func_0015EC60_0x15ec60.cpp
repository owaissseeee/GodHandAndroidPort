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

// Function: func_0015EC60
// Address: 0x15ec60 - 0x15eee0
void func_0015EC60_0x15ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015EC60_0x15ec60");
#endif

    switch (ctx->pc) {
        case 0x15ecbcu: goto label_15ecbc;
        case 0x15ed48u: goto label_15ed48;
        case 0x15ed5cu: goto label_15ed5c;
        case 0x15ed70u: goto label_15ed70;
        case 0x15ed84u: goto label_15ed84;
        case 0x15ed9cu: goto label_15ed9c;
        case 0x15edc8u: goto label_15edc8;
        case 0x15edd0u: goto label_15edd0;
        case 0x15edecu: goto label_15edec;
        case 0x15eeb0u: goto label_15eeb0;
        default: break;
    }

    ctx->pc = 0x15ec60u;

    // 0x15ec60: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x15ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x15ec64: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x15ec64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x15ec68: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x15ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15ec6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15ec6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15ec70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15ec70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15ec74: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x15ec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x15ec78: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x15ec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x15ec7c: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x15ec7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x15ec80: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x15ec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x15ec84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15ec84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec88: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x15ec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x15ec8c: 0x30f600ff  andi        $s6, $a3, 0xFF
    ctx->pc = 0x15ec8cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x15ec90: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x15ec90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x15ec94: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15ec94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec98: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x15ec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x15ec9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15ec9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eca0: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x15eca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x15eca4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x15eca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x15eca8: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x15eca8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15ecac: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x15ecacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15ecb0: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x15ecb0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15ecb4: 0xc051eae  jal         func_147AB8
    ctx->pc = 0x15ECB4u;
    SET_GPR_U32(ctx, 31, 0x15ECBCu);
    ctx->pc = 0x15ECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ECB4u;
    // 0x15ecb8: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147AB8u, 0x15ECB4u, 0x15ECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ECBCu;
label_15ecbc:
    // 0x15ecbc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x15ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x15ecc0: 0x8c826e00  lw          $v0, 0x6E00($a0)
    ctx->pc = 0x15ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A6E00u));
    // 0x15ecc4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15ECC4u;
    {
        const bool branch_taken_0x15ecc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECC4u;
        // 0x15ecc8: 0x3c15005d  lui         $s5, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ecc4) {
            ctx->pc = 0x15ED2Cu;
            goto label_15ed2c;
        }
    }
    ctx->pc = 0x15ECCCu;
    // 0x15eccc: 0xe6146dc0  swc1        $f20, 0x6DC0($s0)
    ctx->pc = 0x15ecccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28096), bits); }
    // 0x15ecd0: 0x26026dc0  addiu       $v0, $s0, 0x6DC0
    ctx->pc = 0x15ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28096));
    // 0x15ecd4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x15ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x15ecd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ecdc: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x15ecdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15ece0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x15ece0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x15ece4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x15ece4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x15ece8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ece8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ecec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15ececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15ecf0: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x15ecf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15ecf4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x15ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x15ecf8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x15ecf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15ecfc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x15ecfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x15ed00: 0xac836e00  sw          $v1, 0x6E00($a0)
    ctx->pc = 0x15ed00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28160), GPR_U32(ctx, 3));
    // 0x15ed04: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15ed08: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x15ed08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15ed0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x15ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x15ed10: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x15ed10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15ed14: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x15ed14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x15ed18: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15ed1c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x15ed1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15ed20: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x15ed20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x15ed24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x15ed24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15ed28: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x15ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_15ed2c:
    // 0x15ed2c: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x15ed2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ed30: 0x8ea5aff0  lw          $a1, -0x5010($s5)
    ctx->pc = 0x15ed30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946800)));
    // 0x15ed34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15ed34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15ed38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed3c: 0x26136dc0  addiu       $s3, $s0, 0x6DC0
    ctx->pc = 0x15ed3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28096));
    // 0x15ed40: 0xc051d52  jal         func_147548
    ctx->pc = 0x15ED40u;
    SET_GPR_U32(ctx, 31, 0x15ED48u);
    ctx->pc = 0x15ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED40u;
    // 0x15ed44: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x15ED40u, 0x15ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED48u;
label_15ed48:
    // 0x15ed48: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x15ed48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15ed4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15ed4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ed50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed54: 0xc0a8e3a  jal         func_2A38E8
    ctx->pc = 0x15ED54u;
    SET_GPR_U32(ctx, 31, 0x15ED5Cu);
    ctx->pc = 0x15ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED54u;
    // 0x15ed58: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A38E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A38E8u, 0x15ED54u, 0x15ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED5Cu;
label_15ed5c:
    // 0x15ed5c: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x15ed5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15ed60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ed60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15ed64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed68: 0xc0a8e3a  jal         func_2A38E8
    ctx->pc = 0x15ED68u;
    SET_GPR_U32(ctx, 31, 0x15ED70u);
    ctx->pc = 0x15ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED68u;
    // 0x15ed6c: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A38E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A38E8u, 0x15ED68u, 0x15ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED70u;
label_15ed70:
    // 0x15ed70: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x15ed70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15ed74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ed74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15ed78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed7c: 0xc0a8e3a  jal         func_2A38E8
    ctx->pc = 0x15ED7Cu;
    SET_GPR_U32(ctx, 31, 0x15ED84u);
    ctx->pc = 0x15ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED7Cu;
    // 0x15ed80: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A38E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A38E8u, 0x15ED7Cu, 0x15ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED84u;
label_15ed84:
    // 0x15ed84: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x15ed84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x15ed88: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x15ed88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15ed8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ed8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15ed90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed94: 0xc0a8e3a  jal         func_2A38E8
    ctx->pc = 0x15ED94u;
    SET_GPR_U32(ctx, 31, 0x15ED9Cu);
    ctx->pc = 0x15ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED94u;
    // 0x15ed98: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A38E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A38E8u, 0x15ED94u, 0x15ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED9Cu;
label_15ed9c:
    // 0x15ed9c: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x15ed9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x15eda0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x15eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x15eda4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x15eda4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15eda8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x15eda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15edac: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x15edacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x15edb0: 0x1600003d  bnez        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x15EDB0u;
    {
        const bool branch_taken_0x15edb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDB0u;
        // 0x15edb4: 0x8ea5aff0  lw          $a1, -0x5010($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15edb0) {
            ctx->pc = 0x15EEA8u;
            goto label_15eea8;
        }
    }
    ctx->pc = 0x15EDB8u;
    // 0x15edb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15edb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15edbc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15edbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15edc0: 0xc051d52  jal         func_147548
    ctx->pc = 0x15EDC0u;
    SET_GPR_U32(ctx, 31, 0x15EDC8u);
    ctx->pc = 0x15EDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDC0u;
    // 0x15edc4: 0x32d500ff  andi        $s5, $s6, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x15EDC0u, 0x15EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDC8u;
label_15edc8:
    // 0x15edc8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x15edc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15edcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15edccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15edd0:
    // 0x15edd0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15edd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15edd4: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x15edd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15edd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15edd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eddc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15eddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ede0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x15ede0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15ede4: 0xc0c2ad2  jal         func_30AB48
    ctx->pc = 0x15EDE4u;
    SET_GPR_U32(ctx, 31, 0x15EDECu);
    ctx->pc = 0x15EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDE4u;
    // 0x15ede8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AB48u, 0x15EDE4u, 0x15EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDECu;
label_15edec:
    // 0x15edec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15edecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15edf0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x15edf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x15edf4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x15edf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15edf8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x15EDF8u;
    {
        const bool branch_taken_0x15edf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDF8u;
        // 0x15edfc: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15edf8) {
            ctx->pc = 0x15EDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15edd0;
        }
    }
    ctx->pc = 0x15EE00u;
    // 0x15ee00: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x15ee00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15ee04: 0x3c0e00ff  lui         $t6, 0xFF
    ctx->pc = 0x15ee04u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)255 << 16));
    // 0x15ee08: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x15ee08u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x15ee0c: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x15ee0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15ee10: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x15ee10u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee14: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x15ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x15ee18: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x15ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15ee1c: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x15ee1cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x15ee20: 0x8fa90074  lw          $t1, 0x74($sp)
    ctx->pc = 0x15ee20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x15ee24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15ee24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15ee28: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x15ee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x15ee2c: 0x8faa0084  lw          $t2, 0x84($sp)
    ctx->pc = 0x15ee2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x15ee30: 0x8fab0050  lw          $t3, 0x50($sp)
    ctx->pc = 0x15ee30u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15ee34: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x15ee34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x15ee38: 0x8fac0058  lw          $t4, 0x58($sp)
    ctx->pc = 0x15ee38u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15ee3c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x15ee3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x15ee40: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x15ee40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15ee44: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x15ee44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x15ee48: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x15ee48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15ee4c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x15ee4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x15ee50: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x15ee50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x15ee54: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x15ee54u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x15ee58: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ee5c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x15ee5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x15ee60: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x15ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x15ee64: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x15ee64u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x15ee68: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x15ee68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x15ee6c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x15ee6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x15ee70: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x15ee70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x15ee74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15ee74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15ee78: 0x151638  dsll        $v0, $s5, 24
    ctx->pc = 0x15ee78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << 24);
    // 0x15ee7c: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x15ee7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x15ee80: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x15ee80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x15ee84: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x15ee84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15ee88: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x15ee88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15ee8c: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x15ee8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x15ee90: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x15ee90u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x15ee94: 0xfe8b0020  sd          $t3, 0x20($s4)
    ctx->pc = 0x15ee94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 11));
    // 0x15ee98: 0xfe870040  sd          $a3, 0x40($s4)
    ctx->pc = 0x15ee98u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 7));
    // 0x15ee9c: 0xfe860060  sd          $a2, 0x60($s4)
    ctx->pc = 0x15ee9cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 6));
    // 0x15eea0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15EEA0u;
    {
        const bool branch_taken_0x15eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EEA0u;
        // 0x15eea4: 0xfe840080  sd          $a0, 0x80($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 128), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eea0) {
            ctx->pc = 0x15EEB0u;
            goto label_15eeb0;
        }
    }
    ctx->pc = 0x15EEA8u;
label_15eea8:
    // 0x15eea8: 0xc057bb8  jal         func_15EEE0
    ctx->pc = 0x15EEA8u;
    SET_GPR_U32(ctx, 31, 0x15EEB0u);
    ctx->pc = 0x15EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EEA8u;
    // 0x15eeac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EEE0u, 0x15EEA8u, 0x15EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EEB0u;
label_15eeb0:
    // 0x15eeb0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x15eeb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15eeb4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x15eeb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15eeb8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x15eeb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15eebc: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x15eebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15eec0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x15eec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15eec4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x15eec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15eec8: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x15eec8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15eecc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x15eeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15eed0: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x15eed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15eed4: 0x3e00008  jr          $ra
    ctx->pc = 0x15EED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EED4u;
        // 0x15eed8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EEDCu;
    // 0x15eedc: 0x0  nop
    ctx->pc = 0x15eedcu;
    // NOP
    ctx->pc = 0x15eee0u;
}
