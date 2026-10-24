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

// Function: MoveEmitter
// Address: 0x300628 - 0x300830
void MoveEmitter_0x300628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveEmitter_0x300628");
#endif

    switch (ctx->pc) {
        case 0x300628u: goto label_300628;
        case 0x30062cu: goto label_30062c;
        case 0x300630u: goto label_300630;
        case 0x300634u: goto label_300634;
        case 0x300638u: goto label_300638;
        case 0x30063cu: goto label_30063c;
        case 0x300640u: goto label_300640;
        case 0x300644u: goto label_300644;
        case 0x300648u: goto label_300648;
        case 0x30064cu: goto label_30064c;
        case 0x300650u: goto label_300650;
        case 0x300654u: goto label_300654;
        case 0x300658u: goto label_300658;
        case 0x30065cu: goto label_30065c;
        case 0x300660u: goto label_300660;
        case 0x300664u: goto label_300664;
        case 0x300668u: goto label_300668;
        case 0x30066cu: goto label_30066c;
        case 0x300670u: goto label_300670;
        case 0x300674u: goto label_300674;
        case 0x300678u: goto label_300678;
        case 0x30067cu: goto label_30067c;
        case 0x300680u: goto label_300680;
        case 0x300684u: goto label_300684;
        case 0x300688u: goto label_300688;
        case 0x30068cu: goto label_30068c;
        case 0x300690u: goto label_300690;
        case 0x300694u: goto label_300694;
        case 0x300698u: goto label_300698;
        case 0x30069cu: goto label_30069c;
        case 0x3006a0u: goto label_3006a0;
        case 0x3006a4u: goto label_3006a4;
        case 0x3006a8u: goto label_3006a8;
        case 0x3006acu: goto label_3006ac;
        case 0x3006b0u: goto label_3006b0;
        case 0x3006b4u: goto label_3006b4;
        case 0x3006b8u: goto label_3006b8;
        case 0x3006bcu: goto label_3006bc;
        case 0x3006c0u: goto label_3006c0;
        case 0x3006c4u: goto label_3006c4;
        case 0x3006c8u: goto label_3006c8;
        case 0x3006ccu: goto label_3006cc;
        case 0x3006d0u: goto label_3006d0;
        case 0x3006d4u: goto label_3006d4;
        case 0x3006d8u: goto label_3006d8;
        case 0x3006dcu: goto label_3006dc;
        case 0x3006e0u: goto label_3006e0;
        case 0x3006e4u: goto label_3006e4;
        case 0x3006e8u: goto label_3006e8;
        case 0x3006ecu: goto label_3006ec;
        case 0x3006f0u: goto label_3006f0;
        case 0x3006f4u: goto label_3006f4;
        case 0x3006f8u: goto label_3006f8;
        case 0x3006fcu: goto label_3006fc;
        case 0x300700u: goto label_300700;
        case 0x300704u: goto label_300704;
        case 0x300708u: goto label_300708;
        case 0x30070cu: goto label_30070c;
        case 0x300710u: goto label_300710;
        case 0x300714u: goto label_300714;
        case 0x300718u: goto label_300718;
        case 0x30071cu: goto label_30071c;
        case 0x300720u: goto label_300720;
        case 0x300724u: goto label_300724;
        case 0x300728u: goto label_300728;
        case 0x30072cu: goto label_30072c;
        case 0x300730u: goto label_300730;
        case 0x300734u: goto label_300734;
        case 0x300738u: goto label_300738;
        case 0x30073cu: goto label_30073c;
        case 0x300740u: goto label_300740;
        case 0x300744u: goto label_300744;
        case 0x300748u: goto label_300748;
        case 0x30074cu: goto label_30074c;
        case 0x300750u: goto label_300750;
        case 0x300754u: goto label_300754;
        case 0x300758u: goto label_300758;
        case 0x30075cu: goto label_30075c;
        case 0x300760u: goto label_300760;
        case 0x300764u: goto label_300764;
        case 0x300768u: goto label_300768;
        case 0x30076cu: goto label_30076c;
        case 0x300770u: goto label_300770;
        case 0x300774u: goto label_300774;
        case 0x300778u: goto label_300778;
        case 0x30077cu: goto label_30077c;
        case 0x300780u: goto label_300780;
        case 0x300784u: goto label_300784;
        case 0x300788u: goto label_300788;
        case 0x30078cu: goto label_30078c;
        case 0x300790u: goto label_300790;
        case 0x300794u: goto label_300794;
        case 0x300798u: goto label_300798;
        case 0x30079cu: goto label_30079c;
        case 0x3007a0u: goto label_3007a0;
        case 0x3007a4u: goto label_3007a4;
        case 0x3007a8u: goto label_3007a8;
        case 0x3007acu: goto label_3007ac;
        case 0x3007b0u: goto label_3007b0;
        case 0x3007b4u: goto label_3007b4;
        case 0x3007b8u: goto label_3007b8;
        case 0x3007bcu: goto label_3007bc;
        case 0x3007c0u: goto label_3007c0;
        case 0x3007c4u: goto label_3007c4;
        case 0x3007c8u: goto label_3007c8;
        case 0x3007ccu: goto label_3007cc;
        case 0x3007d0u: goto label_3007d0;
        case 0x3007d4u: goto label_3007d4;
        case 0x3007d8u: goto label_3007d8;
        case 0x3007dcu: goto label_3007dc;
        case 0x3007e0u: goto label_3007e0;
        case 0x3007e4u: goto label_3007e4;
        case 0x3007e8u: goto label_3007e8;
        case 0x3007ecu: goto label_3007ec;
        case 0x3007f0u: goto label_3007f0;
        case 0x3007f4u: goto label_3007f4;
        case 0x3007f8u: goto label_3007f8;
        case 0x3007fcu: goto label_3007fc;
        case 0x300800u: goto label_300800;
        case 0x300804u: goto label_300804;
        case 0x300808u: goto label_300808;
        case 0x30080cu: goto label_30080c;
        case 0x300810u: goto label_300810;
        case 0x300814u: goto label_300814;
        case 0x300818u: goto label_300818;
        case 0x30081cu: goto label_30081c;
        case 0x300820u: goto label_300820;
        case 0x300824u: goto label_300824;
        case 0x300828u: goto label_300828;
        case 0x30082cu: goto label_30082c;
        default: break;
    }

    ctx->pc = 0x300628u;

