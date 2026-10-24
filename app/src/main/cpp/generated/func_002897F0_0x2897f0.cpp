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

// Function: func_002897F0
// Address: 0x2897f0 - 0x289e10
void func_002897F0_0x2897f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002897F0_0x2897f0");
#endif

    switch (ctx->pc) {
        case 0x289884u: goto label_289884;
        case 0x2898a0u: goto label_2898a0;
        case 0x289920u: goto label_289920;
        case 0x289954u: goto label_289954;
        case 0x289960u: goto label_289960;
        case 0x28996cu: goto label_28996c;
        case 0x289978u: goto label_289978;
        case 0x289980u: goto label_289980;
        case 0x289990u: goto label_289990;
        case 0x2899c0u: goto label_2899c0;
        case 0x2899d4u: goto label_2899d4;
        case 0x2899e8u: goto label_2899e8;
        case 0x289a44u: goto label_289a44;
        case 0x289a9cu: goto label_289a9c;
        case 0x289af4u: goto label_289af4;
        case 0x289b50u: goto label_289b50;
        case 0x289b70u: goto label_289b70;
        case 0x289ba0u: goto label_289ba0;
        case 0x289bb8u: goto label_289bb8;
        case 0x289bdcu: goto label_289bdc;
        case 0x289bf0u: goto label_289bf0;
        case 0x289c04u: goto label_289c04;
        case 0x289c18u: goto label_289c18;
        case 0x289c2cu: goto label_289c2c;
        case 0x289c40u: goto label_289c40;
        case 0x289c54u: goto label_289c54;
        case 0x289c68u: goto label_289c68;
        case 0x289d74u: goto label_289d74;
        case 0x289dbcu: goto label_289dbc;
        default: break;
    }

    ctx->pc = 0x2897f0u;

    // 0x2897f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2897f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2897f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2897f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2897f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2897f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2897fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2897fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289800: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x289800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x289804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x289804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289808: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x289808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28980c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x28980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289810: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x289810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x289814: 0x26251530  addiu       $a1, $s1, 0x1530
    ctx->pc = 0x289814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5424));
    // 0x289818: 0x26231540  addiu       $v1, $s1, 0x1540
    ctx->pc = 0x289818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5440));
    // 0x28981c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28981cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289820: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x289820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289824: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x289824u;
    {
        const bool branch_taken_0x289824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x289828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289824u;
        // 0x289828: 0xae221530  sw          $v0, 0x1530($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289824) {
            ctx->pc = 0x289844u;
            goto label_289844;
        }
    }
    ctx->pc = 0x28982Cu;
    // 0x28982c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x28982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289830: 0xe6201540  swc1        $f0, 0x1540($s1)
    ctx->pc = 0x289830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5440), bits); }
    // 0x289834: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x289834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289838: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x289838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28983c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x28983cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289840: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x289840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_289844:
    // 0x289844: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x289844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28984c: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x28984cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x289850: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x289850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x289854: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x289854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x289858: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x289858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x28985c: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x28985cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    // 0x289860: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x289860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x289864: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x289864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x289868: 0x92030030  lbu         $v1, 0x30($s0)
    ctx->pc = 0x289868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x28986c: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x28986cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x289870: 0x92020031  lbu         $v0, 0x31($s0)
    ctx->pc = 0x289870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x289874: 0xa0a20031  sb          $v0, 0x31($a1)
    ctx->pc = 0x289874u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x289878: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x289878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x28987c: 0xc0a2b16  jal         func_28AC58
    ctx->pc = 0x28987Cu;
    SET_GPR_U32(ctx, 31, 0x289884u);
    ctx->pc = 0x289880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28987Cu;
    // 0x289880: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC58u, 0x28987Cu, 0x289884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289884u;
