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

// Function: func_00283688
// Address: 0x283688 - 0x283968
void func_00283688_0x283688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00283688_0x283688");
#endif

    switch (ctx->pc) {
        case 0x283688u: goto label_283688;
        case 0x28368cu: goto label_28368c;
        case 0x283690u: goto label_283690;
        case 0x283694u: goto label_283694;
        case 0x283698u: goto label_283698;
        case 0x28369cu: goto label_28369c;
        case 0x2836a0u: goto label_2836a0;
        case 0x2836a4u: goto label_2836a4;
        case 0x2836a8u: goto label_2836a8;
        case 0x2836acu: goto label_2836ac;
        case 0x2836b0u: goto label_2836b0;
        case 0x2836b4u: goto label_2836b4;
        case 0x2836b8u: goto label_2836b8;
        case 0x2836bcu: goto label_2836bc;
        case 0x2836c0u: goto label_2836c0;
        case 0x2836c4u: goto label_2836c4;
        case 0x2836c8u: goto label_2836c8;
        case 0x2836ccu: goto label_2836cc;
        case 0x2836d0u: goto label_2836d0;
        case 0x2836d4u: goto label_2836d4;
        case 0x2836d8u: goto label_2836d8;
        case 0x2836dcu: goto label_2836dc;
        case 0x2836e0u: goto label_2836e0;
        case 0x2836e4u: goto label_2836e4;
        case 0x2836e8u: goto label_2836e8;
        case 0x2836ecu: goto label_2836ec;
        case 0x2836f0u: goto label_2836f0;
        case 0x2836f4u: goto label_2836f4;
        case 0x2836f8u: goto label_2836f8;
        case 0x2836fcu: goto label_2836fc;
        case 0x283700u: goto label_283700;
        case 0x283704u: goto label_283704;
        case 0x283708u: goto label_283708;
        case 0x28370cu: goto label_28370c;
        case 0x283710u: goto label_283710;
        case 0x283714u: goto label_283714;
        case 0x283718u: goto label_283718;
        case 0x28371cu: goto label_28371c;
        case 0x283720u: goto label_283720;
        case 0x283724u: goto label_283724;
        case 0x283728u: goto label_283728;
        case 0x28372cu: goto label_28372c;
        case 0x283730u: goto label_283730;
        case 0x283734u: goto label_283734;
        case 0x283738u: goto label_283738;
        case 0x28373cu: goto label_28373c;
        case 0x283740u: goto label_283740;
        case 0x283744u: goto label_283744;
        case 0x283748u: goto label_283748;
        case 0x28374cu: goto label_28374c;
        case 0x283750u: goto label_283750;
        case 0x283754u: goto label_283754;
        case 0x283758u: goto label_283758;
        case 0x28375cu: goto label_28375c;
        case 0x283760u: goto label_283760;
        case 0x283764u: goto label_283764;
        case 0x283768u: goto label_283768;
        case 0x28376cu: goto label_28376c;
        case 0x283770u: goto label_283770;
        case 0x283774u: goto label_283774;
        case 0x283778u: goto label_283778;
        case 0x28377cu: goto label_28377c;
        case 0x283780u: goto label_283780;
        case 0x283784u: goto label_283784;
        case 0x283788u: goto label_283788;
        case 0x28378cu: goto label_28378c;
        case 0x283790u: goto label_283790;
        case 0x283794u: goto label_283794;
        case 0x283798u: goto label_283798;
        case 0x28379cu: goto label_28379c;
        case 0x2837a0u: goto label_2837a0;
        case 0x2837a4u: goto label_2837a4;
        case 0x2837a8u: goto label_2837a8;
        case 0x2837acu: goto label_2837ac;
        case 0x2837b0u: goto label_2837b0;
        case 0x2837b4u: goto label_2837b4;
        case 0x2837b8u: goto label_2837b8;
        case 0x2837bcu: goto label_2837bc;
        case 0x2837c0u: goto label_2837c0;
        case 0x2837c4u: goto label_2837c4;
        case 0x2837c8u: goto label_2837c8;
        case 0x2837ccu: goto label_2837cc;
        case 0x2837d0u: goto label_2837d0;
        case 0x2837d4u: goto label_2837d4;
        case 0x2837d8u: goto label_2837d8;
        case 0x2837dcu: goto label_2837dc;
        case 0x2837e0u: goto label_2837e0;
        case 0x2837e4u: goto label_2837e4;
        case 0x2837e8u: goto label_2837e8;
        case 0x2837ecu: goto label_2837ec;
        case 0x2837f0u: goto label_2837f0;
        case 0x2837f4u: goto label_2837f4;
        case 0x2837f8u: goto label_2837f8;
        case 0x2837fcu: goto label_2837fc;
        case 0x283800u: goto label_283800;
        case 0x283804u: goto label_283804;
        case 0x283808u: goto label_283808;
        case 0x28380cu: goto label_28380c;
        case 0x283810u: goto label_283810;
        case 0x283814u: goto label_283814;
        case 0x283818u: goto label_283818;
        case 0x28381cu: goto label_28381c;
        case 0x283820u: goto label_283820;
        case 0x283824u: goto label_283824;
        case 0x283828u: goto label_283828;
        case 0x28382cu: goto label_28382c;
        case 0x283830u: goto label_283830;
        case 0x283834u: goto label_283834;
        case 0x283838u: goto label_283838;
        case 0x28383cu: goto label_28383c;
        case 0x283840u: goto label_283840;
        case 0x283844u: goto label_283844;
        case 0x283848u: goto label_283848;
        case 0x28384cu: goto label_28384c;
        case 0x283850u: goto label_283850;
        case 0x283854u: goto label_283854;
        case 0x283858u: goto label_283858;
        case 0x28385cu: goto label_28385c;
        case 0x283860u: goto label_283860;
        case 0x283864u: goto label_283864;
        case 0x283868u: goto label_283868;
        case 0x28386cu: goto label_28386c;
        case 0x283870u: goto label_283870;
        case 0x283874u: goto label_283874;
        case 0x283878u: goto label_283878;
        case 0x28387cu: goto label_28387c;
        case 0x283880u: goto label_283880;
        case 0x283884u: goto label_283884;
        case 0x283888u: goto label_283888;
        case 0x28388cu: goto label_28388c;
        case 0x283890u: goto label_283890;
        case 0x283894u: goto label_283894;
        case 0x283898u: goto label_283898;
        case 0x28389cu: goto label_28389c;
        case 0x2838a0u: goto label_2838a0;
        case 0x2838a4u: goto label_2838a4;
        case 0x2838a8u: goto label_2838a8;
        case 0x2838acu: goto label_2838ac;
        case 0x2838b0u: goto label_2838b0;
        case 0x2838b4u: goto label_2838b4;
        case 0x2838b8u: goto label_2838b8;
        case 0x2838bcu: goto label_2838bc;
        case 0x2838c0u: goto label_2838c0;
        case 0x2838c4u: goto label_2838c4;
        case 0x2838c8u: goto label_2838c8;
        case 0x2838ccu: goto label_2838cc;
        case 0x2838d0u: goto label_2838d0;
        case 0x2838d4u: goto label_2838d4;
        case 0x2838d8u: goto label_2838d8;
        case 0x2838dcu: goto label_2838dc;
        case 0x2838e0u: goto label_2838e0;
        case 0x2838e4u: goto label_2838e4;
        case 0x2838e8u: goto label_2838e8;
        case 0x2838ecu: goto label_2838ec;
        case 0x2838f0u: goto label_2838f0;
        case 0x2838f4u: goto label_2838f4;
        case 0x2838f8u: goto label_2838f8;
        case 0x2838fcu: goto label_2838fc;
        case 0x283900u: goto label_283900;
        case 0x283904u: goto label_283904;
        case 0x283908u: goto label_283908;
        case 0x28390cu: goto label_28390c;
        case 0x283910u: goto label_283910;
        case 0x283914u: goto label_283914;
        case 0x283918u: goto label_283918;
        case 0x28391cu: goto label_28391c;
        case 0x283920u: goto label_283920;
        case 0x283924u: goto label_283924;
        case 0x283928u: goto label_283928;
        case 0x28392cu: goto label_28392c;
        case 0x283930u: goto label_283930;
        case 0x283934u: goto label_283934;
        case 0x283938u: goto label_283938;
        case 0x28393cu: goto label_28393c;
        case 0x283940u: goto label_283940;
        case 0x283944u: goto label_283944;
        case 0x283948u: goto label_283948;
        case 0x28394cu: goto label_28394c;
        case 0x283950u: goto label_283950;
        case 0x283954u: goto label_283954;
        case 0x283958u: goto label_283958;
        case 0x28395cu: goto label_28395c;
        case 0x283960u: goto label_283960;
        case 0x283964u: goto label_283964;
        default: break;
    }

    ctx->pc = 0x283688u;

