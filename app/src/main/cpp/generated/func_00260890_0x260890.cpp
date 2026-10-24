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

// Function: func_00260890
// Address: 0x260890 - 0x2609a8
void func_00260890_0x260890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00260890_0x260890");
#endif

    switch (ctx->pc) {
        case 0x260990u: goto label_260990;
        default: break;
    }

    ctx->pc = 0x260890u;

    // 0x260890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x260890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x260894: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x260894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260898: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x260898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x26089c: 0x8ce20564  lw          $v0, 0x564($a3)
    ctx->pc = 0x26089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1380)));
    // 0x2608a0: 0x3842021f  xori        $v0, $v0, 0x21F
    ctx->pc = 0x2608a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)543);
    // 0x2608a4: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2608A4u;
    {
        const bool branch_taken_0x2608a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2608A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608A4u;
        // 0x2608a8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608a4) {
            ctx->pc = 0x260994u;
            goto label_260994;
        }
    }
    ctx->pc = 0x2608ACu;
    // 0x2608ac: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2608acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2608b0: 0x8ce200f0  lw          $v0, 0xF0($a3)
    ctx->pc = 0x2608b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
    // 0x2608b4: 0x53a20008  beql        $sp, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2608B4u;
    {
        const bool branch_taken_0x2608b4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x2608b4) {
            ctx->pc = 0x2608B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2608B4u;
            // 0x2608b8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2608D8u;
            goto label_2608d8;
        }
    }
    ctx->pc = 0x2608BCu;
    // 0x2608bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2608bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2608c0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2608c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2608c4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2608c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2608c8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2608c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2608cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2608ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2608d0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2608d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2608d4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2608d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2608d8:
    // 0x2608d8: 0xc4e30104  lwc1        $f3, 0x104($a3)
    ctx->pc = 0x2608d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2608dc: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2608dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2608e0: 0x94e302fe  lhu         $v1, 0x2FE($a3)
    ctx->pc = 0x2608e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 766)));
    // 0x2608e4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2608e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2608e8: 0xa0460031  sb          $a2, 0x31($v0)
    ctx->pc = 0x2608e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 49), (uint8_t)GPR_U32(ctx, 6));
    // 0x2608ec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2608ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2608f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2608f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2608f4: 0x109d0007  beq         $a0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2608F4u;
    {
        const bool branch_taken_0x2608f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 29));
        ctx->pc = 0x2608F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608F4u;
        // 0x2608f8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608f4) {
            ctx->pc = 0x260914u;
            goto label_260914;
        }
    }
    ctx->pc = 0x2608FCu;
    // 0x2608fc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2608fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260900: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x260900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260904: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x260904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x260908: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x260908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26090c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x26090cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x260910: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x260910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_260914:
    // 0x260914: 0x8ce20564  lw          $v0, 0x564($a3)
    ctx->pc = 0x260914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1380)));
    // 0x260918: 0x3c03040c  lui         $v1, 0x40C
    ctx->pc = 0x260918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1036 << 16));
    // 0x26091c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x26091cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x260920: 0x2ca40005  sltiu       $a0, $a1, 0x5
    ctx->pc = 0x260920u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x260924: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x260924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x260928: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x260928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x26092c: 0xa3a60041  sb          $a2, 0x41($sp)
    ctx->pc = 0x26092cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 6));
    // 0x260930: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x260930u;
    {
        const bool branch_taken_0x260930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x260934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260930u;
        // 0x260934: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260930) {
            ctx->pc = 0x260954u;
            goto label_260954;
        }
    }
    ctx->pc = 0x260938u;
    // 0x260938: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x260938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x26093c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x26093cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x260940: 0x24423fb0  addiu       $v0, $v0, 0x3FB0
    ctx->pc = 0x260940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16304));
    // 0x260944: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x260944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x260948: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x260948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26094c: 0x800008  jr          $a0
    ctx->pc = 0x26094Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x260954u: goto label_260954;
            case 0x26095Cu: goto label_26095c;
            case 0x260964u: goto label_260964;
            case 0x26096Cu: goto label_26096c;
            case 0x260974u: goto label_260974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26094Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x260954u;
label_260954:
    // 0x260954: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x260954u;
    {
        const bool branch_taken_0x260954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260954u;
        // 0x260958: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260954) {
            ctx->pc = 0x260978u;
            goto label_260978;
        }
    }
    ctx->pc = 0x26095Cu;
label_26095c:
    // 0x26095c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26095Cu;
    {
        const bool branch_taken_0x26095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26095Cu;
        // 0x260960: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26095c) {
            ctx->pc = 0x260978u;
            goto label_260978;
        }
    }
    ctx->pc = 0x260964u;
label_260964:
    // 0x260964: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x260964u;
    {
        const bool branch_taken_0x260964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260964u;
        // 0x260968: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260964) {
            ctx->pc = 0x260978u;
            goto label_260978;
        }
    }
    ctx->pc = 0x26096Cu;
label_26096c:
    // 0x26096c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26096Cu;
    {
        const bool branch_taken_0x26096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26096Cu;
        // 0x260970: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26096c) {
            ctx->pc = 0x260978u;
            goto label_260978;
        }
    }
    ctx->pc = 0x260974u;
label_260974:
    // 0x260974: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x260974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_260978:
    // 0x260978: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x260978u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x26097c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x26097cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x260980: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x260980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260984: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x260984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x260988: 0xc0a4174  jal         func_2905D0
    ctx->pc = 0x260988u;
    SET_GPR_U32(ctx, 31, 0x260990u);
    ctx->pc = 0x26098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260988u;
    // 0x26098c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2905D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2905D0u, 0x260988u, 0x260990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260990u;
label_260990:
    // 0x260990: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x260990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_260994:
    // 0x260994: 0x3e00008  jr          $ra
    ctx->pc = 0x260994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260994u;
        // 0x260998: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26099Cu;
    // 0x26099c: 0x0  nop
    ctx->pc = 0x26099cu;
    // NOP
    // 0x2609a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2609a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2609a4: 0x0  nop
    ctx->pc = 0x2609a4u;
    // NOP
    ctx->pc = 0x2609a8u;
}