label_289884:
    // 0x289884: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x289884u;
    {
        const bool branch_taken_0x289884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289884u;
        // 0x289888: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289884) {
            ctx->pc = 0x289894u;
            goto label_289894;
        }
    }
    ctx->pc = 0x28988Cu;
    // 0x28988c: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x28988Cu;
    {
        const bool branch_taken_0x28988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28988Cu;
        // 0x289890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28988c) {
            ctx->pc = 0x289DF4u;
            goto label_289df4;
        }
    }
    ctx->pc = 0x289894u;
label_289894:
    // 0x289894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289898: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x289898u;
    SET_GPR_U32(ctx, 31, 0x2898A0u);
    ctx->pc = 0x28989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289898u;
    // 0x28989c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBF0u, 0x289898u, 0x2898A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2898A0u;
label_2898a0:
    // 0x2898a0: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2898a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2898a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2898a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2898a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2898a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2898ac: 0x240301f4  addiu       $v1, $zero, 0x1F4
    ctx->pc = 0x2898acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2898b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2898b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2898b4: 0x8e250564  lw          $a1, 0x564($s1)
    ctx->pc = 0x2898b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2898b8: 0xa2220616  sb          $v0, 0x616($s1)
    ctx->pc = 0x2898b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1558), (uint8_t)GPR_U32(ctx, 2));
    // 0x2898bc: 0x240402a7  addiu       $a0, $zero, 0x2A7
    ctx->pc = 0x2898bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
    // 0x2898c0: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x2898c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x2898c4: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x2898c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x2898c8: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x2898c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    // 0x2898cc: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x2898ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x2898d0: 0xa2200531  sb          $zero, 0x531($s1)
    ctx->pc = 0x2898d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 0));
    // 0x2898d4: 0xa6230548  sh          $v1, 0x548($s1)
    ctx->pc = 0x2898d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x2898d8: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x2898d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2898dc: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x2898dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x2898e0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x2898e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2898e4: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2898E4u;
    {
        const bool branch_taken_0x2898e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2898E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898E4u;
        // 0x2898e8: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898e4) {
            ctx->pc = 0x289928u;
            goto label_289928;
        }
    }
    ctx->pc = 0x2898ECu;
    // 0x2898ec: 0x240202ab  addiu       $v0, $zero, 0x2AB
    ctx->pc = 0x2898ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
    // 0x2898f0: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2898F0u;
    {
        const bool branch_taken_0x2898f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2898F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898F0u;
        // 0x2898f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898f0) {
            ctx->pc = 0x289928u;
            goto label_289928;
        }
    }
    ctx->pc = 0x2898F8u;
    // 0x2898f8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2898f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2898fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2898fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289900: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x289900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289904: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x289904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x289908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x289908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28990c: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x28990cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x289910: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x289910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289914: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x289914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x289918: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x289918u;
    SET_GPR_U32(ctx, 31, 0x289920u);
    ctx->pc = 0x28991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289918u;
    // 0x28991c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x289918u, 0x289920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289920u;
label_289920:
    // 0x289920: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x289920u;
    {
        const bool branch_taken_0x289920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289920u;
        // 0x289924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289920) {
            ctx->pc = 0x289958u;
            goto label_289958;
        }
    }
    ctx->pc = 0x289928u;
label_289928:
    // 0x289928: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x289928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28992c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289930: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x289930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x289934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289938: 0x8c450078  lw          $a1, 0x78($v0)
    ctx->pc = 0x289938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x28993c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28993cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289940: 0x8c46007c  lw          $a2, 0x7C($v0)
    ctx->pc = 0x289940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x289944: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x289944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289948: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x289948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28994c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28994Cu;
    SET_GPR_U32(ctx, 31, 0x289954u);
    ctx->pc = 0x289950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28994Cu;
    // 0x289950: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28994Cu, 0x289954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289954u;
label_289954:
    // 0x289954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289958:
    // 0x289958: 0xc055f06  jal         func_157C18
    ctx->pc = 0x289958u;
    SET_GPR_U32(ctx, 31, 0x289960u);
    ctx->pc = 0x28995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289958u;
    // 0x28995c: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x289958u, 0x289960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289960u;
