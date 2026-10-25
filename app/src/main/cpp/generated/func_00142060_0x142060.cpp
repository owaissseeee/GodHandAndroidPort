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

// Function: func_00142060
// Address: 0x142060 - 0x1430e8
void func_00142060_0x142060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00142060_0x142060");
#endif

    switch (ctx->pc) {
        case 0x1420f4u: goto label_1420f4;
        case 0x142100u: goto label_142100;
        case 0x14210cu: goto label_14210c;
        case 0x142164u: goto label_142164;
        case 0x142170u: goto label_142170;
        case 0x1422d0u: goto label_1422d0;
        case 0x142378u: goto label_142378;
        case 0x142388u: goto label_142388;
        case 0x142398u: goto label_142398;
        case 0x1423a8u: goto label_1423a8;
        case 0x1423bcu: goto label_1423bc;
        case 0x142458u: goto label_142458;
        case 0x142468u: goto label_142468;
        case 0x142478u: goto label_142478;
        case 0x142488u: goto label_142488;
        case 0x1424d0u: goto label_1424d0;
        case 0x1424dcu: goto label_1424dc;
        case 0x142510u: goto label_142510;
        case 0x142558u: goto label_142558;
        case 0x14258cu: goto label_14258c;
        case 0x142634u: goto label_142634;
        case 0x1426b8u: goto label_1426b8;
        case 0x14274cu: goto label_14274c;
        case 0x1427a8u: goto label_1427a8;
        case 0x142844u: goto label_142844;
        case 0x142858u: goto label_142858;
        case 0x1428b0u: goto label_1428b0;
        case 0x142900u: goto label_142900;
        case 0x142944u: goto label_142944;
        case 0x142984u: goto label_142984;
        case 0x1429a4u: goto label_1429a4;
        case 0x1429d0u: goto label_1429d0;
        case 0x1429e4u: goto label_1429e4;
        case 0x142a04u: goto label_142a04;
        case 0x142a38u: goto label_142a38;
        case 0x142a6cu: goto label_142a6c;
        case 0x142ab0u: goto label_142ab0;
        case 0x142abcu: goto label_142abc;
        case 0x142b2cu: goto label_142b2c;
        case 0x142b70u: goto label_142b70;
        case 0x142bc4u: goto label_142bc4;
        case 0x142bd4u: goto label_142bd4;
        case 0x142c20u: goto label_142c20;
        case 0x142c54u: goto label_142c54;
        case 0x142cacu: goto label_142cac;
        case 0x142cf4u: goto label_142cf4;
        case 0x142d1cu: goto label_142d1c;
        case 0x142d30u: goto label_142d30;
        case 0x142da4u: goto label_142da4;
        case 0x142dbcu: goto label_142dbc;
        case 0x142dccu: goto label_142dcc;
        case 0x142e28u: goto label_142e28;
        case 0x142ebcu: goto label_142ebc;
        case 0x142f50u: goto label_142f50;
        case 0x142fd4u: goto label_142fd4;
        case 0x142fdcu: goto label_142fdc;
        case 0x14306cu: goto label_14306c;
        case 0x143078u: goto label_143078;
        case 0x143080u: goto label_143080;
        case 0x143088u: goto label_143088;
        case 0x143090u: goto label_143090;
        default: break;
    }

    ctx->pc = 0x142060u;

    // 0x142060: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x142060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x142064: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x142064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x142068: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x142068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x14206c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14206cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x142070: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x142070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142074: 0x8ca26444  lw          $v0, 0x6444($a1)
    ctx->pc = 0x142074u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x466444u));
    // 0x142078: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x142078u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
    // 0x14207c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x14207cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x142080: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x142080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x142084: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x142084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x142088: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x142088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x14208c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x14208cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x142090: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x142090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x142094: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x142094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x142098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14209c: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x14209cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1420a0: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x1420a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1420a4: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1420a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1420a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1420A8u;
    {
        const bool branch_taken_0x1420a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1420ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420A8u;
        // 0x1420ac: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1420a8) {
            ctx->pc = 0x1420C4u;
            goto label_1420c4;
        }
    }
    ctx->pc = 0x1420B0u;
    // 0x1420b0: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x1420b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x1420b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1420b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1420b8: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1420b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1420bc: 0xaca36444  sw          $v1, 0x6444($a1)
    ctx->pc = 0x1420bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 25668), GPR_U32(ctx, 3));
    // 0x1420c0: 0xe6a06440  swc1        $f0, 0x6440($s5)
    ctx->pc = 0x1420c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 25664), bits); }
label_1420c4:
    // 0x1420c4: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x1420c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1420c8: 0x3c144000  lui         $s4, 0x4000
    ctx->pc = 0x1420c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16384 << 16));
    // 0x1420cc: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x1420ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x1420d0: 0x5440007c  bnel        $v0, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x1420D0u;
    {
        const bool branch_taken_0x1420d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1420d0) {
            ctx->pc = 0x1420D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1420D0u;
            // 0x1420d4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1422C4u;
            goto label_1422c4;
        }
    }
    ctx->pc = 0x1420D8u;
    // 0x1420d8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1420d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1420dc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1420dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1420e0: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x1420e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x1420e4: 0x2470b000  addiu       $s0, $v1, -0x5000
    ctx->pc = 0x1420e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946816));
    // 0x1420e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1420e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1420ec: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x1420ECu;
    SET_GPR_U32(ctx, 31, 0x1420F4u);
    ctx->pc = 0x1420F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1420ECu;
    // 0x1420f0: 0x3c130800  lui         $s3, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)2048 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x1420ECu, 0x1420F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1420F4u;
label_1420f4:
    // 0x1420f4: 0xae420094  sw          $v0, 0x94($s2)
    ctx->pc = 0x1420f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    // 0x1420f8: 0xc0aa726  jal         func_2A9C98
    ctx->pc = 0x1420F8u;
    SET_GPR_U32(ctx, 31, 0x142100u);
    ctx->pc = 0x1420FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1420F8u;
    // 0x1420fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C98u, 0x1420F8u, 0x142100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142100u;
label_142100:
    // 0x142100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142104: 0xc0aa726  jal         func_2A9C98
    ctx->pc = 0x142104u;
    SET_GPR_U32(ctx, 31, 0x14210Cu);
    ctx->pc = 0x142108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142104u;
    // 0x142108: 0xe6400264  swc1        $f0, 0x264($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 612), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C98u, 0x142104u, 0x14210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14210Cu;
label_14210c:
    // 0x14210c: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x14210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142114: 0xe6400268  swc1        $f0, 0x268($s2)
    ctx->pc = 0x142114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 616), bits); }
    // 0x142118: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x142118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x14211c: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x14211cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x142120: 0xae430090  sw          $v1, 0x90($s2)
    ctx->pc = 0x142120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
    // 0x142124: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x142124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142128: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x142128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x14212c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x14212cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x142130: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x142130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x142134: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142138: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x142138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x14213c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x14213cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x142140: 0x8e4500ac  lw          $a1, 0xAC($s2)
    ctx->pc = 0x142140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x142144: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x142144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142148: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x142148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x14214c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x14214cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x142150: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x142150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x142154: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142158: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x142158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x14215c: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x14215Cu;
    SET_GPR_U32(ctx, 31, 0x142164u);
    ctx->pc = 0x142160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14215Cu;
    // 0x142160: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x14215Cu, 0x142164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142164u;
label_142164:
    // 0x142164: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x142164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142168: 0xc07eb20  jal         func_1FAC80
    ctx->pc = 0x142168u;
    SET_GPR_U32(ctx, 31, 0x142170u);
    ctx->pc = 0x14216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142168u;
    // 0x14216c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x142168u, 0x142170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142170u;
label_142170:
    // 0x142170: 0x8e4301ec  lw          $v1, 0x1EC($s2)
    ctx->pc = 0x142170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x142174: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x142174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x142178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14217c: 0x0  nop
    ctx->pc = 0x14217cu;
    // NOP
    // 0x142180: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x142180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x142184: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x142184u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x142188: 0xa064004f  sb          $a0, 0x4F($v1)
    ctx->pc = 0x142188u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 4));
    // 0x14218c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x14218cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142190: 0x0  nop
    ctx->pc = 0x142190u;
    // NOP
    // 0x142194: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x142194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x142198: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x142198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x14219c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14219cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1421a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1421a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1421a4: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x1421a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x1421a8: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x1421a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x1421ac: 0x0  nop
    ctx->pc = 0x1421acu;
    // NOP
    // 0x1421b0: 0x0  nop
    ctx->pc = 0x1421b0u;
    // NOP
    // 0x1421b4: 0x46000dc3  div.s       $f23, $f1, $f0
    ctx->pc = 0x1421b4u;
    ctx->f[23] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1421b8: 0xa064004f  sb          $a0, 0x4F($v1)
    ctx->pc = 0x1421b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 4));
    // 0x1421bc: 0x8e4201f4  lw          $v0, 0x1F4($s2)
    ctx->pc = 0x1421bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x1421c0: 0xa044004f  sb          $a0, 0x4F($v0)
    ctx->pc = 0x1421c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 4));
    // 0x1421c4: 0x4602b834  c.lt.s      $f23, $f2
    ctx->pc = 0x1421c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1421c8: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x1421c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1421cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1421ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1421d0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1421d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1421d4: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1421d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1421d8: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x1421d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1421dc: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1421dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1421e0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1421e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1421e4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1421e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1421e8: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x1421e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1421ec: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x1421ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1421f0: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x1421f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x1421f4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1421f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x1421f8: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x1421f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1421fc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1421fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x142200: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x142200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x142204: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x142204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x142208: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x142208u;
    {
        const bool branch_taken_0x142208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142208u;
        // 0x14220c: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142208) {
            ctx->pc = 0x14222Cu;
            goto label_14222c;
        }
    }
    ctx->pc = 0x142210u;
    // 0x142210: 0x8e4401ec  lw          $a0, 0x1EC($s2)
    ctx->pc = 0x142210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x142214: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x142214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x142218: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x142218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14221c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x14221cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x142220: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x142224: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x142224u;
    {
        const bool branch_taken_0x142224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142224u;
        // 0x142228: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142224) {
            ctx->pc = 0x14223Cu;
            goto label_14223c;
        }
    }
    ctx->pc = 0x14222Cu;