label_300628:
    // 0x300628: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x300628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_30062c:
    // 0x30062c: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30062cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_300630:
    // 0x300630: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x300630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31364)));
label_300634:
    // 0x300634: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x300634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_300638:
    // 0x300638: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x300638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_30063c:
    // 0x30063c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30063cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_300640:
    // 0x300640: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x300640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_300644:
    // 0x300644: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x300644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_300648:
    // 0x300648: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x300648u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30064c:
    // 0x30064c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x30064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_300650:
    // 0x300650: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x300650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_300654:
    // 0x300654: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x300654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_300658:
    // 0x300658: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x300658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_30065c:
    // 0x30065c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30065cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300660:
    // 0x300660: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x300660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_300664:
    // 0x300664: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x300664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300668:
    // 0x300668: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x300668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_30066c:
    // 0x30066c: 0x24771960  addiu       $s7, $v1, 0x1960
    ctx->pc = 0x30066cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 6496));
label_300670:
    // 0x300670: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x300670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_300674:
    // 0x300674: 0x245e1980  addiu       $fp, $v0, 0x1980
    ctx->pc = 0x300674u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
label_300678:
    // 0x300678: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x300678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_30067c:
    // 0x30067c: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x30067cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
label_300680:
    // 0x300680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_300684:
    // 0x300684: 0x3c150400  lui         $s5, 0x400
    ctx->pc = 0x300684u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1024 << 16));
label_300688:
    // 0x300688: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x300688u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_30068c:
    // 0x30068c: 0x0  nop
    ctx->pc = 0x30068cu;
    // NOP