label_283688:
    // 0x283688: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x283688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_28368c:
    // 0x28368c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28368cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_283690:
    // 0x283690: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x283690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_283694:
    // 0x283694: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x283694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_283698:
    // 0x283698: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x283698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_28369c:
    // 0x28369c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28369cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2836a0:
    // 0x2836a0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2836a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2836a4:
    // 0x2836a4: 0x146000ac  bnez        $v1, . + 4 + (0xAC << 2)
label_2836a8:
    if (ctx->pc == 0x2836A8u) {
        ctx->pc = 0x2836A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836A4u;
        // 0x2836a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2836ACu;
        goto label_2836ac;
    }
    ctx->pc = 0x2836A4u;
    {
        const bool branch_taken_0x2836a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2836A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836A4u;
        // 0x2836a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836a4) {
            ctx->pc = 0x283958u;
            goto label_283958;
        }
    }
    ctx->pc = 0x2836ACu;
label_2836ac:
    // 0x2836ac: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x2836acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_2836b0:
    // 0x2836b0: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
label_2836b4:
    if (ctx->pc == 0x2836B4u) {
        ctx->pc = 0x2836B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836B0u;
        // 0x2836b4: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2836B8u;
        goto label_2836b8;
    }
    ctx->pc = 0x2836B0u;
    {
        const bool branch_taken_0x2836b0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2836B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836B0u;
        // 0x2836b4: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836b0) {
            ctx->pc = 0x2836E0u;
            goto label_2836e0;
        }
    }
    ctx->pc = 0x2836B8u;