label_14222c:
    // 0x14222c: 0x8e4301ec  lw          $v1, 0x1EC($s2)
    ctx->pc = 0x14222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x142230: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142234: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x142234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x142238: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x142238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_14223c:
    // 0x14223c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14223cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x142240: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142244: 0x0  nop
    ctx->pc = 0x142244u;
    // NOP
    // 0x142248: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x142248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14224c: 0x0  nop
    ctx->pc = 0x14224cu;
    // NOP
    // 0x142250: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x142250u;
    {
        const bool branch_taken_0x142250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142250u;
        // 0x142254: 0x8e4401f0  lw          $a0, 0x1F0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142250) {
            ctx->pc = 0x14226Cu;
            goto label_14226c;
        }
    }
    ctx->pc = 0x142258u;
    // 0x142258: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x142258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x14225c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14225cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x142260: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x142260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x142264: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x142264u;
    {
        const bool branch_taken_0x142264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142264u;
        // 0x142268: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142264) {
            ctx->pc = 0x142278u;
            goto label_142278;
        }
    }
    ctx->pc = 0x14226Cu;
label_14226c:
    // 0x14226c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x14226cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x142270: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x142270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x142274: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142278:
    // 0x142278: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x142278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x14227c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14227cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142280: 0x0  nop
    ctx->pc = 0x142280u;
    // NOP
    // 0x142284: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x142284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142288: 0x0  nop
    ctx->pc = 0x142288u;
    // NOP
    // 0x14228c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x14228Cu;
    {
        const bool branch_taken_0x14228c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14228Cu;
        // 0x142290: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14228c) {
            ctx->pc = 0x1422ACu;
            goto label_1422ac;
        }
    }
    ctx->pc = 0x142294u;
    // 0x142294: 0x8e4401f4  lw          $a0, 0x1F4($s2)
    ctx->pc = 0x142294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x142298: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x142298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x14229c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14229cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1422a0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1422a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1422a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1422A4u;
    {
        const bool branch_taken_0x1422a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1422A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422A4u;
        // 0x1422a8: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422a4) {
            ctx->pc = 0x1422BCu;
            goto label_1422bc;
        }
    }
    ctx->pc = 0x1422ACu;
label_1422ac:
    // 0x1422ac: 0x8e4401f4  lw          $a0, 0x1F4($s2)
    ctx->pc = 0x1422acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x1422b0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1422b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1422b4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1422b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1422b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1422b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1422bc:
    // 0x1422bc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1422bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1422c0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1422c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1422c4:
    // 0x1422c4: 0x24909b70  addiu       $s0, $a0, -0x6490
    ctx->pc = 0x1422c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1422c8: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x1422C8u;
    SET_GPR_U32(ctx, 31, 0x1422D0u);
    ctx->pc = 0x1422CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1422C8u;
    // 0x1422cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x1422C8u, 0x1422D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1422D0u;
label_1422d0:
    // 0x1422d0: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x1422d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1422d4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1422d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1422d8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1422D8u;
    {
        const bool branch_taken_0x1422d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1422DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422D8u;
        // 0x1422dc: 0x26480190  addiu       $t0, $s2, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422d8) {
            ctx->pc = 0x1423B0u;
            goto label_1423b0;
        }
    }
    ctx->pc = 0x1422E0u;
    // 0x1422e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1422e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1422e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1422e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1422e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1422e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1422ec: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x1422ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x1422f0: 0xa102001c  sb          $v0, 0x1C($t0)
    ctx->pc = 0x1422f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x1422f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1422f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422f8: 0xe4a0d6ec  swc1        $f0, -0x2914($a1)
    ctx->pc = 0x1422f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3BD6ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BD6ECu, _value); } while (0); }
    // 0x1422fc: 0x3c07f7ff  lui         $a3, 0xF7FF
    ctx->pc = 0x1422fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63487 << 16));
    // 0x142300: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x142300u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x142304: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x142304u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142308: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x142308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x14230c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14230cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142310: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x142310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x142314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142318: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x142318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14231c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x14231cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x142320: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x142320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x142324: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x142324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x142328: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x142328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14232c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x14232cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x142330: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x142330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x142334: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x142334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142338: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x142338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14233c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x14233cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x142340: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x142340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x142344: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142348: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x142348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14234c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x14234cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x142350: 0x8e4500ac  lw          $a1, 0xAC($s2)
    ctx->pc = 0x142350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x142354: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x142354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142358: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x142358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14235c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x14235cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x142360: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x142360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x142364: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142368: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x142368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14236c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x14236cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x142370: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142370u;
    SET_GPR_U32(ctx, 31, 0x142378u);
    ctx->pc = 0x142374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142370u;
    // 0x142374: 0x8e4500a0  lw          $a1, 0xA0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142370u, 0x142378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142378u;
label_142378:
    // 0x142378: 0x8e4500b4  lw          $a1, 0xB4($s2)
    ctx->pc = 0x142378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x14237c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14237cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142380: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142380u;
    SET_GPR_U32(ctx, 31, 0x142388u);
    ctx->pc = 0x142384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142380u;
    // 0x142384: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142380u, 0x142388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142388u;
label_142388:
    // 0x142388: 0x8e4500ac  lw          $a1, 0xAC($s2)
    ctx->pc = 0x142388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x14238c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14238cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142390: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142390u;
    SET_GPR_U32(ctx, 31, 0x142398u);
    ctx->pc = 0x142394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142390u;
    // 0x142394: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142390u, 0x142398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142398u;
label_142398:
    // 0x142398: 0x8e4500b0  lw          $a1, 0xB0($s2)
    ctx->pc = 0x142398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x14239c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14239cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1423a0: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x1423A0u;
    SET_GPR_U32(ctx, 31, 0x1423A8u);
    ctx->pc = 0x1423A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1423A0u;
    // 0x1423a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x1423A0u, 0x1423A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1423A8u;
label_1423a8:
    // 0x1423a8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1423A8u;
    {
        const bool branch_taken_0x1423a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1423ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423A8u;
        // 0x1423ac: 0xc600d6ec  lwc1        $f0, -0x2914($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294956780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423a8) {
            ctx->pc = 0x14248Cu;
            goto label_14248c;
        }
    }
    ctx->pc = 0x1423B0u;
label_1423b0:
    // 0x1423b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1423b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1423b4: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x1423B4u;
    SET_GPR_U32(ctx, 31, 0x1423BCu);
    ctx->pc = 0x1423B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1423B4u;
    // 0x1423b8: 0x26570190  addiu       $s7, $s2, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x1423B4u, 0x1423BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1423BCu;
label_1423bc:
    // 0x1423bc: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x1423bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1423c0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1423c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1423c4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1423C4u;
    {
        const bool branch_taken_0x1423c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1423C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423C4u;
        // 0x1423c8: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423c4) {
            ctx->pc = 0x142488u;
            goto label_142488;
        }
    }
    ctx->pc = 0x1423CCu;
    // 0x1423cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1423ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1423d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1423d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1423d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1423d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1423d8: 0xa2e2001c  sb          $v0, 0x1C($s7)
    ctx->pc = 0x1423d8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x1423dc: 0x3c07f7ff  lui         $a3, 0xF7FF
    ctx->pc = 0x1423dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63487 << 16));
    // 0x1423e0: 0xe600d6ec  swc1        $f0, -0x2914($s0)
    ctx->pc = 0x1423e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294956780), bits); }
    // 0x1423e4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1423e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1423e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1423e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1423ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1423ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1423f0: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1423f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1423f4: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x1423f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1423f8: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x1423f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1423fc: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x1423fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x142400: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x142400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x142404: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x142404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x142408: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x142408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14240c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x14240cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x142410: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x142410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x142414: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x142414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142418: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x142418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14241c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x14241cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x142420: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x142420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x142424: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142428: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x142428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14242c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x14242cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x142430: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x142430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x142434: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x142434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142438: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x142438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14243c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x14243cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x142440: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x142440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x142444: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142448: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x142448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14244c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x14244cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x142450: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142450u;
    SET_GPR_U32(ctx, 31, 0x142458u);
    ctx->pc = 0x142454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142450u;
    // 0x142454: 0x8e4500a0  lw          $a1, 0xA0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142450u, 0x142458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142458u;
label_142458:
    // 0x142458: 0x8e4500b4  lw          $a1, 0xB4($s2)
    ctx->pc = 0x142458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x14245c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14245cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142460: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142460u;
    SET_GPR_U32(ctx, 31, 0x142468u);
    ctx->pc = 0x142464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142460u;
    // 0x142464: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142460u, 0x142468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142468u;
label_142468:
    // 0x142468: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x142468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x14246c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14246cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142470: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142470u;
    SET_GPR_U32(ctx, 31, 0x142478u);
    ctx->pc = 0x142474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142470u;
    // 0x142474: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142470u, 0x142478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142478u;
label_142478:
    // 0x142478: 0x8e4500b0  lw          $a1, 0xB0($s2)
    ctx->pc = 0x142478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x14247c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14247cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142480: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142480u;
    SET_GPR_U32(ctx, 31, 0x142488u);
    ctx->pc = 0x142484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142480u;
    // 0x142484: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142480u, 0x142488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142488u;