label_289960:
    // 0x289960: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x289960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289964: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x289964u;
    SET_GPR_U32(ctx, 31, 0x28996Cu);
    ctx->pc = 0x289968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289964u;
    // 0x289968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x289964u, 0x28996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28996Cu;
label_28996c:
    // 0x28996c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28996cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289970: 0xc054a88  jal         func_152A20
    ctx->pc = 0x289970u;
    SET_GPR_U32(ctx, 31, 0x289978u);
    ctx->pc = 0x289974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289970u;
    // 0x289974: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x289970u, 0x289978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289978u;
label_289978:
    // 0x289978: 0xc05280e  jal         func_14A038
    ctx->pc = 0x289978u;
    SET_GPR_U32(ctx, 31, 0x289980u);
    ctx->pc = 0x28997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289978u;
    // 0x28997c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x289978u, 0x289980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289980u;
label_289980:
    // 0x289980: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x289980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x289984: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x289984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289988: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x289988u;
    SET_GPR_U32(ctx, 31, 0x289990u);
    ctx->pc = 0x28998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289988u;
    // 0x28998c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x289988u, 0x289990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289990u;
label_289990:
    // 0x289990: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x289990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x289994: 0x26231590  addiu       $v1, $s1, 0x1590
    ctx->pc = 0x289994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5520));
    // 0x289998: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x289998u;
    {
        const bool branch_taken_0x289998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289998u;
        // 0x28999c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289998) {
            ctx->pc = 0x2899B8u;
            goto label_2899b8;
        }
    }
    ctx->pc = 0x2899A0u;
    // 0x2899a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2899a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2899a4: 0xe6201590  swc1        $f0, 0x1590($s1)
    ctx->pc = 0x2899a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5520), bits); }
    // 0x2899a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2899a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2899ac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2899acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2899b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2899b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2899b4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2899b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2899b8:
    // 0x2899b8: 0xc05404a  jal         func_150128
    ctx->pc = 0x2899B8u;
    SET_GPR_U32(ctx, 31, 0x2899C0u);
    ctx->pc = 0x2899BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899B8u;
    // 0x2899bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x2899B8u, 0x2899C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899C0u;
label_2899c0:
    // 0x2899c0: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2899c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2899c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2899c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899c8: 0x24c63f68  addiu       $a2, $a2, 0x3F68
    ctx->pc = 0x2899c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16232));
    // 0x2899cc: 0xc053bd4  jal         func_14EF50
    ctx->pc = 0x2899CCu;
    SET_GPR_U32(ctx, 31, 0x2899D4u);
    ctx->pc = 0x2899D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899CCu;
    // 0x2899d0: 0x26250690  addiu       $a1, $s1, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF50u, 0x2899CCu, 0x2899D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899D4u;
label_2899d4:
    // 0x2899d4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2899d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2899d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2899d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899dc: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x2899dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x2899e0: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x2899E0u;
    SET_GPR_U32(ctx, 31, 0x2899E8u);
    ctx->pc = 0x2899E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899E0u;
    // 0x2899e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x2899E0u, 0x2899E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899E8u;
label_2899e8:
    // 0x2899e8: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x2899e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x2899ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2899ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2899f0: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x2899f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    // 0x2899f4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2899f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2899f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2899F8u;
    {
        const bool branch_taken_0x2899f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2899FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899F8u;
        // 0x2899fc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899f8) {
            ctx->pc = 0x289A0Cu;
            goto label_289a0c;
        }
    }
    ctx->pc = 0x289A00u;
    // 0x289a00: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x289a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x289a04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x289A04u;
    {
        const bool branch_taken_0x289a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A04u;
        // 0x289a08: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a04) {
            ctx->pc = 0x289A10u;
            goto label_289a10;
        }
    }
    ctx->pc = 0x289A0Cu;