label_300690:
    // 0x300690: 0x3244001f  andi        $a0, $s2, 0x1F
    ctx->pc = 0x300690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
label_300694:
    // 0x300694: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x300694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_300698:
    // 0x300698: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x300698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_30069c:
    // 0x30069c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x30069cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_3006a0:
    // 0x3006a0: 0x838006  srlv        $s0, $v1, $a0
    ctx->pc = 0x3006a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_3006a4:
    // 0x3006a4: 0x24421940  addiu       $v0, $v0, 0x1940
    ctx->pc = 0x3006a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
label_3006a8:
    // 0x3006a8: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x3006a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3006ac:
    // 0x3006ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3006acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3006b0:
    // 0x3006b0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x3006b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_3006b4:
    // 0x3006b4: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_3006b8:
    if (ctx->pc == 0x3006B8u) {
        ctx->pc = 0x3006B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006B4u;
        // 0x3006b8: 0xbe3821  addu        $a3, $a1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3006BCu;
        goto label_3006bc;
    }
    ctx->pc = 0x3006B4u;
    {
        const bool branch_taken_0x3006b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3006B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006B4u;
        // 0x3006b8: 0xbe3821  addu        $a3, $a1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3006b4) {
            ctx->pc = 0x3007C4u;
            goto label_3007c4;
        }
    }
    ctx->pc = 0x3006BCu;
label_3006bc:
    // 0x3006bc: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x3006bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
label_3006c0:
    // 0x3006c0: 0x2442b940  addiu       $v0, $v0, -0x46C0
    ctx->pc = 0x3006c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949184));
label_3006c4:
    // 0x3006c4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3006c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3006c8:
    // 0x3006c8: 0x400013  mtlo        $v0
    ctx->pc = 0x3006c8u;
    ctx->lo = GPR_U64(ctx, 2);
label_3006cc:
    // 0x3006cc: 0x24030260  addiu       $v1, $zero, 0x260
    ctx->pc = 0x3006ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_3006d0:
    // 0x3006d0: 0x901024  and         $v0, $a0, $s0
    ctx->pc = 0x3006d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
label_3006d4:
    // 0x3006d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3006d8:
    if (ctx->pc == 0x3006D8u) {
        ctx->pc = 0x3006D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006D4u;
        // 0x3006d8: 0x72433000  madd        $a2, $s2, $v1 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3006DCu;
        goto label_3006dc;
    }
    ctx->pc = 0x3006D4u;
    {
        const bool branch_taken_0x3006d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3006D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006D4u;
        // 0x3006d8: 0x72433000  madd        $a2, $s2, $v1 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3006d4) {
            ctx->pc = 0x300708u;
            goto label_300708;
        }
    }
    ctx->pc = 0x3006DCu;
label_3006dc:
    // 0x3006dc: 0x8cc200f0  lw          $v0, 0xF0($a2)
    ctx->pc = 0x3006dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_3006e0:
    // 0x3006e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3006e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3006e4:
    // 0x3006e4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x3006e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_3006e8:
    // 0x3006e8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3006e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3006ec:
    // 0x3006ec: 0x60f809  jalr        $v1
label_3006f0:
    if (ctx->pc == 0x3006F0u) {
        ctx->pc = 0x3006F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006ECu;
        // 0x3006f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3006F4u;
        goto label_3006f4;
    }
    ctx->pc = 0x3006ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3006F4u);
        ctx->pc = 0x3006F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006ECu;
        // 0x3006f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3006ECu, 0x3006F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3006F4u;
label_3006f4:
    // 0x3006f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3006f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3006f8:
    // 0x3006f8: 0x101827  nor         $v1, $zero, $s0
    ctx->pc = 0x3006f8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
label_3006fc:
    // 0x3006fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3006fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_300700:
    // 0x300700: 0x10000030  b           . + 4 + (0x30 << 2)