label_142488:
    // 0x142488: 0xc600d6ec  lwc1        $f0, -0x2914($s0)
    ctx->pc = 0x142488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294956780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14248c:
    // 0x14248c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x14248cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x142490: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x142490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x142494: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x142494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142498: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x142498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x14249c: 0xc6a16440  lwc1        $f1, 0x6440($s5)
    ctx->pc = 0x14249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 25664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1424a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1424a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1424a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1424a8: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x1424a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x1424ac: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x1424acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
    // 0x1424b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1424b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1424b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1424b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1424b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1424b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1424bc: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x1424bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1424c0: 0xc600d6ec  lwc1        $f0, -0x2914($s0)
    ctx->pc = 0x1424c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294956780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1424c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1424c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1424c8: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x1424C8u;
    SET_GPR_U32(ctx, 31, 0x1424D0u);
    ctx->pc = 0x1424CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424C8u;
    // 0x1424cc: 0xe600d6ec  swc1        $f0, -0x2914($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294956780), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x1424C8u, 0x1424D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424D0u;
label_1424d0:
    // 0x1424d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1424d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424d4: 0xc07eb20  jal         func_1FAC80
    ctx->pc = 0x1424D4u;
    SET_GPR_U32(ctx, 31, 0x1424DCu);
    ctx->pc = 0x1424D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424D4u;
    // 0x1424d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x1424D4u, 0x1424DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424DCu;
label_1424dc:
    // 0x1424dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1424dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1424e0: 0x0  nop
    ctx->pc = 0x1424e0u;
    // NOP
    // 0x1424e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1424e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1424e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1424e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424ec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1424ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1424f0: 0x0  nop
    ctx->pc = 0x1424f0u;
    // NOP
    // 0x1424f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1424f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1424f8: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1424f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1424fc: 0x0  nop
    ctx->pc = 0x1424fcu;
    // NOP
    // 0x142500: 0x0  nop
    ctx->pc = 0x142500u;
    // NOP
    // 0x142504: 0x460105c3  div.s       $f23, $f0, $f1
    ctx->pc = 0x142504u;
    ctx->f[23] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x142508: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x142508u;
    SET_GPR_U32(ctx, 31, 0x142510u);
    ctx->pc = 0x14250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142508u;
    // 0x14250c: 0xe4570040  swc1        $f23, 0x40($v0) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x142508u, 0x142510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142510u;
label_142510:
    // 0x142510: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x142510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x142514: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x142514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x142518: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x142518u;
    {
        const bool branch_taken_0x142518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142518u;
        // 0x14251c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142518) {
            ctx->pc = 0x142570u;
            goto label_142570;
        }
    }
    ctx->pc = 0x142520u;
    // 0x142520: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x142520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x142524: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x142524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x142528: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x142528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14252c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14252cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142530: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x142530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142534: 0xc4420058  lwc1        $f2, 0x58($v0)
    ctx->pc = 0x142534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142538: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x142538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14253c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14253cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x142540: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x142540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x142544: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x142544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x142548: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x142548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x14254c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x14254cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x142550: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142550u;
    SET_GPR_U32(ctx, 31, 0x142558u);
    ctx->pc = 0x142554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142550u;
    // 0x142554: 0x8e4500b8  lw          $a1, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142550u, 0x142558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142558u;
label_142558:
    // 0x142558: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x142558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x14255c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x14255cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x142560: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x142560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x142564: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x142564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x142568: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x142568u;
    {
        const bool branch_taken_0x142568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142568u;
        // 0x14256c: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142568) {
            ctx->pc = 0x1425A8u;
            goto label_1425a8;
        }
    }
    ctx->pc = 0x142570u;
label_142570:
    // 0x142570: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x142570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x142574: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142578: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x142578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x14257c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14257Cu;
    {
        const bool branch_taken_0x14257c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14257c) {
            ctx->pc = 0x142580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14257Cu;
            // 0x142580: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14259Cu;
            goto label_14259c;
        }
    }
    ctx->pc = 0x142584u;
    // 0x142584: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x142584u;
    SET_GPR_U32(ctx, 31, 0x14258Cu);
    ctx->pc = 0x142588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142584u;
    // 0x142588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x142584u, 0x14258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14258Cu;
label_14258c:
    // 0x14258c: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x14258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x142590: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x142590u;
    {
        const bool branch_taken_0x142590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x142590) {
            ctx->pc = 0x142594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142590u;
            // 0x142594: 0x9243026f  lbu         $v1, 0x26F($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 623)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1425B0u;
            goto label_1425b0;
        }
    }
    ctx->pc = 0x142598u;
    // 0x142598: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x142598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_14259c:
    // 0x14259c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x14259cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1425a0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1425a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1425a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1425a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1425a8:
    // 0x1425a8: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1425a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1425ac: 0x9243026f  lbu         $v1, 0x26F($s2)
    ctx->pc = 0x1425acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 623)));
label_1425b0:
    // 0x1425b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1425b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1425b4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1425B4u;
    {
        const bool branch_taken_0x1425b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1425B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425B4u;
        // 0x1425b8: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425b4) {
            ctx->pc = 0x1425F4u;
            goto label_1425f4;
        }
    }
    ctx->pc = 0x1425BCu;
    // 0x1425bc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1425bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1425c0: 0x2462b000  addiu       $v0, $v1, -0x5000
    ctx->pc = 0x1425c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946816));
    // 0x1425c4: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x1425c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x1425c8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1425C8u;
    {
        const bool branch_taken_0x1425c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1425CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425C8u;
        // 0x1425cc: 0x2482b000  addiu       $v0, $a0, -0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425c8) {
            ctx->pc = 0x1425F8u;
            goto label_1425f8;
        }
    }
    ctx->pc = 0x1425D0u;
    // 0x1425d0: 0x9242026e  lbu         $v0, 0x26E($s2)
    ctx->pc = 0x1425d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 622)));
    // 0x1425d4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1425d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1425d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1425d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1425dc: 0x2c63004d  sltiu       $v1, $v1, 0x4D
    ctx->pc = 0x1425dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)77) ? 1 : 0);
    // 0x1425e0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1425E0u;
    {
        const bool branch_taken_0x1425e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1425E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425E0u;
        // 0x1425e4: 0xa242026e  sb          $v0, 0x26E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 622), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425e0) {
            ctx->pc = 0x142628u;
            goto label_142628;
        }
    }
    ctx->pc = 0x1425E8u;
    // 0x1425e8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x1425e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1425ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1425ECu;
    {
        const bool branch_taken_0x1425ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1425F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425ECu;
        // 0x1425f0: 0xa240026f  sb          $zero, 0x26F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 623), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425ec) {
            ctx->pc = 0x142624u;
            goto label_142624;
        }
    }
    ctx->pc = 0x1425F4u;
label_1425f4:
    // 0x1425f4: 0x2482b000  addiu       $v0, $a0, -0x5000
    ctx->pc = 0x1425f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_1425f8:
    // 0x1425f8: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x1425f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1425fc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1425FCu;
    {
        const bool branch_taken_0x1425fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x142600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425FCu;
        // 0x142600: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425fc) {
            ctx->pc = 0x14262Cu;
            goto label_14262c;
        }
    }
    ctx->pc = 0x142604u;
    // 0x142604: 0x9242026e  lbu         $v0, 0x26E($s2)
    ctx->pc = 0x142604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 622)));
    // 0x142608: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x142608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x14260c: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14260Cu;
    {
        const bool branch_taken_0x14260c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x14260c) {
            ctx->pc = 0x142610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14260Cu;
            // 0x142610: 0xa242026e  sb          $v0, 0x26E($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 622), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142628u;
            goto label_142628;
        }
    }
    ctx->pc = 0x142614u;
    // 0x142614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142618: 0xa240026e  sb          $zero, 0x26E($s2)
    ctx->pc = 0x142618u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 622), (uint8_t)GPR_U32(ctx, 0));
    // 0x14261c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14261Cu;
    {
        const bool branch_taken_0x14261c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14261Cu;
        // 0x142620: 0xa242026f  sb          $v0, 0x26F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 623), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14261c) {
            ctx->pc = 0x142628u;
            goto label_142628;
        }
    }
    ctx->pc = 0x142624u;
label_142624:
    // 0x142624: 0xa242026e  sb          $v0, 0x26E($s2)
    ctx->pc = 0x142624u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 622), (uint8_t)GPR_U32(ctx, 2));
label_142628:
    // 0x142628: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_14262c:
    // 0x14262c: 0xc0aa726  jal         func_2A9C98
    ctx->pc = 0x14262Cu;
    SET_GPR_U32(ctx, 31, 0x142634u);
    ctx->pc = 0x142630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14262Cu;
    // 0x142630: 0x2444b000  addiu       $a0, $v0, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C98u, 0x14262Cu, 0x142634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142634u;
label_142634:
    // 0x142634: 0xc6410264  lwc1        $f1, 0x264($s2)
    ctx->pc = 0x142634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142638: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x142638u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14263c: 0x0  nop
    ctx->pc = 0x14263cu;
    // NOP
    // 0x142640: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x142640u;
    {
        const bool branch_taken_0x142640 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x142640) {
            ctx->pc = 0x142644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142640u;
            // 0x142644: 0x9242026e  lbu         $v0, 0x26E($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 622)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142690u;
            goto label_142690;
        }
    }
    ctx->pc = 0x142648u;
    // 0x142648: 0x8e4500c4  lw          $a1, 0xC4($s2)
    ctx->pc = 0x142648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x14264c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x14264cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x142650: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x142650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142654: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x142654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x142658: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x142658u;
    {
        const bool branch_taken_0x142658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142658u;
        // 0x14265c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142658) {
            ctx->pc = 0x14268Cu;
            goto label_14268c;
        }
    }
    ctx->pc = 0x142660u;
    // 0x142660: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x142660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x142664: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x142664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x142668: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14266c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14266cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x142670: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x142670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x142674: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x142674u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x142678: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x142678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x14267c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x14267cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x142680: 0xa244026f  sb          $a0, 0x26F($s2)
    ctx->pc = 0x142680u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 623), (uint8_t)GPR_U32(ctx, 4));
    // 0x142684: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x142684u;
    {
        const bool branch_taken_0x142684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142684u;
        // 0x142688: 0xa240026e  sb          $zero, 0x26E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 622), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142684) {
            ctx->pc = 0x1426ACu;
            goto label_1426ac;
        }
    }
    ctx->pc = 0x14268Cu;