label_2836b8:
    // 0x2836b8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2836bc:
    if (ctx->pc == 0x2836BCu) {
        ctx->pc = 0x2836BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836B8u;
        // 0x2836bc: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2836C0u;
        goto label_2836c0;
    }
    ctx->pc = 0x2836B8u;
    {
        const bool branch_taken_0x2836b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2836b8) {
            ctx->pc = 0x2836BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2836B8u;
            // 0x2836bc: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2836E4u;
            goto label_2836e4;
        }
    }
    ctx->pc = 0x2836C0u;
label_2836c0:
    // 0x2836c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2836c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2836c4:
    // 0x2836c4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_2836c8:
    if (ctx->pc == 0x2836C8u) {
        ctx->pc = 0x2836C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836C4u;
        // 0x2836c8: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2836CCu;
        goto label_2836cc;
    }
    ctx->pc = 0x2836C4u;
    {
        const bool branch_taken_0x2836c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2836c4) {
            ctx->pc = 0x2836C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2836C4u;
            // 0x2836c8: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2836E4u;
            goto label_2836e4;
        }
    }
    ctx->pc = 0x2836CCu;
label_2836cc:
    // 0x2836cc: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x2836ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_2836d0:
    // 0x2836d0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2836d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2836d4:
    // 0x2836d4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2836d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2836d8:
    // 0x2836d8: 0x60f809  jalr        $v1
label_2836dc:
    if (ctx->pc == 0x2836DCu) {
        ctx->pc = 0x2836DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836D8u;
        // 0x2836dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2836E0u;
        goto label_2836e0;
    }
    ctx->pc = 0x2836D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2836E0u);
        ctx->pc = 0x2836DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836D8u;
        // 0x2836dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2836D8u, 0x2836E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2836E0u;