label_289a0c:
    // 0x289a0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289a10:
    // 0x289a10: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x289a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x289a14: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x289a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x289a18: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x289a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x289a1c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x289a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x289a20: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x289a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x289a24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x289a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x289a2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289a30: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x289a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x289a34: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x289a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x289a38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289a3c: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x289A3Cu;
    SET_GPR_U32(ctx, 31, 0x289A44u);
    ctx->pc = 0x289A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A3Cu;
    // 0x289a40: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x289A3Cu, 0x289A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A44u;
label_289a44:
    // 0x289a44: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x289a44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x289a48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x289a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289a4c: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x289a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
    // 0x289a50: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x289a50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x289a54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x289A54u;
    {
        const bool branch_taken_0x289a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A54u;
        // 0x289a58: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a54) {
            ctx->pc = 0x289A68u;
            goto label_289a68;
        }
    }
    ctx->pc = 0x289A5Cu;
    // 0x289a5c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x289a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x289a60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x289A60u;
    {
        const bool branch_taken_0x289a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A60u;
        // 0x289a64: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a60) {
            ctx->pc = 0x289A6Cu;
            goto label_289a6c;
        }
    }
    ctx->pc = 0x289A68u;
label_289a68:
    // 0x289a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289a6c:
    // 0x289a6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x289a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289a74: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x289a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x289a78: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x289a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x289a7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x289a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a80: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x289a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x289a84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289a88: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x289a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x289a8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x289a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x289a90: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x289a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x289a94: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x289A94u;
    SET_GPR_U32(ctx, 31, 0x289A9Cu);
    ctx->pc = 0x289A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A94u;
    // 0x289a98: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x289A94u, 0x289A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A9Cu;
label_289a9c:
    // 0x289a9c: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x289a9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x289aa0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x289aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x289aa4: 0xae220678  sw          $v0, 0x678($s1)
    ctx->pc = 0x289aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 2));
    // 0x289aa8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x289aa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x289aac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x289AACu;
    {
        const bool branch_taken_0x289aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AACu;
        // 0x289ab0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289aac) {
            ctx->pc = 0x289AC0u;
            goto label_289ac0;
        }
    }
    ctx->pc = 0x289AB4u;
    // 0x289ab4: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x289ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x289ab8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x289AB8u;
    {
        const bool branch_taken_0x289ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AB8u;
        // 0x289abc: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ab8) {
            ctx->pc = 0x289AC4u;
            goto label_289ac4;
        }
    }
    ctx->pc = 0x289AC0u;
label_289ac0:
    // 0x289ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289ac4:
    // 0x289ac4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x289ac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289acc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x289accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x289ad0: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x289ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x289ad4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x289ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ad8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x289ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x289adc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289ae0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x289ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x289ae4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x289ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x289ae8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x289ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x289aec: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x289AECu;
    SET_GPR_U32(ctx, 31, 0x289AF4u);
    ctx->pc = 0x289AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289AECu;
    // 0x289af0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x289AECu, 0x289AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AF4u;
label_289af4:
    // 0x289af4: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x289af4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x289af8: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x289af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x289afc: 0xae22067c  sw          $v0, 0x67C($s1)
    ctx->pc = 0x289afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 2));
    // 0x289b00: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x289b00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x289b04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x289B04u;
    {
        const bool branch_taken_0x289b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B04u;
        // 0x289b08: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b04) {
            ctx->pc = 0x289B18u;
            goto label_289b18;
        }
    }
    ctx->pc = 0x289B0Cu;
    // 0x289b0c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x289b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x289b10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x289B10u;
    {
        const bool branch_taken_0x289b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B10u;
        // 0x289b14: 0x8c45005c  lw          $a1, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b10) {
            ctx->pc = 0x289B1Cu;
            goto label_289b1c;
        }
    }
    ctx->pc = 0x289B18u;