label_14268c:
    // 0x14268c: 0x9242026e  lbu         $v0, 0x26E($s2)
    ctx->pc = 0x14268cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 622)));
label_142690:
    // 0x142690: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x142690u;
    {
        const bool branch_taken_0x142690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142690u;
        // 0x142694: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142690) {
            ctx->pc = 0x1426B0u;
            goto label_1426b0;
        }
    }
    ctx->pc = 0x142698u;
    // 0x142698: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x142698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x14269c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x14269cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1426a0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1426a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1426a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1426a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1426a8: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1426a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_1426ac:
    // 0x1426ac: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1426acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1426b0:
    // 0x1426b0: 0xc0aa726  jal         func_2A9C98
    ctx->pc = 0x1426B0u;
    SET_GPR_U32(ctx, 31, 0x1426B8u);
    ctx->pc = 0x1426B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1426B0u;
    // 0x1426b4: 0x2464b000  addiu       $a0, $v1, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C98u, 0x1426B0u, 0x1426B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426B8u;
label_1426b8:
    // 0x1426b8: 0xc6420268  lwc1        $f2, 0x268($s2)
    ctx->pc = 0x1426b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1426bc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1426bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1426c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1426c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1426c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1426c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1426c8: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x1426c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1426cc: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1426ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1426d0: 0xe6400264  swc1        $f0, 0x264($s2)
    ctx->pc = 0x1426d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 612), bits); }
    // 0x1426d4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1426d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1426d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1426d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1426dc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1426dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1426e0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1426e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1426e4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1426e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1426e8: 0xe6420268  swc1        $f2, 0x268($s2)
    ctx->pc = 0x1426e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 616), bits); }
    // 0x1426ec: 0xe4420040  swc1        $f2, 0x40($v0)
    ctx->pc = 0x1426ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1426f0: 0xc6400264  lwc1        $f0, 0x264($s2)
    ctx->pc = 0x1426f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1426f4: 0xc6410268  lwc1        $f1, 0x268($s2)
    ctx->pc = 0x1426f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1426f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1426f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1426fc: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x1426fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142700: 0x0  nop
    ctx->pc = 0x142700u;
    // NOP
    // 0x142704: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x142704u;
    {
        const bool branch_taken_0x142704 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142704u;
        // 0x142708: 0x3c100200  lui         $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142704) {
            ctx->pc = 0x14275Cu;
            goto label_14275c;
        }
    }
    ctx->pc = 0x14270Cu;
    // 0x14270c: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x14270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142710: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x142710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x142714: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x142714u;
    {
        const bool branch_taken_0x142714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142714) {
            ctx->pc = 0x142718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142714u;
            // 0x142718: 0xc6400264  lwc1        $f0, 0x264($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x142764u;
            goto label_142764;
        }
    }
    ctx->pc = 0x14271Cu;
    // 0x14271c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x14271cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x142720: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x142720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x142724: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x142724u;
    {
        const bool branch_taken_0x142724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142724u;
        // 0x142728: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142724) {
            ctx->pc = 0x14275Cu;
            goto label_14275c;
        }
    }
    ctx->pc = 0x14272Cu;
    // 0x14272c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14272cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142730: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x142730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x142734: 0x24060163  addiu       $a2, $zero, 0x163
    ctx->pc = 0x142734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
    // 0x142738: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x142738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14273c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x14273cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x142740: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x142740u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142744: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x142744u;
    SET_GPR_U32(ctx, 31, 0x14274Cu);
    ctx->pc = 0x142748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142744u;
    // 0x142748: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x142744u, 0x14274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14274Cu;
label_14274c:
    // 0x14274c: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x14274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142750: 0xae420270  sw          $v0, 0x270($s2)
    ctx->pc = 0x142750u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
    // 0x142754: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x142754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x142758: 0xae430090  sw          $v1, 0x90($s2)
    ctx->pc = 0x142758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
label_14275c:
    // 0x14275c: 0xc6400264  lwc1        $f0, 0x264($s2)
    ctx->pc = 0x14275cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142760: 0xc6410268  lwc1        $f1, 0x268($s2)
    ctx->pc = 0x142760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_142764:
    // 0x142764: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x142764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x142768: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x142768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x14276c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14276cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142770: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x142770u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x142774: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x142774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142778: 0x0  nop
    ctx->pc = 0x142778u;
    // NOP
    // 0x14277c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x14277Cu;
    {
        const bool branch_taken_0x14277c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14277Cu;
        // 0x142780: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14277c) {
            ctx->pc = 0x1427C8u;
            goto label_1427c8;
        }
    }
    ctx->pc = 0x142784u;
    // 0x142784: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x142784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142788: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14278c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x14278Cu;
    {
        const bool branch_taken_0x14278c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14278c) {
            ctx->pc = 0x142790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14278Cu;
            // 0x142790: 0x8e4500c0  lw          $a1, 0xC0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1427CCu;
            goto label_1427cc;
        }
    }
    ctx->pc = 0x142794u;
    // 0x142794: 0x8e450270  lw          $a1, 0x270($s2)
    ctx->pc = 0x142794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x142798: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x142798u;
    {
        const bool branch_taken_0x142798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142798u;
        // 0x14279c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142798) {
            ctx->pc = 0x1427A8u;
            goto label_1427a8;
        }
    }
    ctx->pc = 0x1427A0u;
    // 0x1427a0: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1427A0u;
    SET_GPR_U32(ctx, 31, 0x1427A8u);
    ctx->pc = 0x1427A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1427A0u;
    // 0x1427a4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1427A0u, 0x1427A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427A8u;
label_1427a8:
    // 0x1427a8: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x1427a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1427ac: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x1427acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x1427b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1427b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1427b4: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1427b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x1427b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1427b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1427bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1427bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1427c0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1427c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1427c4: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x1427c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
label_1427c8:
    // 0x1427c8: 0x8e4500c0  lw          $a1, 0xC0($s2)
    ctx->pc = 0x1427c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_1427cc:
    // 0x1427cc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1427ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1427d0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1427d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1427d4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1427d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1427d8: 0x2490b000  addiu       $s0, $a0, -0x5000
    ctx->pc = 0x1427d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    // 0x1427dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1427dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1427e0: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x1427e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x1427e4: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x1427e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1427e8: 0x9242026e  lbu         $v0, 0x26E($s2)
    ctx->pc = 0x1427e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 622)));
    // 0x1427ec: 0xa082004f  sb          $v0, 0x4F($a0)
    ctx->pc = 0x1427ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x1427f0: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x1427f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x1427f4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1427F4u;
    {
        const bool branch_taken_0x1427f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427F4u;
        // 0x1427f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427f4) {
            ctx->pc = 0x142884u;
            goto label_142884;
        }
    }
    ctx->pc = 0x1427FCu;
    // 0x1427fc: 0x8e4600c4  lw          $a2, 0xC4($s2)
    ctx->pc = 0x1427fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x142800: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x142800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x142804: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x142804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x142808: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x142808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x14280c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14280cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x142810: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x142810u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x142814: 0x8e4500c0  lw          $a1, 0xC0($s2)
    ctx->pc = 0x142814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x142818: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x142818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x14281c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14281cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x142820: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x142820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x142824: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x142824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x142828: 0xc6400264  lwc1        $f0, 0x264($s2)
    ctx->pc = 0x142828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14282c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x14282cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x142830: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x142830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x142834: 0xc6400264  lwc1        $f0, 0x264($s2)
    ctx->pc = 0x142834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142838: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x142838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x14283c: 0xc0aa74a  jal         func_2A9D28
    ctx->pc = 0x14283Cu;
    SET_GPR_U32(ctx, 31, 0x142844u);
    ctx->pc = 0x142840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14283Cu;
    // 0x142840: 0xc6140004  lwc1        $f20, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D28u, 0x14283Cu, 0x142844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142844u;
label_142844:
    // 0x142844: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142848: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x142848u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x14284c: 0xc455b000  lwc1        $f21, -0x5000($v0)
    ctx->pc = 0x14284cu;
    { uint32_t bits = FAST_READ32(0x5CB000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x142850: 0xc0aa74a  jal         func_2A9D28
    ctx->pc = 0x142850u;
    SET_GPR_U32(ctx, 31, 0x142858u);
    ctx->pc = 0x142854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142850u;
    // 0x142854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D28u, 0x142850u, 0x142858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142858u;
label_142858:
    // 0x142858: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x142858u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x14285c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x14285cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x142860: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x142860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142864: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x142864u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x142868: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x142868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x14286c: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x14286cu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[21]);
    // 0x142870: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x142870u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x142874: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142874u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142878: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x142878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14287c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x14287Cu;
    {
        const bool branch_taken_0x14287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14287Cu;
        // 0x142880: 0xa062004f  sb          $v0, 0x4F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14287c) {
            ctx->pc = 0x142968u;
            goto label_142968;
        }
    }
    ctx->pc = 0x142884u;
label_142884:
    // 0x142884: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x142884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x142888: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x142888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x14288c: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x14288cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x142890: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x142890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142894: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x142894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142898: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x142898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14289c: 0x0  nop
    ctx->pc = 0x14289cu;
    // NOP
    // 0x1428a0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1428A0u;
    {
        const bool branch_taken_0x1428a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1428A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428A0u;
        // 0x1428a4: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428a0) {
            ctx->pc = 0x1428D8u;
            goto label_1428d8;
        }
    }
    ctx->pc = 0x1428A8u;
    // 0x1428a8: 0xc0aa6f0  jal         func_2A9BC0
    ctx->pc = 0x1428A8u;
    SET_GPR_U32(ctx, 31, 0x1428B0u);
    ctx->pc = 0x1428ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1428A8u;
    // 0x1428ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9BC0u, 0x1428A8u, 0x1428B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428B0u;