label_2836e0:
    // 0x2836e0: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x2836e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_2836e4:
    // 0x2836e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2836e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2836e8:
    // 0x2836e8: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
label_2836ec:
    if (ctx->pc == 0x2836ECu) {
        ctx->pc = 0x2836ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836E8u;
        // 0x2836ec: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2836F0u;
        goto label_2836f0;
    }
    ctx->pc = 0x2836E8u;
    {
        const bool branch_taken_0x2836e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2836e8) {
            ctx->pc = 0x2836ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2836E8u;
            // 0x2836ec: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283818u;
            goto label_283818;
        }
    }
    ctx->pc = 0x2836F0u;
label_2836f0:
    // 0x2836f0: 0x8e0221b0  lw          $v0, 0x21B0($s0)
    ctx->pc = 0x2836f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_2836f4:
    // 0x2836f4: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_2836f8:
    if (ctx->pc == 0x2836F8u) {
        ctx->pc = 0x2836FCu;
        goto label_2836fc;
    }
    ctx->pc = 0x2836F4u;
    {
        const bool branch_taken_0x2836f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2836f4) {
            ctx->pc = 0x283948u;
            goto label_283948;
        }
    }
    ctx->pc = 0x2836FCu;
label_2836fc:
    // 0x2836fc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2836fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_283700:
    // 0x283700: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x283700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_283704:
    // 0x283704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_283708:
    if (ctx->pc == 0x283708u) {
        ctx->pc = 0x283708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283704u;
        // 0x283708: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28370Cu;
        goto label_28370c;
    }
    ctx->pc = 0x283704u;
    {
        const bool branch_taken_0x283704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283704u;
        // 0x283708: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283704) {
            ctx->pc = 0x283718u;
            goto label_283718;
        }
    }
    ctx->pc = 0x28370Cu;
label_28370c:
    // 0x28370c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x28370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_283710:
    // 0x283710: 0x10000002  b           . + 4 + (0x2 << 2)
label_283714:
    if (ctx->pc == 0x283714u) {
        ctx->pc = 0x283714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283710u;
        // 0x283714: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283718u;
        goto label_283718;
    }
    ctx->pc = 0x283710u;
    {
        const bool branch_taken_0x283710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283710u;
        // 0x283714: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283710) {
            ctx->pc = 0x28371Cu;
            goto label_28371c;
        }
    }
    ctx->pc = 0x283718u;
label_283718:
    // 0x283718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x283718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28371c:
    // 0x28371c: 0x8e0521b0  lw          $a1, 0x21B0($s0)
    ctx->pc = 0x28371cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_283720:
    // 0x283720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283724:
    // 0x283724: 0x8e0421b4  lw          $a0, 0x21B4($s0)
    ctx->pc = 0x283724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8628)));
label_283728:
    // 0x283728: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x283728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
label_28372c:
    // 0x28372c: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_283730:
    if (ctx->pc == 0x283730u) {
        ctx->pc = 0x283730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28372Cu;
        // 0x283730: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283734u;
        goto label_283734;
    }
    ctx->pc = 0x28372Cu;
    {
        const bool branch_taken_0x28372c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x283730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28372Cu;
        // 0x283730: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28372c) {
            ctx->pc = 0x283738u;
            goto label_283738;
        }
    }
    ctx->pc = 0x283734u;
label_283734:
    // 0x283734: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x283734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_283738:
    // 0x283738: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x283738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_28373c:
    // 0x28373c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_283740:
    if (ctx->pc == 0x283740u) {
        ctx->pc = 0x283740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28373Cu;
        // 0x283740: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283744u;
        goto label_283744;
    }
    ctx->pc = 0x28373Cu;
    {
        const bool branch_taken_0x28373c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28373Cu;
        // 0x283740: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28373c) {
            ctx->pc = 0x283754u;
            goto label_283754;
        }
    }
    ctx->pc = 0x283744u;
label_283744:
    // 0x283744: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x283744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
label_283748:
    // 0x283748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28374c:
    // 0x28374c: 0x10000002  b           . + 4 + (0x2 << 2)