label_289b18:
    // 0x289b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289b1c:
    // 0x289b1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x289b20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x289b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x289b24: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x289b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b28: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x289b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x289b2c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x289b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x289b30: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x289b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x289b34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289b38: 0x26502fc0  addiu       $s0, $s2, 0x2FC0
    ctx->pc = 0x289b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12224));
    // 0x289b3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x289b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x289b40: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x289b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x289b44: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x289b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x289b48: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x289B48u;
    SET_GPR_U32(ctx, 31, 0x289B50u);
    ctx->pc = 0x289B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B48u;
    // 0x289b4c: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x289B48u, 0x289B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B50u;
label_289b50:
    // 0x289b50: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x289b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x289b54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x289b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x289b58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b60: 0xae220680  sw          $v0, 0x680($s1)
    ctx->pc = 0x289b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 2));
    // 0x289b64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x289b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b68: 0xc04d1be  jal         func_1346F8
    ctx->pc = 0x289B68u;
    SET_GPR_U32(ctx, 31, 0x289B70u);
    ctx->pc = 0x289B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B68u;
    // 0x289b6c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x289B68u, 0x289B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B70u;
label_289b70:
    // 0x289b70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x289b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x289b74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289b78: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x289b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x289b7c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x289b7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x289b80: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x289b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b84: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x289b84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x289b88: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x289b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x289b8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x289b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x289b90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x289b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b94: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x289b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x289b98: 0xc04d220  jal         func_134880
    ctx->pc = 0x289B98u;
    SET_GPR_U32(ctx, 31, 0x289BA0u);
    ctx->pc = 0x289B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B98u;
    // 0x289b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x289B98u, 0x289BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289BA0u;
label_289ba0:
    // 0x289ba0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x289ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x289ba4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x289ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x289ba8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289bac: 0xae2015a8  sw          $zero, 0x15A8($s1)
    ctx->pc = 0x289bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5544), GPR_U32(ctx, 0));
    // 0x289bb0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x289BB0u;
    SET_GPR_U32(ctx, 31, 0x289BB8u);
    ctx->pc = 0x289BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289BB0u;
    // 0x289bb4: 0xe62015a4  swc1        $f0, 0x15A4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5540), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x289BB0u, 0x289BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289BB8u;
label_289bb8:
    // 0x289bb8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x289bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x289bbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x289bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289bc0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x289bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x289bc4: 0x24a58db8  addiu       $a1, $a1, -0x7248
    ctx->pc = 0x289bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938040));
    // 0x289bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289bcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x289bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x289bd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x289bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x289bd4: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x289BD4u;
    SET_GPR_U32(ctx, 31, 0x289BDCu);
    ctx->pc = 0x289BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289BD4u;
    // 0x289bd8: 0xe62015ac  swc1        $f0, 0x15AC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5548), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x289BD4u, 0x289BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289BDCu;
label_289bdc:
    // 0x289bdc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x289bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x289be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289be4: 0x24a58dc0  addiu       $a1, $a1, -0x7240
    ctx->pc = 0x289be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938048));
    // 0x289be8: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x289BE8u;
    SET_GPR_U32(ctx, 31, 0x289BF0u);
    ctx->pc = 0x289BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289BE8u;
    // 0x289bec: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x289BE8u, 0x289BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289BF0u;
label_289bf0:
    // 0x289bf0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x289bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x289bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289bf8: 0x24a58dc8  addiu       $a1, $a1, -0x7238
    ctx->pc = 0x289bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938056));
    // 0x289bfc: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x289BFCu;
    SET_GPR_U32(ctx, 31, 0x289C04u);
    ctx->pc = 0x289C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289BFCu;
    // 0x289c00: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x289BFCu, 0x289C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C04u;
label_289c04:
    // 0x289c04: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x289c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x289c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c0c: 0x24a58dd0  addiu       $a1, $a1, -0x7230
    ctx->pc = 0x289c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938064));
    // 0x289c10: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x289C10u;
    SET_GPR_U32(ctx, 31, 0x289C18u);
    ctx->pc = 0x289C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C10u;
    // 0x289c14: 0xae2215bc  sw          $v0, 0x15BC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5564), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x289C10u, 0x289C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C18u;