label_300704:
    if (ctx->pc == 0x300704u) {
        ctx->pc = 0x300704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300700u;
        // 0x300704: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300708u;
        goto label_300708;
    }
    ctx->pc = 0x300700u;
    {
        const bool branch_taken_0x300700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300700u;
        // 0x300704: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300700) {
            ctx->pc = 0x3007C4u;
            goto label_3007c4;
        }
    }
    ctx->pc = 0x300708u;
label_300708:
    // 0x300708: 0xb71821  addu        $v1, $a1, $s7
    ctx->pc = 0x300708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
label_30070c:
    // 0x30070c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_300710:
    // 0x300710: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x300710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_300714:
    // 0x300714: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_300718:
    if (ctx->pc == 0x300718u) {
        ctx->pc = 0x300718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300714u;
        // 0x300718: 0x901025  or          $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30071Cu;
        goto label_30071c;
    }
    ctx->pc = 0x300714u;
    {
        const bool branch_taken_0x300714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300714u;
        // 0x300718: 0x901025  or          $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300714) {
            ctx->pc = 0x300724u;
            goto label_300724;
        }
    }
    ctx->pc = 0x30071Cu;
label_30071c:
    // 0x30071c: 0x10000029  b           . + 4 + (0x29 << 2)
label_300720:
    if (ctx->pc == 0x300720u) {
        ctx->pc = 0x300720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30071Cu;
        // 0x300720: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300724u;
        goto label_300724;
    }
    ctx->pc = 0x30071Cu;
    {
        const bool branch_taken_0x30071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30071Cu;
        // 0x300720: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30071c) {
            ctx->pc = 0x3007C4u;
            goto label_3007c4;
        }
    }
    ctx->pc = 0x300724u;
label_300724:
    // 0x300724: 0x8cc20114  lw          $v0, 0x114($a2)
    ctx->pc = 0x300724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 276)));
label_300728:
    // 0x300728: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x300728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_30072c:
    // 0x30072c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_300730:
    if (ctx->pc == 0x300730u) {
        ctx->pc = 0x300730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30072Cu;
        // 0x300730: 0x8cc200f0  lw          $v0, 0xF0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300734u;
        goto label_300734;
    }
    ctx->pc = 0x30072Cu;
    {
        const bool branch_taken_0x30072c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30072c) {
            ctx->pc = 0x300730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30072Cu;
            // 0x300730: 0x8cc200f0  lw          $v0, 0xF0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3007B0u;
            goto label_3007b0;
        }
    }
    ctx->pc = 0x300734u;
label_300734:
    // 0x300734: 0x8cc30108  lw          $v1, 0x108($a2)
    ctx->pc = 0x300734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
label_300738:
    // 0x300738: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_30073c:
    if (ctx->pc == 0x30073Cu) {
        ctx->pc = 0x30073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300738u;
        // 0x30073c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300740u;
        goto label_300740;
    }
    ctx->pc = 0x300738u;
    {
        const bool branch_taken_0x300738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300738u;
        // 0x30073c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300738) {
            ctx->pc = 0x300764u;
            goto label_300764;
        }
    }
    ctx->pc = 0x300740u;
label_300740:
    // 0x300740: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x300740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_300744:
    // 0x300744: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x300744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_300748:
    // 0x300748: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_30074c:
    if (ctx->pc == 0x30074Cu) {
        ctx->pc = 0x30074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300748u;
        // 0x30074c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300750u;
        goto label_300750;
    }
    ctx->pc = 0x300748u;
    {
        const bool branch_taken_0x300748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300748) {
            ctx->pc = 0x30074Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300748u;
            // 0x30074c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3007C8u;
            goto label_3007c8;
        }
    }
    ctx->pc = 0x300750u;
label_300750:
    // 0x300750: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_300754:
    if (ctx->pc == 0x300754u) {
        ctx->pc = 0x300758u;
        goto label_300758;
    }
    ctx->pc = 0x300750u;
    {
        const bool branch_taken_0x300750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x300750) {
            ctx->pc = 0x300764u;
            goto label_300764;
        }
    }
    ctx->pc = 0x300758u;