label_283750:
    if (ctx->pc == 0x283750u) {
        ctx->pc = 0x283750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28374Cu;
        // 0x283750: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283754u;
        goto label_283754;
    }
    ctx->pc = 0x28374Cu;
    {
        const bool branch_taken_0x28374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28374Cu;
        // 0x283750: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28374c) {
            ctx->pc = 0x283758u;
            goto label_283758;
        }
    }
    ctx->pc = 0x283754u;
label_283754:
    // 0x283754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283758:
    // 0x283758: 0x50c0002f  beql        $a2, $zero, . + 4 + (0x2F << 2)
label_28375c:
    if (ctx->pc == 0x28375Cu) {
        ctx->pc = 0x28375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283758u;
        // 0x28375c: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283760u;
        goto label_283760;
    }
    ctx->pc = 0x283758u;
    {
        const bool branch_taken_0x283758 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x283758) {
            ctx->pc = 0x28375Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283758u;
            // 0x28375c: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283818u;
            goto label_283818;
        }
    }
    ctx->pc = 0x283760u;
label_283760:
    // 0x283760: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_283764:
    if (ctx->pc == 0x283764u) {
        ctx->pc = 0x283764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283760u;
        // 0x283764: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283768u;
        goto label_283768;
    }
    ctx->pc = 0x283760u;
    {
        const bool branch_taken_0x283760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283760u;
        // 0x283764: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283760) {
            ctx->pc = 0x283814u;
            goto label_283814;
        }
    }
    ctx->pc = 0x283768u;
label_283768:
    // 0x283768: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x283768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_28376c:
    // 0x28376c: 0x8cc300f0  lw          $v1, 0xF0($a2)
    ctx->pc = 0x28376cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_283770:
    // 0x283770: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x283770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_283774:
    // 0x283774: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x283774u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_283778:
    // 0x283778: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x283778u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_28377c:
    // 0x28377c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28377cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_283780:
    // 0x283780: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x283780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_283784:
    // 0x283784: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x283784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_283788:
    // 0x283788: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x283788u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28378c:
    // 0x28378c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x28378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_283790:
    // 0x283790: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
label_283794:
    if (ctx->pc == 0x283794u) {
        ctx->pc = 0x283794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283790u;
        // 0x283794: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x283798u;
        goto label_283798;
    }
    ctx->pc = 0x283790u;
    {
        const bool branch_taken_0x283790 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x283794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283790u;
        // 0x283794: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283790) {
            ctx->pc = 0x2837ACu;
            goto label_2837ac;
        }
    }
    ctx->pc = 0x283798u;
label_283798:
    // 0x283798: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x283798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28379c:
    // 0x28379c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x28379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2837a0:
    // 0x2837a0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2837a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2837a4:
    // 0x2837a4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2837a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2837a8:
    // 0x2837a8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2837a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2837ac:
    // 0x2837ac: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2837acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_2837b0:
    // 0x2837b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2837b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2837b4:
    // 0x2837b4: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x2837b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_2837b8:
    // 0x2837b8: 0x26052130  addiu       $a1, $s0, 0x2130
    ctx->pc = 0x2837b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8496));
label_2837bc:
    // 0x2837bc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2837c0:
    if (ctx->pc == 0x2837C0u) {
        ctx->pc = 0x2837C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837BCu;
        // 0x2837c0: 0x260605b0  addiu       $a2, $s0, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2837C4u;
        goto label_2837c4;
    }
    ctx->pc = 0x2837BCu;
    {
        const bool branch_taken_0x2837bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837BCu;
        // 0x2837c0: 0x260605b0  addiu       $a2, $s0, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837bc) {
            ctx->pc = 0x28380Cu;
            goto label_28380c;
        }
    }
    ctx->pc = 0x2837C4u;
label_2837c4:
    // 0x2837c4: 0x0  nop
    ctx->pc = 0x2837c4u;
    // NOP
