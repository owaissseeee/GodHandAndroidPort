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

// Function: func_0016FA80
// Address: 0x16fa80 - 0x16fbd8
void func_0016FA80_0x16fa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016FA80_0x16fa80");
#endif

    switch (ctx->pc) {
        case 0x16faa0u: goto label_16faa0;
        case 0x16fb18u: goto label_16fb18;
        case 0x16fb48u: goto label_16fb48;
        case 0x16fb8cu: goto label_16fb8c;
        case 0x16fba8u: goto label_16fba8;
        default: break;
    }

    ctx->pc = 0x16fa80u;

    // 0x16fa80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16fa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16fa84: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x16fa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x16fa88: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x16fa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x16fa8c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x16fa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x16fa90: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x16fa90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x16fa94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16fa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16fa98: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x16FA98u;
    SET_GPR_U32(ctx, 31, 0x16FAA0u);
    ctx->pc = 0x16FA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA98u;
    // 0x16fa9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x16FA98u, 0x16FAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FAA0u;
label_16faa0:
    // 0x16faa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16faa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16faa4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16faa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16faa8: 0x3c014026  lui         $at, 0x4026
    ctx->pc = 0x16faa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16422 << 16));
    // 0x16faac: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x16faacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x16fab0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16fab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16fab4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x16fab4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16fab8: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x16fab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x16fabc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x16fabcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x16fac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16fac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16fac4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x16fac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16fac8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x16fac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x16facc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x16faccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x16fad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16fad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16fad4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16fad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16fad8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x16fad8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x16fadc: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x16fadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x16fae0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x16fae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x16fae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16fae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fae8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x16fae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x16faec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16faecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16faf0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x16faf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16faf4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x16faf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16faf8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x16faf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16fafc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x16fafcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x16fb00: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x16fb00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x16fb04: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x16fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x16fb08: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x16fb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x16fb0c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x16fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x16fb10: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x16FB10u;
    SET_GPR_U32(ctx, 31, 0x16FB18u);
    ctx->pc = 0x16FB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB10u;
    // 0x16fb14: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x16FB10u, 0x16FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB18u;
label_16fb18:
    // 0x16fb18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16FB18u;
    {
        const bool branch_taken_0x16fb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB18u;
        // 0x16fb1c: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb18) {
            ctx->pc = 0x16FB48u;
            goto label_16fb48;
        }
    }
    ctx->pc = 0x16FB20u;
    // 0x16fb20: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x16fb20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16fb24: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x16fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x16fb28: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x16fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x16fb2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16fb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb30: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x16fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x16fb34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16fb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb38: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x16fb38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x16fb3c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x16fb3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb40: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x16FB40u;
    SET_GPR_U32(ctx, 31, 0x16FB48u);
    ctx->pc = 0x16FB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB40u;
    // 0x16fb44: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x16FB40u, 0x16FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB48u;
label_16fb48:
    // 0x16fb48: 0x2407025a  addiu       $a3, $zero, 0x25A
    ctx->pc = 0x16fb48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 602));
    // 0x16fb4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fb50: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x16fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x16fb54: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x16fb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16fb58: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16fb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16fb5c: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x16fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x16fb60: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x16fb60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x16fb64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb68: 0xae0705f0  sw          $a3, 0x5F0($s0)
    ctx->pc = 0x16fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 7));
    // 0x16fb6c: 0xae0705e8  sw          $a3, 0x5E8($s0)
    ctx->pc = 0x16fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 7));
    // 0x16fb70: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x16fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x16fb74: 0xa205060c  sb          $a1, 0x60C($s0)
    ctx->pc = 0x16fb74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 5));
    // 0x16fb78: 0xa60605f4  sh          $a2, 0x5F4($s0)
    ctx->pc = 0x16fb78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 6));
    // 0x16fb7c: 0xae0205ec  sw          $v0, 0x5EC($s0)
    ctx->pc = 0x16fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 2));
    // 0x16fb80: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x16fb80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x16fb84: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x16FB84u;
    SET_GPR_U32(ctx, 31, 0x16FB8Cu);
    ctx->pc = 0x16FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB84u;
    // 0x16fb88: 0xa602054a  sh          $v0, 0x54A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x16FB84u, 0x16FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB8Cu;
label_16fb8c:
    // 0x16fb8c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x16fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x16fb90: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x16fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x16fb94: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x16fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x16fb98: 0x2405025a  addiu       $a1, $zero, 0x25A
    ctx->pc = 0x16fb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 602));
    // 0x16fb9c: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x16fb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16fba0: 0xc0c15d6  jal         func_305758
    ctx->pc = 0x16FBA0u;
    SET_GPR_U32(ctx, 31, 0x16FBA8u);
    ctx->pc = 0x16FBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FBA0u;
    // 0x16fba4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x16FBA0u, 0x16FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FBA8u;
label_16fba8:
    // 0x16fba8: 0x8e0305a0  lw          $v1, 0x5A0($s0)
    ctx->pc = 0x16fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x16fbac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fbb0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x16fbb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16fbb4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x16fbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x16fbb8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x16fbb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16fbbc: 0xae0305a0  sw          $v1, 0x5A0($s0)
    ctx->pc = 0x16fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 3));
    // 0x16fbc0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x16fbc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16fbc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16fbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16fbc8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x16fbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16fbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x16FBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBCCu;
        // 0x16fbd0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FBD4u;
    // 0x16fbd4: 0x0  nop
    ctx->pc = 0x16fbd4u;
    // NOP
    ctx->pc = 0x16fbd8u;
}