label_1428b0:
    // 0x1428b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1428b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1428b4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1428B4u;
    {
        const bool branch_taken_0x1428b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1428B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428B4u;
        // 0x1428b8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428b4) {
            ctx->pc = 0x1428D8u;
            goto label_1428d8;
        }
    }
    ctx->pc = 0x1428BCu;
    // 0x1428bc: 0x8e4400c0  lw          $a0, 0xC0($s2)
    ctx->pc = 0x1428bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x1428c0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1428c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1428c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1428c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1428c8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1428c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1428cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1428ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1428d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1428D0u;
    {
        const bool branch_taken_0x1428d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428D0u;
        // 0x1428d4: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428d0) {
            ctx->pc = 0x142968u;
            goto label_142968;
        }
    }
    ctx->pc = 0x1428D8u;
label_1428d8:
    // 0x1428d8: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x1428d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
    // 0x1428dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1428dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1428e0: 0x2444b000  addiu       $a0, $v0, -0x5000
    ctx->pc = 0x1428e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x1428e4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1428e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1428e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1428e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1428ec: 0x0  nop
    ctx->pc = 0x1428ecu;
    // NOP
    // 0x1428f0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1428F0u;
    {
        const bool branch_taken_0x1428f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1428F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428F0u;
        // 0x1428f4: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428f0) {
            ctx->pc = 0x14291Cu;
            goto label_14291c;
        }
    }
    ctx->pc = 0x1428F8u;
    // 0x1428f8: 0xc0aa6f0  jal         func_2A9BC0
    ctx->pc = 0x1428F8u;
    SET_GPR_U32(ctx, 31, 0x142900u);
    ctx->pc = 0x2A9BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9BC0u, 0x1428F8u, 0x142900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142900u;
label_142900:
    // 0x142900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142904: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x142904u;
    {
        const bool branch_taken_0x142904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x142908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142904u;
        // 0x142908: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142904) {
            ctx->pc = 0x14291Cu;
            goto label_14291c;
        }
    }
    ctx->pc = 0x14290Cu;
    // 0x14290c: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x14290cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x142910: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x142910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x142914: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x142914u;
    {
        const bool branch_taken_0x142914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142914u;
        // 0x142918: 0x34428080  ori         $v0, $v0, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142914) {
            ctx->pc = 0x142964u;
            goto label_142964;
        }
    }
    ctx->pc = 0x14291Cu;
label_14291c:
    // 0x14291c: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x14291cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x142920: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x142920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142924: 0x2464b000  addiu       $a0, $v1, -0x5000
    ctx->pc = 0x142924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946816));
    // 0x142928: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x142928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14292c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14292cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142930: 0x0  nop
    ctx->pc = 0x142930u;
    // NOP
    // 0x142934: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x142934u;
    {
        const bool branch_taken_0x142934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142934) {
            ctx->pc = 0x142938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142934u;
            // 0x142938: 0x8e4300bc  lw          $v1, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14295Cu;
            goto label_14295c;
        }
    }
    ctx->pc = 0x14293Cu;
    // 0x14293c: 0xc0aa6f0  jal         func_2A9BC0
    ctx->pc = 0x14293Cu;
    SET_GPR_U32(ctx, 31, 0x142944u);
    ctx->pc = 0x2A9BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9BC0u, 0x14293Cu, 0x142944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142944u;
label_142944:
    // 0x142944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142948: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x142948u;
    {
        const bool branch_taken_0x142948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142948u;
        // 0x14294c: 0x8e4300bc  lw          $v1, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142948) {
            ctx->pc = 0x14295Cu;
            goto label_14295c;
        }
    }
    ctx->pc = 0x142950u;
    // 0x142950: 0x3c02804e  lui         $v0, 0x804E
    ctx->pc = 0x142950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32846 << 16));
    // 0x142954: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x142954u;
    {
        const bool branch_taken_0x142954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142954u;
        // 0x142958: 0x34426060  ori         $v0, $v0, 0x6060 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142954) {
            ctx->pc = 0x142964u;
            goto label_142964;
        }
    }
    ctx->pc = 0x14295Cu;
label_14295c:
    // 0x14295c: 0x3c028074  lui         $v0, 0x8074
    ctx->pc = 0x14295cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32884 << 16));
    // 0x142960: 0x34424042  ori         $v0, $v0, 0x4042
    ctx->pc = 0x142960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16450);
label_142964:
    // 0x142964: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x142964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_142968:
    // 0x142968: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x142968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x14296c: 0x92500260  lbu         $s0, 0x260($s2)
    ctx->pc = 0x14296cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x142970: 0x264200e0  addiu       $v0, $s2, 0xE0
    ctx->pc = 0x142970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x142974: 0x24919b70  addiu       $s1, $a0, -0x6490
    ctx->pc = 0x142974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x142978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14297c: 0xc07eaec  jal         func_1FABB0
    ctx->pc = 0x14297Cu;
    SET_GPR_U32(ctx, 31, 0x142984u);
    ctx->pc = 0x142980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14297Cu;
    // 0x142980: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x14297Cu, 0x142984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142984u;
label_142984:
    // 0x142984: 0x26550130  addiu       $s5, $s2, 0x130
    ctx->pc = 0x142984u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
    // 0x142988: 0x26430210  addiu       $v1, $s2, 0x210
    ctx->pc = 0x142988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    // 0x14298c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x14298cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x142990: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x142990u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    // 0x142994: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x142994u;
    {
        const bool branch_taken_0x142994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142994u;
        // 0x142998: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142994) {
            ctx->pc = 0x142A24u;
            goto label_142a24;
        }
    }
    ctx->pc = 0x14299Cu;
    // 0x14299c: 0xc07eaec  jal         func_1FABB0
    ctx->pc = 0x14299Cu;
    SET_GPR_U32(ctx, 31, 0x1429A4u);
    ctx->pc = 0x1429A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14299Cu;
    // 0x1429a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x14299Cu, 0x1429A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1429A4u;
label_1429a4:
    // 0x1429a4: 0x92430260  lbu         $v1, 0x260($s2)
    ctx->pc = 0x1429a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1429a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1429a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429ac: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1429acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1429b0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1429B0u;
    {
        const bool branch_taken_0x1429b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1429B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429B0u;
        // 0x1429b4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429b0) {
            ctx->pc = 0x142A24u;
            goto label_142a24;
        }
    }
    ctx->pc = 0x1429B8u;
    // 0x1429b8: 0x3c14f7ff  lui         $s4, 0xF7FF
    ctx->pc = 0x1429b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63487 << 16));
    // 0x1429bc: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x1429bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x1429c0: 0x8fb30004  lw          $s3, 0x4($sp)
    ctx->pc = 0x1429c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1429c4: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x1429c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1429c8: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x1429c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429cc: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x1429ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_1429d0:
    // 0x1429d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1429d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1429d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1429d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1429d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429dc: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x1429DCu;
    SET_GPR_U32(ctx, 31, 0x1429E4u);
    ctx->pc = 0x1429E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429DCu;
    // 0x1429e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x1429DCu, 0x1429E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1429E4u;
label_1429e4:
    // 0x1429e4: 0x92420260  lbu         $v0, 0x260($s2)
    ctx->pc = 0x1429e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1429e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1429e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1429ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1429f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1429f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1429f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1429f8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1429f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1429fc: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x1429FCu;
    SET_GPR_U32(ctx, 31, 0x142A04u);
    ctx->pc = 0x142A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429FCu;
    // 0x142a00: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x1429FCu, 0x142A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A04u;
label_142a04:
    // 0x142a04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142a08: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x142a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x142a0c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x142a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x142a10: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x142a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x142a14: 0x92430260  lbu         $v1, 0x260($s2)
    ctx->pc = 0x142a14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x142a18: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x142a18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x142a1c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x142A1Cu;
    {
        const bool branch_taken_0x142a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x142A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A1Cu;
        // 0x142a20: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a1c) {
            ctx->pc = 0x1429D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1429d0;
        }
    }
    ctx->pc = 0x142A24u;
label_142a24:
    // 0x142a24: 0x3c13f7ff  lui         $s3, 0xF7FF
    ctx->pc = 0x142a24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63487 << 16));
    // 0x142a28: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x142a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x142a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a30: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x142a30u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x142a34: 0x3c140800  lui         $s4, 0x800
    ctx->pc = 0x142a34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)2048 << 16));
label_142a38:
    // 0x142a38: 0x92420260  lbu         $v0, 0x260($s2)
    ctx->pc = 0x142a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x142a3c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x142a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x142a40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142A40u;
    {
        const bool branch_taken_0x142a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A40u;
        // 0x142a44: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a40) {
            ctx->pc = 0x142A54u;
            goto label_142a54;
        }
    }
    ctx->pc = 0x142A48u;
    // 0x142a48: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142a4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x142A4Cu;
    {
        const bool branch_taken_0x142a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A4Cu;
        // 0x142a50: 0x531024  and         $v0, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a4c) {
            ctx->pc = 0x142A5Cu;
            goto label_142a5c;
        }
    }
    ctx->pc = 0x142A54u;
label_142a54:
    // 0x142a54: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142a58: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x142a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_142a5c:
    // 0x142a5c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x142a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x142a60: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x142a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x142a64: 0xc07ebb8  jal         func_1FAEE0
    ctx->pc = 0x142A64u;
    SET_GPR_U32(ctx, 31, 0x142A6Cu);
    ctx->pc = 0x142A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142A64u;
    // 0x142a68: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE0u, 0x142A64u, 0x142A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A6Cu;
label_142a6c:
    // 0x142a6c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x142a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x142a70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142A70u;
    {
        const bool branch_taken_0x142a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A70u;
        // 0x142a74: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a70) {
            ctx->pc = 0x142A84u;
            goto label_142a84;
        }
    }
    ctx->pc = 0x142A78u;
    // 0x142a78: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142a7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x142A7Cu;
    {
        const bool branch_taken_0x142a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A7Cu;
        // 0x142a80: 0x531024  and         $v0, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a7c) {
            ctx->pc = 0x142A8Cu;
            goto label_142a8c;
        }
    }
    ctx->pc = 0x142A84u;