label_2837c8:
    // 0x2837c8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2837c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2837cc:
    // 0x2837cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2837ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2837d0:
    // 0x2837d0: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x2837d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2837d4:
    // 0x2837d4: 0xc46200b4  lwc1        $f2, 0xB4($v1)
    ctx->pc = 0x2837d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2837d8:
    // 0x2837d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2837d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2837dc:
    // 0x2837dc: 0xc46300b8  lwc1        $f3, 0xB8($v1)
    ctx->pc = 0x2837dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2837e0:
    // 0x2837e0: 0xe46100b0  swc1        $f1, 0xB0($v1)
    ctx->pc = 0x2837e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
label_2837e4:
    // 0x2837e4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2837e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2837e8:
    // 0x2837e8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2837e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2837ec:
    // 0x2837ec: 0xe46200b4  swc1        $f2, 0xB4($v1)
    ctx->pc = 0x2837ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
label_2837f0:
    // 0x2837f0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2837f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2837f4:
    // 0x2837f4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2837f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2837f8:
    // 0x2837f8: 0xe46300b8  swc1        $f3, 0xB8($v1)
    ctx->pc = 0x2837f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
label_2837fc:
    // 0x2837fc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2837fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_283800:
    // 0x283800: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x283800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_283804:
    // 0x283804: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_283808:
    if (ctx->pc == 0x283808u) {
        ctx->pc = 0x283808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283804u;
        // 0x283808: 0x8c630144  lw          $v1, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28380Cu;
        goto label_28380c;
    }
    ctx->pc = 0x283804u;
    {
        const bool branch_taken_0x283804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283804u;
        // 0x283808: 0x8c630144  lw          $v1, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283804) {
            ctx->pc = 0x2837C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2837c8;
        }
    }
    ctx->pc = 0x28380Cu;
label_28380c:
    // 0x28380c: 0xc041f1a  jal         func_107C68
label_283810:
    if (ctx->pc == 0x283810u) {
        ctx->pc = 0x283810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28380Cu;
        // 0x283810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283814u;
        goto label_283814;
    }
    ctx->pc = 0x28380Cu;
    SET_GPR_U32(ctx, 31, 0x283814u);
    ctx->pc = 0x283810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28380Cu;
    // 0x283810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C68u, 0x28380Cu, 0x283814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283814u;
label_283814:
    // 0x283814: 0x8e0321b0  lw          $v1, 0x21B0($s0)
    ctx->pc = 0x283814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_283818:
    // 0x283818: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
label_28381c:
    if (ctx->pc == 0x28381Cu) {
        ctx->pc = 0x28381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283818u;
        // 0x28381c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283820u;
        goto label_283820;
    }
    ctx->pc = 0x283818u;
    {
        const bool branch_taken_0x283818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283818u;
        // 0x28381c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283818) {
            ctx->pc = 0x283948u;
            goto label_283948;
        }
    }
    ctx->pc = 0x283820u;
label_283820:
    // 0x283820: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x283820u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
label_283824:
    // 0x283824: 0x8e0421b4  lw          $a0, 0x21B4($s0)
    ctx->pc = 0x283824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8628)));
label_283828:
    // 0x283828: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_28382c:
    if (ctx->pc == 0x28382Cu) {
        ctx->pc = 0x28382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283828u;
        // 0x28382c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283830u;
        goto label_283830;
    }
    ctx->pc = 0x283828u;
    {
        const bool branch_taken_0x283828 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x28382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283828u;
        // 0x28382c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283828) {
            ctx->pc = 0x283834u;
            goto label_283834;
        }
    }
    ctx->pc = 0x283830u;
label_283830:
    // 0x283830: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x283830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_283834:
    // 0x283834: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x283834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_283838:
    // 0x283838: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_28383c:
    if (ctx->pc == 0x28383Cu) {
        ctx->pc = 0x28383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283838u;
        // 0x28383c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283840u;
        goto label_283840;
    }
    ctx->pc = 0x283838u;
    {
        const bool branch_taken_0x283838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283838u;
        // 0x28383c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283838) {
            ctx->pc = 0x283850u;
            goto label_283850;
        }
    }
    ctx->pc = 0x283840u;
label_283840:
    // 0x283840: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x283840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