label_289c18:
    // 0x289c18: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x289c18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x289c1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c20: 0x24a58dd8  addiu       $a1, $a1, -0x7228
    ctx->pc = 0x289c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938072));
    // 0x289c24: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x289C24u;
    SET_GPR_U32(ctx, 31, 0x289C2Cu);
    ctx->pc = 0x289C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C24u;
    // 0x289c28: 0xae2215c0  sw          $v0, 0x15C0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5568), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x289C24u, 0x289C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C2Cu;
label_289c2c:
    // 0x289c2c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x289c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x289c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c34: 0x24a58de0  addiu       $a1, $a1, -0x7220
    ctx->pc = 0x289c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938080));
    // 0x289c38: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x289C38u;
    SET_GPR_U32(ctx, 31, 0x289C40u);
    ctx->pc = 0x289C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C38u;
    // 0x289c3c: 0xae2215c4  sw          $v0, 0x15C4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5572), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x289C38u, 0x289C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C40u;
label_289c40:
    // 0x289c40: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x289c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x289c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c48: 0x24a58de8  addiu       $a1, $a1, -0x7218
    ctx->pc = 0x289c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938088));
    // 0x289c4c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x289C4Cu;
    SET_GPR_U32(ctx, 31, 0x289C54u);
    ctx->pc = 0x289C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C4Cu;
    // 0x289c50: 0xae2215c8  sw          $v0, 0x15C8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x289C4Cu, 0x289C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C54u;
label_289c54:
    // 0x289c54: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x289c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x289c58: 0xae2215cc  sw          $v0, 0x15CC($s1)
    ctx->pc = 0x289c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5580), GPR_U32(ctx, 2));
    // 0x289c5c: 0x24a58df0  addiu       $a1, $a1, -0x7210
    ctx->pc = 0x289c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938096));
    // 0x289c60: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x289C60u;
    SET_GPR_U32(ctx, 31, 0x289C68u);
    ctx->pc = 0x289C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C60u;
    // 0x289c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x289C60u, 0x289C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C68u;
label_289c68:
    // 0x289c68: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x289c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x289c6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x289C6Cu;
    {
        const bool branch_taken_0x289c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C6Cu;
        // 0x289c70: 0xae2215d0  sw          $v0, 0x15D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c6c) {
            ctx->pc = 0x289C80u;
            goto label_289c80;
        }
    }
    ctx->pc = 0x289C74u;
    // 0x289c74: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x289c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x289c78: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x289c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x289c7c: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x289c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_289c80:
    // 0x289c80: 0x8e2315b8  lw          $v1, 0x15B8($s1)
    ctx->pc = 0x289c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
    // 0x289c84: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x289C84u;
    {
        const bool branch_taken_0x289c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289c84) {
            ctx->pc = 0x289C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289C84u;
            // 0x289c88: 0x8e2315bc  lw          $v1, 0x15BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289C9Cu;
            goto label_289c9c;
        }
    }
    ctx->pc = 0x289C8Cu;
    // 0x289c8c: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x289c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x289c90: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x289c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x289c94: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x289c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x289c98: 0x8e2315bc  lw          $v1, 0x15BC($s1)
    ctx->pc = 0x289c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5564)));
label_289c9c:
    // 0x289c9c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x289C9Cu;
    {
        const bool branch_taken_0x289c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289c9c) {
            ctx->pc = 0x289CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289C9Cu;
            // 0x289ca0: 0x8e2315c0  lw          $v1, 0x15C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289CB4u;
            goto label_289cb4;
        }
    }
    ctx->pc = 0x289CA4u;
    // 0x289ca4: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x289ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x289ca8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x289ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x289cac: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x289cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x289cb0: 0x8e2315c0  lw          $v1, 0x15C0($s1)
    ctx->pc = 0x289cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5568)));