label_142a84:
    // 0x142a84: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142a88: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x142a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_142a8c:
    // 0x142a8c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x142a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x142a90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x142a94: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x142a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x142a98: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x142A98u;
    {
        const bool branch_taken_0x142a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A98u;
        // 0x142a9c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a98) {
            ctx->pc = 0x142A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142a38;
        }
    }
    ctx->pc = 0x142AA0u;
    // 0x142aa0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x142aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x142aa4: 0x24709b70  addiu       $s0, $v1, -0x6490
    ctx->pc = 0x142aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x142aa8: 0xc07eaec  jal         func_1FABB0
    ctx->pc = 0x142AA8u;
    SET_GPR_U32(ctx, 31, 0x142AB0u);
    ctx->pc = 0x142AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142AA8u;
    // 0x142aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x142AA8u, 0x142AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AB0u;
label_142ab0:
    // 0x142ab0: 0xa2420260  sb          $v0, 0x260($s2)
    ctx->pc = 0x142ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 608), (uint8_t)GPR_U32(ctx, 2));
    // 0x142ab4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x142AB4u;
    SET_GPR_U32(ctx, 31, 0x142ABCu);
    ctx->pc = 0x142AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142AB4u;
    // 0x142ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x142AB4u, 0x142ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142ABCu;
label_142abc:
    // 0x142abc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x142abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x142ac0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x142ac0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x142ac4: 0x16630003  bne         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x142AC4u;
    {
        const bool branch_taken_0x142ac4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x142AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AC4u;
        // 0x142ac8: 0x3a620005  xori        $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ac4) {
            ctx->pc = 0x142AD4u;
            goto label_142ad4;
        }
    }
    ctx->pc = 0x142ACCu;
    // 0x142acc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x142ACCu;
    {
        const bool branch_taken_0x142acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142ACCu;
        // 0x142ad0: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142acc) {
            ctx->pc = 0x142AD8u;
            goto label_142ad8;
        }
    }
    ctx->pc = 0x142AD4u;
label_142ad4:
    // 0x142ad4: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x142ad4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_142ad8:
    // 0x142ad8: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x142ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x142adc: 0x9643017c  lhu         $v1, 0x17C($s2)
    ctx->pc = 0x142adcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x142ae0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x142ae0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x142ae4: 0x10730064  beq         $v1, $s3, . + 4 + (0x64 << 2)
    ctx->pc = 0x142AE4u;
    {
        const bool branch_taken_0x142ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x142AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AE4u;
        // 0x142ae8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ae4) {
            ctx->pc = 0x142C78u;
            goto label_142c78;
        }
    }
    ctx->pc = 0x142AECu;
    // 0x142aec: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x142aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x142af0: 0xa2f5001c  sb          $s5, 0x1C($s7)
    ctx->pc = 0x142af0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 28), (uint8_t)GPR_U32(ctx, 21));
    // 0x142af4: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x142af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142af8: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x142af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x142afc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x142AFCu;
    {
        const bool branch_taken_0x142afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AFCu;
        // 0x142b00: 0x26540098  addiu       $s4, $s2, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142afc) {
            ctx->pc = 0x142B2Cu;
            goto label_142b2c;
        }
    }
    ctx->pc = 0x142B04u;
    // 0x142b04: 0x9642017c  lhu         $v0, 0x17C($s2)
    ctx->pc = 0x142b04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x142b08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x142b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x142b0c: 0xae430090  sw          $v1, 0x90($s2)
    ctx->pc = 0x142b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
    // 0x142b10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b14: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x142b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x142b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142b20: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x142b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x142b24: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142B24u;
    SET_GPR_U32(ctx, 31, 0x142B2Cu);
    ctx->pc = 0x142B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B24u;
    // 0x142b28: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142B24u, 0x142B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B2Cu;
label_142b2c:
    // 0x142b2c: 0x9642017c  lhu         $v0, 0x17C($s2)
    ctx->pc = 0x142b2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x142b30: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x142b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x142b34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142b38: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x142b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x142b3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x142b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142b40: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x142b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x142b44: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x142b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x142b48: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x142B48u;
    {
        const bool branch_taken_0x142b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B48u;
        // 0x142b4c: 0x2670000c  addiu       $s0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b48) {
            ctx->pc = 0x142CCCu;
            goto label_142ccc;
        }
    }
    ctx->pc = 0x142B50u;
    // 0x142b50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b54: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x142b54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x142b58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b5c: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x142b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x142b60: 0x3c11f7ff  lui         $s1, 0xF7FF
    ctx->pc = 0x142b60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63487 << 16));
    // 0x142b64: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x142b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x142b68: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142B68u;
    SET_GPR_U32(ctx, 31, 0x142B70u);
    ctx->pc = 0x142B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B68u;
    // 0x142b6c: 0x3631ffff  ori         $s1, $s1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142B68u, 0x142B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B70u;
label_142b70:
    // 0x142b70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x142b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x142b74: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x142b74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x142b78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x142b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b80: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x142b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142b84: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x142b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x142b88: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x142b88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x142b8c: 0x9642017c  lhu         $v0, 0x17C($s2)
    ctx->pc = 0x142b8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x142b90: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x142b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x142b94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142b98: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x142b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x142b9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x142b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142ba0: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x142ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142ba4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x142ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x142ba8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x142ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x142bac: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x142bacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x142bb0: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x142bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x142bb4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x142bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x142bb8: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x142bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
    // 0x142bbc: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142BBCu;
    SET_GPR_U32(ctx, 31, 0x142BC4u);
    ctx->pc = 0x142BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BBCu;
    // 0x142bc0: 0x8e4501f8  lw          $a1, 0x1F8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142BBCu, 0x142BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BC4u;
label_142bc4:
    // 0x142bc4: 0x8e4501fc  lw          $a1, 0x1FC($s2)
    ctx->pc = 0x142bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
    // 0x142bc8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x142bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142bcc: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142BCCu;
    SET_GPR_U32(ctx, 31, 0x142BD4u);
    ctx->pc = 0x142BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BCCu;
    // 0x142bd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142BCCu, 0x142BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BD4u;
label_142bd4:
    // 0x142bd4: 0x8e4401fc  lw          $a0, 0x1FC($s2)
    ctx->pc = 0x142bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
    // 0x142bd8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x142bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x142bdc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x142bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x142be0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x142be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x142be4: 0x93c3d6f0  lbu         $v1, -0x2910($fp)
    ctx->pc = 0x142be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294956784)));
    // 0x142be8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x142be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x142bec: 0xa3c3d6f0  sb          $v1, -0x2910($fp)
    ctx->pc = 0x142becu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4294956784), (uint8_t)GPR_U32(ctx, 3));
    // 0x142bf0: 0x9643017c  lhu         $v1, 0x17C($s2)
    ctx->pc = 0x142bf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x142bf4: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x142bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x142bf8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x142BF8u;
    {
        const bool branch_taken_0x142bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BF8u;
        // 0x142bfc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142bf8) {
            ctx->pc = 0x142C2Cu;
            goto label_142c2c;
        }
    }
    ctx->pc = 0x142C00u;
    // 0x142c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142c04: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x142c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x142c08: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x142c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x142c0c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x142c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x142c10: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x142c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x142c14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x142c14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142c18: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x142C18u;
    SET_GPR_U32(ctx, 31, 0x142C20u);
    ctx->pc = 0x142C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142C18u;
    // 0x142c1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x142C18u, 0x142C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142C20u;
label_142c20:
    // 0x142c20: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x142c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x142c24: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x142C24u;
    {
        const bool branch_taken_0x142c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C24u;
        // 0x142c28: 0xa075d6f1  sb          $s5, -0x290F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294956785), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c24) {
            ctx->pc = 0x142C5Cu;
            goto label_142c5c;
        }
    }
    ctx->pc = 0x142C2Cu;
label_142c2c:
    // 0x142c2c: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x142c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x142c30: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x142C30u;
    {
        const bool branch_taken_0x142c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C30u;
        // 0x142c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c30) {
            ctx->pc = 0x142C5Cu;
            goto label_142c5c;
        }
    }
    ctx->pc = 0x142C38u;
    // 0x142c38: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x142c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x142c3c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x142c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x142c40: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x142c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x142c44: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x142c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x142c48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x142c48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142c4c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x142C4Cu;
    SET_GPR_U32(ctx, 31, 0x142C54u);
    ctx->pc = 0x142C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142C4Cu;
    // 0x142c50: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x142C4Cu, 0x142C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142C54u;
label_142c54:
    // 0x142c54: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x142c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x142c58: 0xa060d6f1  sb          $zero, -0x290F($v1)
    ctx->pc = 0x142c58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3BD6F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3BD6F1u, _value); } while (0);
label_142c5c:
    // 0x142c5c: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x142c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142c60: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x142c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x142c64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x142c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x142c68: 0xa653017c  sh          $s3, 0x17C($s2)
    ctx->pc = 0x142c68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 380), (uint16_t)GPR_U32(ctx, 19));
    // 0x142c6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x142c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x142c70: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x142C70u;
    {
        const bool branch_taken_0x142c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C70u;
        // 0x142c74: 0xae430090  sw          $v1, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c70) {
            ctx->pc = 0x142CCCu;
            goto label_142ccc;
        }
    }
    ctx->pc = 0x142C78u;
label_142c78:
    // 0x142c78: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x142c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142c7c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x142c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x142c80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x142c84: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x142C84u;
    {
        const bool branch_taken_0x142c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C84u;
        // 0x142c88: 0x26500098  addiu       $s0, $s2, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c84) {
            ctx->pc = 0x142CCCu;
            goto label_142ccc;
        }
    }
    ctx->pc = 0x142C8Cu;
    // 0x142c8c: 0x9642017c  lhu         $v0, 0x17C($s2)
    ctx->pc = 0x142c8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x142c90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142c94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142c98: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x142c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x142c9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142ca0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x142ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x142ca4: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142CA4u;
    SET_GPR_U32(ctx, 31, 0x142CACu);
    ctx->pc = 0x142CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CA4u;
    // 0x142ca8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142CA4u, 0x142CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CACu;