label_283844:
    // 0x283844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_283848:
    // 0x283848: 0x10000002  b           . + 4 + (0x2 << 2)
label_28384c:
    if (ctx->pc == 0x28384Cu) {
        ctx->pc = 0x28384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283848u;
        // 0x28384c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283850u;
        goto label_283850;
    }
    ctx->pc = 0x283848u;
    {
        const bool branch_taken_0x283848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283848u;
        // 0x28384c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283848) {
            ctx->pc = 0x283854u;
            goto label_283854;
        }
    }
    ctx->pc = 0x283850u;
label_283850:
    // 0x283850: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x283850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283854:
    // 0x283854: 0x8e0221b0  lw          $v0, 0x21B0($s0)
    ctx->pc = 0x283854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_283858:
    // 0x283858: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x283858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_28385c:
    // 0x28385c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x28385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_283860:
    // 0x283860: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_283864:
    if (ctx->pc == 0x283864u) {
        ctx->pc = 0x283868u;
        goto label_283868;
    }
    ctx->pc = 0x283860u;
    {
        const bool branch_taken_0x283860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x283860) {
            ctx->pc = 0x283880u;
            goto label_283880;
        }
    }
    ctx->pc = 0x283868u;
label_283868:
    // 0x283868: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x283868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28386c:
    // 0x28386c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28386cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_283870:
    // 0x283870: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x283870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_283874:
    // 0x283874: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x283874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_283878:
    // 0x283878: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x283878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28387c:
    // 0x28387c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28387cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_283880:
    // 0x283880: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_283884:
    if (ctx->pc == 0x283884u) {
        ctx->pc = 0x283884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283880u;
        // 0x283884: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283888u;
        goto label_283888;
    }
    ctx->pc = 0x283880u;
    {
        const bool branch_taken_0x283880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x283884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283880u;
        // 0x283884: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283880) {
            ctx->pc = 0x2838D0u;
            goto label_2838d0;
        }
    }
    ctx->pc = 0x283888u;
label_283888:
    // 0x283888: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x283888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_28388c:
    // 0x28388c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_283890:
    if (ctx->pc == 0x283890u) {
        ctx->pc = 0x283890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28388Cu;
        // 0x283890: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283894u;
        goto label_283894;
    }
    ctx->pc = 0x28388Cu;
    {
        const bool branch_taken_0x28388c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28388Cu;
        // 0x283890: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28388c) {
            ctx->pc = 0x2838A0u;
            goto label_2838a0;
        }
    }
    ctx->pc = 0x283894u;
label_283894:
    // 0x283894: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x283894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_283898:
    // 0x283898: 0x10000002  b           . + 4 + (0x2 << 2)
label_28389c:
    if (ctx->pc == 0x28389Cu) {
        ctx->pc = 0x28389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283898u;
        // 0x28389c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2838A0u;
        goto label_2838a0;
    }
    ctx->pc = 0x283898u;
    {
        const bool branch_taken_0x283898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283898u;
        // 0x28389c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283898) {
            ctx->pc = 0x2838A4u;
            goto label_2838a4;
        }
    }
    ctx->pc = 0x2838A0u;
label_2838a0:
    // 0x2838a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2838a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2838a4:
    // 0x2838a4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x2838a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_2838a8:
    // 0x2838a8: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x2838a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_2838ac:
    // 0x2838ac: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_2838b0:
    if (ctx->pc == 0x2838B0u) {
        ctx->pc = 0x2838B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838ACu;
        // 0x2838b0: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2838B4u;
        goto label_2838b4;
    }
    ctx->pc = 0x2838ACu;
    {
        const bool branch_taken_0x2838ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2838ac) {
            ctx->pc = 0x2838B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2838ACu;
            // 0x2838b0: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2838D0u;
            goto label_2838d0;
        }
    }
    ctx->pc = 0x2838B4u;