label_289cb4:
    // 0x289cb4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x289CB4u;
    {
        const bool branch_taken_0x289cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289cb4) {
            ctx->pc = 0x289CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289CB4u;
            // 0x289cb8: 0x8e2315c4  lw          $v1, 0x15C4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289CCCu;
            goto label_289ccc;
        }
    }
    ctx->pc = 0x289CBCu;
    // 0x289cbc: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x289cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x289cc0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x289cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x289cc4: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x289cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x289cc8: 0x8e2315c4  lw          $v1, 0x15C4($s1)
    ctx->pc = 0x289cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5572)));
label_289ccc:
    // 0x289ccc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x289CCCu;
    {
        const bool branch_taken_0x289ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289ccc) {
            ctx->pc = 0x289CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289CCCu;
            // 0x289cd0: 0x8e2315c8  lw          $v1, 0x15C8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5576)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289CE4u;
            goto label_289ce4;
        }
    }
    ctx->pc = 0x289CD4u;
    // 0x289cd4: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x289cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x289cd8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x289cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x289cdc: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x289cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x289ce0: 0x8e2315c8  lw          $v1, 0x15C8($s1)
    ctx->pc = 0x289ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5576)));
label_289ce4:
    // 0x289ce4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x289CE4u;
    {
        const bool branch_taken_0x289ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289ce4) {
            ctx->pc = 0x289CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289CE4u;
            // 0x289ce8: 0x8e2315cc  lw          $v1, 0x15CC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289CFCu;
            goto label_289cfc;
        }
    }
    ctx->pc = 0x289CECu;
    // 0x289cec: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x289cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x289cf0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x289cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x289cf4: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x289cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x289cf8: 0x8e2315cc  lw          $v1, 0x15CC($s1)
    ctx->pc = 0x289cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5580)));
label_289cfc:
    // 0x289cfc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x289CFCu;
    {
        const bool branch_taken_0x289cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289cfc) {
            ctx->pc = 0x289D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289CFCu;
            // 0x289d00: 0x8e2315d0  lw          $v1, 0x15D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289D14u;
            goto label_289d14;
        }
    }
    ctx->pc = 0x289D04u;
    // 0x289d04: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x289d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x289d08: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x289d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x289d0c: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x289d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x289d10: 0x8e2315d0  lw          $v1, 0x15D0($s1)
    ctx->pc = 0x289d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5584)));
label_289d14:
    // 0x289d14: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x289D14u;
    {
        const bool branch_taken_0x289d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289d14) {
            ctx->pc = 0x289D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289D14u;
            // 0x289d18: 0x8e2415b4  lw          $a0, 0x15B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289D2Cu;
            goto label_289d2c;
        }
    }
    ctx->pc = 0x289D1Cu;
    // 0x289d1c: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x289d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x289d20: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x289d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x289d24: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x289d24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x289d28: 0x8e2415b4  lw          $a0, 0x15B4($s1)
    ctx->pc = 0x289d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_289d2c:
    // 0x289d2c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x289D2Cu;
    {
        const bool branch_taken_0x289d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x289d2c) {
            ctx->pc = 0x289D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289D2Cu;
            // 0x289d30: 0x8e2415c4  lw          $a0, 0x15C4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289D4Cu;
            goto label_289d4c;
        }
    }
    ctx->pc = 0x289D34u;
    // 0x289d34: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x289d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x289d38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x289d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x289d3c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x289d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x289d40: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x289d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x289d44: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x289d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x289d48: 0x8e2415c4  lw          $a0, 0x15C4($s1)
    ctx->pc = 0x289d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5572)));
label_289d4c:
    // 0x289d4c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x289D4Cu;
    {
        const bool branch_taken_0x289d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x289D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D4Cu;
        // 0x289d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d4c) {
            ctx->pc = 0x289D6Cu;
            goto label_289d6c;
        }
    }
    ctx->pc = 0x289D54u;
    // 0x289d54: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x289d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x289d58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x289d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x289d5c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x289d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x289d60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x289d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x289d64: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x289d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x289d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289d6c:
    // 0x289d6c: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x289D6Cu;
    SET_GPR_U32(ctx, 31, 0x289D74u);
    ctx->pc = 0x289D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D6Cu;
    // 0x289d70: 0xa22215f4  sb          $v0, 0x15F4($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 5620), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x289D6Cu, 0x289D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D74u;