label_142cac:
    // 0x142cac: 0x9642017c  lhu         $v0, 0x17C($s2)
    ctx->pc = 0x142cacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x142cb0: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x142cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x142cb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142cb8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x142cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x142cbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x142cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x142cc0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142cc4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x142cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x142cc8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x142cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_142ccc:
    // 0x142ccc: 0x93c2d6f0  lbu         $v0, -0x2910($fp)
    ctx->pc = 0x142cccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294956784)));
    // 0x142cd0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x142CD0u;
    {
        const bool branch_taken_0x142cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CD0u;
        // 0x142cd4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142cd0) {
            ctx->pc = 0x142D4Cu;
            goto label_142d4c;
        }
    }
    ctx->pc = 0x142CD8u;
    // 0x142cd8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x142cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x142cdc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x142ce0: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x142CE0u;
    {
        const bool branch_taken_0x142ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x142CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CE0u;
        // 0x142ce4: 0xa3c2d6f0  sb          $v0, -0x2910($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 4294956784), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ce0) {
            ctx->pc = 0x142D4Cu;
            goto label_142d4c;
        }
    }
    ctx->pc = 0x142CE8u;
    // 0x142ce8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x142ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x142cec: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x142CECu;
    SET_GPR_U32(ctx, 31, 0x142CF4u);
    ctx->pc = 0x142CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CECu;
    // 0x142cf0: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x142CECu, 0x142CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CF4u;
label_142cf4:
    // 0x142cf4: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x142CF4u;
    {
        const bool branch_taken_0x142cf4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x142CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CF4u;
        // 0x142cf8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142cf4) {
            ctx->pc = 0x142D4Cu;
            goto label_142d4c;
        }
    }
    ctx->pc = 0x142CFCu;
    // 0x142cfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142d00: 0x9043d6f1  lbu         $v1, -0x290F($v0)
    ctx->pc = 0x142d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294956785)));
    // 0x142d04: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x142D04u;
    {
        const bool branch_taken_0x142d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x142d04) {
            ctx->pc = 0x142D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142D04u;
            // 0x142d08: 0x8e450204  lw          $a1, 0x204($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142D24u;
            goto label_142d24;
        }
    }
    ctx->pc = 0x142D0Cu;
    // 0x142d0c: 0x8e450200  lw          $a1, 0x200($s2)
    ctx->pc = 0x142d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x142d10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x142d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d14: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142D14u;
    SET_GPR_U32(ctx, 31, 0x142D1Cu);
    ctx->pc = 0x142D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D14u;
    // 0x142d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142D14u, 0x142D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D1Cu;
label_142d1c:
    // 0x142d1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x142D1Cu;
    {
        const bool branch_taken_0x142d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D1Cu;
        // 0x142d20: 0x8e440200  lw          $a0, 0x200($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142d1c) {
            ctx->pc = 0x142D34u;
            goto label_142d34;
        }
    }
    ctx->pc = 0x142D24u;
label_142d24:
    // 0x142d24: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x142d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d28: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142D28u;
    SET_GPR_U32(ctx, 31, 0x142D30u);
    ctx->pc = 0x142D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D28u;
    // 0x142d2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142D28u, 0x142D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D30u;
label_142d30:
    // 0x142d30: 0x8e440204  lw          $a0, 0x204($s2)
    ctx->pc = 0x142d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
label_142d34:
    // 0x142d34: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x142d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x142d38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x142d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x142d3c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x142d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x142d40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x142d44: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x142d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x142d48: 0xa3c0d6f0  sb          $zero, -0x2910($fp)
    ctx->pc = 0x142d48u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4294956784), (uint8_t)GPR_U32(ctx, 0));
label_142d4c:
    // 0x142d4c: 0x9642017c  lhu         $v0, 0x17C($s2)
    ctx->pc = 0x142d4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x142d50: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x142d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x142d54: 0x8e4401f8  lw          $a0, 0x1F8($s2)
    ctx->pc = 0x142d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
    // 0x142d58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142d5c: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x142d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x142d60: 0x9643017c  lhu         $v1, 0x17C($s2)
    ctx->pc = 0x142d60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x142d64: 0x5465008d  bnel        $v1, $a1, . + 4 + (0x8D << 2)
    ctx->pc = 0x142D64u;
    {
        const bool branch_taken_0x142d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x142d64) {
            ctx->pc = 0x142D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142D64u;
            // 0x142d68: 0x8e4401f8  lw          $a0, 0x1F8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142F9Cu;
            goto label_142f9c;
        }
    }
    ctx->pc = 0x142D6Cu;
    // 0x142d6c: 0x8e4501f8  lw          $a1, 0x1F8($s2)
    ctx->pc = 0x142d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
    // 0x142d70: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x142d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x142d74: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x142d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x142d78: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x142d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x142d7c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x142d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142d80: 0x3c10f7ff  lui         $s0, 0xF7FF
    ctx->pc = 0x142d80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63487 << 16));
    // 0x142d84: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x142d84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x142d88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142d8c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x142d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x142d90: 0x8e4301e4  lw          $v1, 0x1E4($s2)
    ctx->pc = 0x142d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x142d94: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142d98: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x142d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x142d9c: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x142D9Cu;
    SET_GPR_U32(ctx, 31, 0x142DA4u);
    ctx->pc = 0x142DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D9Cu;
    // 0x142da0: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x142D9Cu, 0x142DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DA4u;
label_142da4:
    // 0x142da4: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x142da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x142da8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x142DA8u;
    {
        const bool branch_taken_0x142da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x142DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142DA8u;
        // 0x142dac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142da8) {
            ctx->pc = 0x142DDCu;
            goto label_142ddc;
        }
    }
    ctx->pc = 0x142DB0u;
    // 0x142db0: 0x8e4501e8  lw          $a1, 0x1E8($s2)
    ctx->pc = 0x142db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 488)));
    // 0x142db4: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142DB4u;
    SET_GPR_U32(ctx, 31, 0x142DBCu);
    ctx->pc = 0x142DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DB4u;
    // 0x142db8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142DB4u, 0x142DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DBCu;
label_142dbc:
    // 0x142dbc: 0x8e4501fc  lw          $a1, 0x1FC($s2)
    ctx->pc = 0x142dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
    // 0x142dc0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x142dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142dc4: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142DC4u;
    SET_GPR_U32(ctx, 31, 0x142DCCu);
    ctx->pc = 0x142DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DC4u;
    // 0x142dc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142DC4u, 0x142DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DCCu;
label_142dcc:
    // 0x142dcc: 0x8e4301fc  lw          $v1, 0x1FC($s2)
    ctx->pc = 0x142dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
    // 0x142dd0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142dd4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x142dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x142dd8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x142dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_142ddc:
    // 0x142ddc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x142ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x142de0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x142de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x142de4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142de8: 0x0  nop
    ctx->pc = 0x142de8u;
    // NOP
    // 0x142dec: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x142decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142df0: 0x0  nop
    ctx->pc = 0x142df0u;
    // NOP
    // 0x142df4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x142DF4u;
    {
        const bool branch_taken_0x142df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142DF4u;
        // 0x142df8: 0x3c111000  lui         $s1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142df4) {
            ctx->pc = 0x142E38u;
            goto label_142e38;
        }
    }
    ctx->pc = 0x142DFCu;
    // 0x142dfc: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x142dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142e00: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x142e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x142e04: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x142E04u;
    {
        const bool branch_taken_0x142e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E04u;
        // 0x142e08: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e04) {
            ctx->pc = 0x142E38u;
            goto label_142e38;
        }
    }
    ctx->pc = 0x142E0Cu;
    // 0x142e0c: 0x8e4201ec  lw          $v0, 0x1EC($s2)
    ctx->pc = 0x142e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x142e10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e14: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x142e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x142e18: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x142e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x142e1c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x142e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x142e20: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142E20u;
    SET_GPR_U32(ctx, 31, 0x142E28u);
    ctx->pc = 0x142E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E20u;
    // 0x142e24: 0x8e4501ec  lw          $a1, 0x1EC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142E20u, 0x142E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E28u;
label_142e28:
    // 0x142e28: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x142e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142e2c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x142e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x142e30: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x142E30u;
    {
        const bool branch_taken_0x142e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E30u;
        // 0x142e34: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e30) {
            ctx->pc = 0x142E6Cu;
            goto label_142e6c;
        }
    }
    ctx->pc = 0x142E38u;
label_142e38:
    // 0x142e38: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x142e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142e3c: 0x0  nop
    ctx->pc = 0x142e3cu;
    // NOP
    // 0x142e40: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x142E40u;
    {
        const bool branch_taken_0x142e40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E40u;
        // 0x142e44: 0x3c040800  lui         $a0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e40) {
            ctx->pc = 0x142E6Cu;
            goto label_142e6c;
        }
    }
    ctx->pc = 0x142E48u;
    // 0x142e48: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x142e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142e4c: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x142e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x142e50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x142e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x142e54: 0x8e4501ec  lw          $a1, 0x1EC($s2)
    ctx->pc = 0x142e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x142e58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x142e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x142e5c: 0xae430090  sw          $v1, 0x90($s2)
    ctx->pc = 0x142e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
    // 0x142e60: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x142e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142e64: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x142e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x142e68: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x142e68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_142e6c:
    // 0x142e6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x142e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x142e70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142e74: 0x0  nop
    ctx->pc = 0x142e74u;
    // NOP
    // 0x142e78: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x142e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142e7c: 0x0  nop
    ctx->pc = 0x142e7cu;
    // NOP
    // 0x142e80: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x142E80u;
    {
        const bool branch_taken_0x142e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E80u;
        // 0x142e84: 0x3c100800  lui         $s0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e80) {
            ctx->pc = 0x142ECCu;
            goto label_142ecc;
        }
    }
    ctx->pc = 0x142E88u;
    // 0x142e88: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x142e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142e8c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x142e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x142e90: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x142E90u;
    {
        const bool branch_taken_0x142e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E90u;
        // 0x142e94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e90) {
            ctx->pc = 0x142ECCu;
            goto label_142ecc;
        }
    }
    ctx->pc = 0x142E98u;
    // 0x142e98: 0x8e4501f0  lw          $a1, 0x1F0($s2)
    ctx->pc = 0x142e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x142e9c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x142e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x142ea0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x142ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x142ea4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x142ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142ea8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142eac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x142eb0: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x142eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x142eb4: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142EB4u;
    SET_GPR_U32(ctx, 31, 0x142EBCu);
    ctx->pc = 0x142EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142EB4u;
    // 0x142eb8: 0x8e4501f0  lw          $a1, 0x1F0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142EB4u, 0x142EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EBCu;