label_300758:
    // 0x300758: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x300758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_30075c:
    // 0x30075c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x30075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_300760:
    // 0x300760: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x300760u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_300764:
    // 0x300764: 0x52800012  beql        $s4, $zero, . + 4 + (0x12 << 2)
label_300768:
    if (ctx->pc == 0x300768u) {
        ctx->pc = 0x300768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300764u;
        // 0x300768: 0x8cc200f0  lw          $v0, 0xF0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30076Cu;
        goto label_30076c;
    }
    ctx->pc = 0x300764u;
    {
        const bool branch_taken_0x300764 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x300764) {
            ctx->pc = 0x300768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300764u;
            // 0x300768: 0x8cc200f0  lw          $v0, 0xF0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3007B0u;
            goto label_3007b0;
        }
    }
    ctx->pc = 0x30076Cu;
label_30076c:
    // 0x30076c: 0x8cc30118  lw          $v1, 0x118($a2)
    ctx->pc = 0x30076cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 280)));
label_300770:
    // 0x300770: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x300770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_300774:
    // 0x300774: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_300778:
    if (ctx->pc == 0x300778u) {
        ctx->pc = 0x300778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300774u;
        // 0x300778: 0x8cc200f0  lw          $v0, 0xF0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30077Cu;
        goto label_30077c;
    }
    ctx->pc = 0x300774u;
    {
        const bool branch_taken_0x300774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300774) {
            ctx->pc = 0x300778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300774u;
            // 0x300778: 0x8cc200f0  lw          $v0, 0xF0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3007B0u;
            goto label_3007b0;
        }
    }
    ctx->pc = 0x30077Cu;
label_30077c:
    // 0x30077c: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x30077cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
label_300780:
    // 0x300780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x300780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_300784:
    // 0x300784: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_300788:
    if (ctx->pc == 0x300788u) {
        ctx->pc = 0x300788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300784u;
        // 0x300788: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30078Cu;
        goto label_30078c;
    }
    ctx->pc = 0x300784u;
    {
        const bool branch_taken_0x300784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300784u;
        // 0x300788: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300784) {
            ctx->pc = 0x30079Cu;
            goto label_30079c;
        }
    }
    ctx->pc = 0x30078Cu;
label_30078c:
    // 0x30078c: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
label_300790:
    if (ctx->pc == 0x300790u) {
        ctx->pc = 0x300790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30078Cu;
        // 0x300790: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300794u;
        goto label_300794;
    }
    ctx->pc = 0x30078Cu;
    {
        const bool branch_taken_0x30078c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30078c) {
            ctx->pc = 0x300790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30078Cu;
            // 0x300790: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3007C8u;
            goto label_3007c8;
        }
    }
    ctx->pc = 0x300794u;
label_300794:
    // 0x300794: 0x10000006  b           . + 4 + (0x6 << 2)
label_300798:
    if (ctx->pc == 0x300798u) {
        ctx->pc = 0x300798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300794u;
        // 0x300798: 0x8cc200f0  lw          $v0, 0xF0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30079Cu;
        goto label_30079c;
    }
    ctx->pc = 0x300794u;
    {
        const bool branch_taken_0x300794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300794u;
        // 0x300798: 0x8cc200f0  lw          $v0, 0xF0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300794) {
            ctx->pc = 0x3007B0u;
            goto label_3007b0;
        }
    }
    ctx->pc = 0x30079Cu;
label_30079c:
    // 0x30079c: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x30079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31364)));
label_3007a0:
    // 0x3007a0: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x3007a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_3007a4:
    // 0x3007a4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3007a8:
    if (ctx->pc == 0x3007A8u) {
        ctx->pc = 0x3007A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007A4u;
        // 0x3007a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3007ACu;
        goto label_3007ac;
    }
    ctx->pc = 0x3007A4u;
    {
        const bool branch_taken_0x3007a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3007a4) {
            ctx->pc = 0x3007A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3007A4u;
            // 0x3007a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3007C8u;
            goto label_3007c8;
        }
    }
    ctx->pc = 0x3007ACu;