label_289d74:
    // 0x289d74: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x289d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x289d78: 0x240203c1  addiu       $v0, $zero, 0x3C1
    ctx->pc = 0x289d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
    // 0x289d7c: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x289d7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x289d80: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x289D80u;
    {
        const bool branch_taken_0x289d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D80u;
        // 0x289d84: 0xae220560  sw          $v0, 0x560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d80) {
            ctx->pc = 0x289D90u;
            goto label_289d90;
        }
    }
    ctx->pc = 0x289D88u;
    // 0x289d88: 0x240203c8  addiu       $v0, $zero, 0x3C8
    ctx->pc = 0x289d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 968));
    // 0x289d8c: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x289d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
label_289d90:
    // 0x289d90: 0x2c82000d  sltiu       $v0, $a0, 0xD
    ctx->pc = 0x289d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x289d94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x289D94u;
    {
        const bool branch_taken_0x289d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D94u;
        // 0x289d98: 0x2c82000f  sltiu       $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d94) {
            ctx->pc = 0x289DA8u;
            goto label_289da8;
        }
    }
    ctx->pc = 0x289D9Cu;
    // 0x289d9c: 0x240203d1  addiu       $v0, $zero, 0x3D1
    ctx->pc = 0x289d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
    // 0x289da0: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x289da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
    // 0x289da4: 0x2c82000f  sltiu       $v0, $a0, 0xF
    ctx->pc = 0x289da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_289da8:
    // 0x289da8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x289DA8u;
    {
        const bool branch_taken_0x289da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289DA8u;
        // 0x289dac: 0x240203d0  addiu       $v0, $zero, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289da8) {
            ctx->pc = 0x289DB4u;
            goto label_289db4;
        }
    }
    ctx->pc = 0x289DB0u;
    // 0x289db0: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x289db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
label_289db4:
    // 0x289db4: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x289DB4u;
    SET_GPR_U32(ctx, 31, 0x289DBCu);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x289DB4u, 0x289DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289DBCu;
label_289dbc:
    // 0x289dbc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x289dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x289dc0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x289DC0u;
    {
        const bool branch_taken_0x289dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289dc0) {
            ctx->pc = 0x289DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289DC0u;
            // 0x289dc4: 0x8e221554  lw          $v0, 0x1554($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289DD4u;
            goto label_289dd4;
        }
    }
    ctx->pc = 0x289DC8u;
    // 0x289dc8: 0x240203d8  addiu       $v0, $zero, 0x3D8
    ctx->pc = 0x289dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 984));
    // 0x289dcc: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x289dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
    // 0x289dd0: 0x8e221554  lw          $v0, 0x1554($s1)
    ctx->pc = 0x289dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5460)));
label_289dd4:
    // 0x289dd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x289dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x289dd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x289dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x289ddc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x289DDCu;
    {
        const bool branch_taken_0x289ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289DDCu;
        // 0x289de0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ddc) {
            ctx->pc = 0x289DF4u;
            goto label_289df4;
        }
    }
    ctx->pc = 0x289DE4u;
    // 0x289de4: 0x8e2215a0  lw          $v0, 0x15A0($s1)
    ctx->pc = 0x289de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5536)));
    // 0x289de8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x289de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x289dec: 0xae2215a0  sw          $v0, 0x15A0($s1)
    ctx->pc = 0x289decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5536), GPR_U32(ctx, 2));
    // 0x289df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289df4:
    // 0x289df4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x289df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x289df8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x289df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289dfc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x289dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289e00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x289e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289e04: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x289e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x289e08: 0x3e00008  jr          $ra
    ctx->pc = 0x289E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E08u;
        // 0x289e0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289E10u;
}