label_2838b4:
    // 0x2838b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2838b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2838b8:
    // 0x2838b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2838b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2838bc:
    // 0x2838bc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2838bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2838c0:
    // 0x2838c0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2838c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2838c4:
    // 0x2838c4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2838c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2838c8:
    // 0x2838c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2838c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2838cc:
    // 0x2838cc: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x2838ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_2838d0:
    // 0x2838d0: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x2838d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_2838d4:
    // 0x2838d4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_2838d8:
    if (ctx->pc == 0x2838D8u) {
        ctx->pc = 0x2838D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838D4u;
        // 0x2838d8: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2838DCu;
        goto label_2838dc;
    }
    ctx->pc = 0x2838D4u;
    {
        const bool branch_taken_0x2838d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2838d4) {
            ctx->pc = 0x2838D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2838D4u;
            // 0x2838d8: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2838F8u;
            goto label_2838f8;
        }
    }
    ctx->pc = 0x2838DCu;
label_2838dc:
    // 0x2838dc: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x2838dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2838e0:
    // 0x2838e0: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x2838e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_2838e4:
    // 0x2838e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2838e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2838e8:
    // 0x2838e8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2838e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2838ec:
    // 0x2838ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2838ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2838f0:
    // 0x2838f0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2838f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2838f4:
    // 0x2838f4: 0x8e0421b0  lw          $a0, 0x21B0($s0)
    ctx->pc = 0x2838f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_2838f8:
    // 0x2838f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2838f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2838fc:
    // 0x2838fc: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x2838fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_283900:
    // 0x283900: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x283900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_283904:
    // 0x283904: 0xc480024c  lwc1        $f0, 0x24C($a0)
    ctx->pc = 0x283904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_283908:
    // 0x283908: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x283908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_28390c:
    // 0x28390c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28390cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_283910:
    // 0x283910: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x283910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_283914:
    // 0x283914: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x283914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
label_283918:
    // 0x283918: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x283918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_28391c:
    // 0x28391c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x28391cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_283920:
    // 0x283920: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x283920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_283924:
    // 0x283924: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x283924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_283928:
    // 0x283928: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x283928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_28392c:
    // 0x28392c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x28392cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_283930:
    // 0x283930: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_283934:
    if (ctx->pc == 0x283934u) {
        ctx->pc = 0x283934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283930u;
        // 0x283934: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283938u;
        goto label_283938;
    }
    ctx->pc = 0x283930u;
    {
        const bool branch_taken_0x283930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283930u;
        // 0x283934: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283930) {
            ctx->pc = 0x283944u;
            goto label_283944;
        }
    }
    ctx->pc = 0x283938u;
label_283938:
    // 0x283938: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x283938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_28393c:
    // 0x28393c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28393cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_283940:
    // 0x283940: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x283940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_283944:
    // 0x283944: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x283944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_283948:
    // 0x283948: 0xc0527ae  jal         func_149EB8
label_28394c:
    if (ctx->pc == 0x28394Cu) {
        ctx->pc = 0x28394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283948u;
        // 0x28394c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283950u;
        goto label_283950;
    }
    ctx->pc = 0x283948u;
    SET_GPR_U32(ctx, 31, 0x283950u);
    ctx->pc = 0x28394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283948u;
    // 0x28394c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x283948u, 0x283950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283950u;
label_283950:
    // 0x283950: 0xc0a0eaa  jal         func_283AA8
label_283954:
    if (ctx->pc == 0x283954u) {
        ctx->pc = 0x283954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283950u;
        // 0x283954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283958u;
        goto label_283958;
    }
    ctx->pc = 0x283950u;
    SET_GPR_U32(ctx, 31, 0x283958u);
    ctx->pc = 0x283954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283950u;
    // 0x283954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283AA8u, 0x283950u, 0x283958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283958u;
label_283958:
    // 0x283958: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x283958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28395c:
    // 0x28395c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28395cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_283960:
    // 0x283960: 0x3e00008  jr          $ra
label_283964:
    if (ctx->pc == 0x283964u) {
        ctx->pc = 0x283964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283960u;
        // 0x283964: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283968u;
        goto label_fallthrough_0x283960;
    }
    ctx->pc = 0x283960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283960u;
        // 0x283964: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x283960:
    ctx->pc = 0x283968u;
}