label_3007ac:
    // 0x3007ac: 0x8cc200f0  lw          $v0, 0xF0($a2)
    ctx->pc = 0x3007acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_3007b0:
    // 0x3007b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3007b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3007b4:
    // 0x3007b4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x3007b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_3007b8:
    // 0x3007b8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x3007b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3007bc:
    // 0x3007bc: 0x60f809  jalr        $v1
label_3007c0:
    if (ctx->pc == 0x3007C0u) {
        ctx->pc = 0x3007C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007BCu;
        // 0x3007c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3007C4u;
        goto label_3007c4;
    }
    ctx->pc = 0x3007BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3007C4u);
        ctx->pc = 0x3007C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007BCu;
        // 0x3007c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3007BCu, 0x3007C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3007C4u;
label_3007c4:
    // 0x3007c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3007c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3007c8:
    // 0x3007c8: 0x2a420100  slti        $v0, $s2, 0x100
    ctx->pc = 0x3007c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
label_3007cc:
    // 0x3007cc: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
label_3007d0:
    if (ctx->pc == 0x3007D0u) {
        ctx->pc = 0x3007D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007CCu;
        // 0x3007d0: 0x121142  srl         $v0, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3007D4u;
        goto label_3007d4;
    }
    ctx->pc = 0x3007CCu;
    {
        const bool branch_taken_0x3007cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3007D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007CCu;
        // 0x3007d0: 0x121142  srl         $v0, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3007cc) {
            ctx->pc = 0x300690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300690;
        }
    }
    ctx->pc = 0x3007D4u;
label_3007d4:
    // 0x3007d4: 0x3c080045  lui         $t0, 0x45
    ctx->pc = 0x3007d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)69 << 16));
label_3007d8:
    // 0x3007d8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3007d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3007dc:
    // 0x3007dc: 0x2508fc10  addiu       $t0, $t0, -0x3F0
    ctx->pc = 0x3007dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966288));
label_3007e0:
    // 0x3007e0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3007e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_3007e4:
    // 0x3007e4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3007e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_3007e8:
    // 0x3007e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3007e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3007ec:
    // 0x3007ec: 0xc0b836a  jal         func_2E0DA8
label_3007f0:
    if (ctx->pc == 0x3007F0u) {
        ctx->pc = 0x3007F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007ECu;
        // 0x3007f0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3007F4u;
        goto label_3007f4;
    }
    ctx->pc = 0x3007ECu;
    SET_GPR_U32(ctx, 31, 0x3007F4u);
    ctx->pc = 0x3007F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3007ECu;
    // 0x3007f0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DA8u, 0x3007ECu, 0x3007F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3007F4u;
label_3007f4:
    // 0x3007f4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3007f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_3007f8:
    // 0x3007f8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3007f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3007fc:
    // 0x3007fc: 0xac533bc0  sw          $s3, 0x3BC0($v0)
    ctx->pc = 0x3007fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15296), GPR_U32(ctx, 19));
label_300800:
    // 0x300800: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x300800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_300804:
    // 0x300804: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x300804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_300808:
    // 0x300808: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x300808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30080c:
    // 0x30080c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30080cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_300810:
    // 0x300810: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x300810u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_300814:
    // 0x300814: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x300814u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_300818:
    // 0x300818: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x300818u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30081c:
    // 0x30081c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x30081cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_300820:
    // 0x300820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_300824:
    // 0x300824: 0x3e00008  jr          $ra
label_300828:
    if (ctx->pc == 0x300828u) {
        ctx->pc = 0x300828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300824u;
        // 0x300828: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30082Cu;
        goto label_30082c;
    }
    ctx->pc = 0x300824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300824u;
        // 0x300828: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30082Cu;
label_30082c:
    // 0x30082c: 0x0  nop
    ctx->pc = 0x30082cu;
    // NOP
    ctx->pc = 0x300830u;
}