label_142ebc:
    // 0x142ebc: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x142ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142ec0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x142ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x142ec4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x142EC4u;
    {
        const bool branch_taken_0x142ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EC4u;
        // 0x142ec8: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ec4) {
            ctx->pc = 0x142F00u;
            goto label_142f00;
        }
    }
    ctx->pc = 0x142ECCu;
label_142ecc:
    // 0x142ecc: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x142eccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142ed0: 0x0  nop
    ctx->pc = 0x142ed0u;
    // NOP
    // 0x142ed4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x142ED4u;
    {
        const bool branch_taken_0x142ed4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142ED4u;
        // 0x142ed8: 0x3c040800  lui         $a0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ed4) {
            ctx->pc = 0x142F00u;
            goto label_142f00;
        }
    }
    ctx->pc = 0x142EDCu;
    // 0x142edc: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x142edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142ee0: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x142ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x142ee4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x142ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x142ee8: 0x8e4501f0  lw          $a1, 0x1F0($s2)
    ctx->pc = 0x142ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x142eec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x142eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x142ef0: 0xae430090  sw          $v1, 0x90($s2)
    ctx->pc = 0x142ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
    // 0x142ef4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x142ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142ef8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x142ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x142efc: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x142efcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_142f00:
    // 0x142f00: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x142f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x142f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142f08: 0x0  nop
    ctx->pc = 0x142f08u;
    // NOP
    // 0x142f0c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x142f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142f10: 0x0  nop
    ctx->pc = 0x142f10u;
    // NOP
    // 0x142f14: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x142F14u;
    {
        const bool branch_taken_0x142f14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F14u;
        // 0x142f18: 0x3c100400  lui         $s0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f14) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142F1Cu;
    // 0x142f1c: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x142f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142f20: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x142f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x142f24: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x142F24u;
    {
        const bool branch_taken_0x142f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F24u;
        // 0x142f28: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f24) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142F2Cu;
    // 0x142f2c: 0x8e4501f4  lw          $a1, 0x1F4($s2)
    ctx->pc = 0x142f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x142f30: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x142f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x142f34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x142f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x142f38: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x142f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142f3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x142f44: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x142f44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x142f48: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x142F48u;
    SET_GPR_U32(ctx, 31, 0x142F50u);
    ctx->pc = 0x142F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F48u;
    // 0x142f4c: 0x8e4501f4  lw          $a1, 0x1F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x142F48u, 0x142F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F50u;
label_142f50:
    // 0x142f50: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x142f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142f54: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x142f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x142f58: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x142F58u;
    {
        const bool branch_taken_0x142f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F58u;
        // 0x142f5c: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f58) {
            ctx->pc = 0x142FC4u;
            goto label_142fc4;
        }
    }
    ctx->pc = 0x142F60u;
label_142f60:
    // 0x142f60: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x142f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142f64: 0x0  nop
    ctx->pc = 0x142f64u;
    // NOP
    // 0x142f68: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x142F68u;
    {
        const bool branch_taken_0x142f68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F68u;
        // 0x142f6c: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f68) {
            ctx->pc = 0x142FC8u;
            goto label_142fc8;
        }
    }
    ctx->pc = 0x142F70u;
    // 0x142f70: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x142f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x142f74: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x142f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x142f78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x142f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x142f7c: 0x8e4501f4  lw          $a1, 0x1F4($s2)
    ctx->pc = 0x142f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x142f80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x142f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x142f84: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x142f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x142f88: 0xae430090  sw          $v1, 0x90($s2)
    ctx->pc = 0x142f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
    // 0x142f8c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x142f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142f90: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x142f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x142f94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x142F94u;
    {
        const bool branch_taken_0x142f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F94u;
        // 0x142f98: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f94) {
            ctx->pc = 0x142FC4u;
            goto label_142fc4;
        }
    }
    ctx->pc = 0x142F9Cu;
label_142f9c:
    // 0x142f9c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x142f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x142fa0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x142fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x142fa4: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x142fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x142fa8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x142fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x142fac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x142fb0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x142fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x142fb4: 0x8e4301e4  lw          $v1, 0x1E4($s2)
    ctx->pc = 0x142fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x142fb8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x142fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x142fbc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x142fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x142fc0: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x142fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_142fc4:
    // 0x142fc4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x142fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_142fc8:
    // 0x142fc8: 0x24709b70  addiu       $s0, $v1, -0x6490
    ctx->pc = 0x142fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x142fcc: 0xc07eb2c  jal         func_1FACB0
    ctx->pc = 0x142FCCu;
    SET_GPR_U32(ctx, 31, 0x142FD4u);
    ctx->pc = 0x142FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142FCCu;
    // 0x142fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACB0u, 0x142FCCu, 0x142FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FD4u;
label_142fd4:
    // 0x142fd4: 0xc07eb20  jal         func_1FAC80
    ctx->pc = 0x142FD4u;
    SET_GPR_U32(ctx, 31, 0x142FDCu);
    ctx->pc = 0x142FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142FD4u;
    // 0x142fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x142FD4u, 0x142FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FDCu;
label_142fdc:
    // 0x142fdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x142fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142fe0: 0x0  nop
    ctx->pc = 0x142fe0u;
    // NOP
    // 0x142fe4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x142fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x142fe8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x142fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x142fec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142ff0: 0x3c014382  lui         $at, 0x4382
    ctx->pc = 0x142ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17282 << 16));
    // 0x142ff4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x142ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ffc: 0x3c014026  lui         $at, 0x4026
    ctx->pc = 0x142ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16422 << 16));
    // 0x143000: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x143000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x143004: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x143004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x143008: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x143008u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14300c: gauge width fix (0.75f in 16:9, 1.0f in 4:3)
    ctx->pc = 0x14300cu;
    {
        static const bool s_isWidescreen = []() {
            const char* env = std::getenv("GODHAND_ASPECT_RATIO_IDX");
            return !env || std::strcmp(env, "0") == 0;
        }();
        // 0x3F400000 = 0.75f (16:9 Gauge fix: 1.0f * 3/4)
        // 0x3F800000 = 1.0f (4:3 Original)
        const uint32_t atVal = s_isWidescreen ? 0x3F400000u : 0x3F800000u;
        SET_GPR_S32(ctx, 1, static_cast<int32_t>(atVal));
    }
    // 0x143010: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x143010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x143014: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x143014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x143018: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x143018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x14301c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x14301cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x143020: 0x0  nop
    ctx->pc = 0x143020u;
    // NOP
    // 0x143024: 0x0  nop
    ctx->pc = 0x143024u;
    // NOP
    // 0x143028: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x143028u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x14302c: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x14302cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x143030: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x143030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x143034: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x143034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x143038: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x143038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14303c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x14303cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x143040: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x143040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x143044: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x143044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x143048: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x143048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14304c: 0xc440b000  lwc1        $f0, -0x5000($v0)
    ctx->pc = 0x14304cu;
    { uint32_t bits = FAST_READ32(0x5CB000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143050: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x143050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x143054: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x143054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x143058: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x143058u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x14305c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14305cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x143060: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x143060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x143064: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x143064u;
    SET_GPR_U32(ctx, 31, 0x14306Cu);
    ctx->pc = 0x143068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143064u;
    // 0x143068: 0xe4400040  swc1        $f0, 0x40($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x143064u, 0x14306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14306Cu;
label_14306c:
    // 0x14306c: 0xae420094  sw          $v0, 0x94($s2)
    ctx->pc = 0x14306cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    // 0x143070: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x143070u;
    SET_GPR_U32(ctx, 31, 0x143078u);
    ctx->pc = 0x143074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143070u;
    // 0x143074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x143070u, 0x143078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143078u;
label_143078:
    // 0x143078: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x143078u;
    SET_GPR_U32(ctx, 31, 0x143080u);
    ctx->pc = 0x14307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143078u;
    // 0x14307c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x143078u, 0x143080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143080u;
label_143080:
    // 0x143080: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x143080u;
    SET_GPR_U32(ctx, 31, 0x143088u);
    ctx->pc = 0x143084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143080u;
    // 0x143084: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x143080u, 0x143088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143088u;
label_143088:
    // 0x143088: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x143088u;
    SET_GPR_U32(ctx, 31, 0x143090u);
    ctx->pc = 0x14308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143088u;
    // 0x14308c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x143088u, 0x143090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143090u;
label_143090:
    // 0x143090: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x143090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x143094: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x143094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x143098: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x143098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14309c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x14309cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1430a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1430a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1430a4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1430a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1430a8: 0xae430090  sw          $v1, 0x90($s2)
    ctx->pc = 0x1430a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
    // 0x1430ac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1430acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1430b0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1430b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1430b4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1430b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1430b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1430b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1430bc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1430bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1430c0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1430c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1430c4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1430c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1430c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1430c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1430cc: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x1430ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1430d0: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x1430d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1430d4: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1430d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1430d8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1430d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1430dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1430DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1430E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430DCu;
        // 0x1430e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1430DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1430E4u;
    // 0x1430e4: 0x0  nop
    ctx->pc = 0x1430e4u;
    // NOP
    ctx->pc = 0x1430e8u;
}
