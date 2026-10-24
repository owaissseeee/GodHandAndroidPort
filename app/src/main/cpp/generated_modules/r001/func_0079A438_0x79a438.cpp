#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r001_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r001
{
// Function: func_0079A438
// Address: 0x79a438 - 0x79ab58
void func_0079A438_0x79a438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A438_0x79a438");
#endif

    switch (ctx->pc) {
        case 0x79a460u: goto label_79a460;
        case 0x79a470u: goto label_79a470;
        case 0x79a498u: goto label_79a498;
        case 0x79a4bcu: goto label_79a4bc;
        case 0x79a4dcu: goto label_79a4dc;
        case 0x79a4e8u: goto label_79a4e8;
        case 0x79a510u: goto label_79a510;
        case 0x79a530u: goto label_79a530;
        case 0x79a540u: goto label_79a540;
        case 0x79a548u: goto label_79a548;
        case 0x79a570u: goto label_79a570;
        case 0x79a590u: goto label_79a590;
        case 0x79a5b0u: goto label_79a5b0;
        case 0x79a5bcu: goto label_79a5bc;
        case 0x79a5e4u: goto label_79a5e4;
        case 0x79a604u: goto label_79a604;
        case 0x79a614u: goto label_79a614;
        case 0x79a61cu: goto label_79a61c;
        case 0x79a644u: goto label_79a644;
        case 0x79a664u: goto label_79a664;
        case 0x79a684u: goto label_79a684;
        case 0x79a690u: goto label_79a690;
        case 0x79a6b8u: goto label_79a6b8;
        case 0x79a6d8u: goto label_79a6d8;
        case 0x79a6e8u: goto label_79a6e8;
        case 0x79a6f0u: goto label_79a6f0;
        case 0x79a718u: goto label_79a718;
        case 0x79a738u: goto label_79a738;
        case 0x79a758u: goto label_79a758;
        case 0x79a764u: goto label_79a764;
        case 0x79a788u: goto label_79a788;
        case 0x79a798u: goto label_79a798;
        case 0x79a7c0u: goto label_79a7c0;
        case 0x79a7e4u: goto label_79a7e4;
        case 0x79a804u: goto label_79a804;
        case 0x79a810u: goto label_79a810;
        case 0x79a838u: goto label_79a838;
        case 0x79a858u: goto label_79a858;
        case 0x79a868u: goto label_79a868;
        case 0x79a870u: goto label_79a870;
        case 0x79a898u: goto label_79a898;
        case 0x79a8b8u: goto label_79a8b8;
        case 0x79a8d8u: goto label_79a8d8;
        case 0x79a8e4u: goto label_79a8e4;
        case 0x79a90cu: goto label_79a90c;
        case 0x79a92cu: goto label_79a92c;
        case 0x79a93cu: goto label_79a93c;
        case 0x79a944u: goto label_79a944;
        case 0x79a96cu: goto label_79a96c;
        case 0x79a98cu: goto label_79a98c;
        case 0x79a9acu: goto label_79a9ac;
        case 0x79a9b8u: goto label_79a9b8;
        case 0x79a9e0u: goto label_79a9e0;
        case 0x79aa00u: goto label_79aa00;
        case 0x79aa10u: goto label_79aa10;
        case 0x79aa18u: goto label_79aa18;
        case 0x79aa40u: goto label_79aa40;
        case 0x79aa60u: goto label_79aa60;
        case 0x79aa80u: goto label_79aa80;
        case 0x79aa8cu: goto label_79aa8c;
        case 0x79aab4u: goto label_79aab4;
        case 0x79aac4u: goto label_79aac4;
        case 0x79aaecu: goto label_79aaec;
        case 0x79ab10u: goto label_79ab10;
        case 0x79ab30u: goto label_79ab30;
        default: break;
    }

    ctx->pc = 0x79a438u;

    // 0x79a438: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x79a43c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a440: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x79a440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x79a444: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a448: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x79a448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x79a44c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x79a44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x79a450: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x79a450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x79a454: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x79a454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x79a458: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A458u;
    SET_GPR_U32(ctx, 31, 0x79A460u);
    ctx->pc = 0x79A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A458u;
    // 0x79a45c: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A458u, 0x79A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A460u;
label_79a460:
    // 0x79a460: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x79A460u;
    {
        const bool branch_taken_0x79a460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A460u;
        // 0x79a464: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a460) {
            ctx->pc = 0x79A500u;
            goto label_79a500;
        }
    }
    ctx->pc = 0x79A468u;
    // 0x79a468: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79A468u;
    SET_GPR_U32(ctx, 31, 0x79A470u);
    ctx->pc = 0x79A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A468u;
    // 0x79a46c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A468u, 0x79A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A470u;
label_79a470:
    // 0x79a470: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a470u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a474: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79a474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a478: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a478u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79a47c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79a47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a480: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a480u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79AF00u));
    // 0x79a484: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79a484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79a488: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a48c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a490: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79A490u;
    SET_GPR_U32(ctx, 31, 0x79A498u);
    ctx->pc = 0x79A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A490u;
    // 0x79a494: 0x248400ac  addiu       $a0, $a0, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79A490u, 0x79A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A498u;
label_79a498:
    // 0x79a498: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a49c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79a49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4a0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x79a4a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a4a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a4ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79a4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79a4b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79a4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79a4b4: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79A4B4u;
    SET_GPR_U32(ctx, 31, 0x79A4BCu);
    ctx->pc = 0x79A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4B4u;
    // 0x79a4b8: 0x248400ac  addiu       $a0, $a0, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79A4B4u, 0x79A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4BCu;
label_79a4bc:
    // 0x79a4bc: 0x8e05af00  lw          $a1, -0x5100($s0)
    ctx->pc = 0x79a4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a4c0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a4c4: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a4c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a4cc: 0x24a500ac  addiu       $a1, $a1, 0xAC
    ctx->pc = 0x79a4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 172));
    // 0x79a4d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a4d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4d4: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79A4D4u;
    SET_GPR_U32(ctx, 31, 0x79A4DCu);
    ctx->pc = 0x79A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4D4u;
    // 0x79a4d8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79A4D4u, 0x79A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4DCu;
label_79a4dc:
    // 0x79a4dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a4e0: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A4E0u;
    SET_GPR_U32(ctx, 31, 0x79A4E8u);
    ctx->pc = 0x79A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4E0u;
    // 0x79a4e4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A4E0u, 0x79A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4E8u;
label_79a4e8:
    // 0x79a4e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A4E8u;
    {
        const bool branch_taken_0x79a4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4E8u;
        // 0x79a4ec: 0x8e03af00  lw          $v1, -0x5100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4e8) {
            ctx->pc = 0x79A4F8u;
            goto label_79a4f8;
        }
    }
    ctx->pc = 0x79A4F0u;
    // 0x79a4f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A4F0u;
    {
        const bool branch_taken_0x79a4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F0u;
        // 0x79a4f4: 0x2402100c  addiu       $v0, $zero, 0x100C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4f0) {
            ctx->pc = 0x79A4FCu;
            goto label_79a4fc;
        }
    }
    ctx->pc = 0x79A4F8u;
label_79a4f8:
    // 0x79a4f8: 0x2402100b  addiu       $v0, $zero, 0x100B
    ctx->pc = 0x79a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4107));
label_79a4fc:
    // 0x79a4fc: 0xa462010a  sh          $v0, 0x10A($v1)
    ctx->pc = 0x79a4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 266), (uint16_t)GPR_U32(ctx, 2));
label_79a500:
    // 0x79a500: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a508: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A508u;
    SET_GPR_U32(ctx, 31, 0x79A510u);
    ctx->pc = 0x79A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A508u;
    // 0x79a50c: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A508u, 0x79A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A510u;
label_79a510:
    // 0x79a510: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x79A510u;
    {
        const bool branch_taken_0x79a510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A510u;
        // 0x79a514: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a510) {
            ctx->pc = 0x79A5D4u;
            goto label_79a5d4;
        }
    }
    ctx->pc = 0x79A518u;
    // 0x79a518: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79a518u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a51c: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x79a51cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x79a520: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79a524: 0x26102fc0  addiu       $s0, $s0, 0x2FC0
    ctx->pc = 0x79a524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x79a528: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79A528u;
    SET_GPR_U32(ctx, 31, 0x79A530u);
    ctx->pc = 0x79A52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A528u;
    // 0x79a52c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A528u, 0x79A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A530u;
label_79a530:
    // 0x79a530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a534: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a538: 0xc04d484  jal         func_135210
    ctx->pc = 0x79A538u;
    SET_GPR_U32(ctx, 31, 0x79A540u);
    ctx->pc = 0x79A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A538u;
    // 0x79a53c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135210u, 0x79A538u, 0x79A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A540u;
label_79a540:
    // 0x79a540: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79A540u;
    SET_GPR_U32(ctx, 31, 0x79A548u);
    ctx->pc = 0x79A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A540u;
    // 0x79a544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A540u, 0x79A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A548u;
label_79a548:
    // 0x79a548: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a548u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a54c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79a54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a550: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a550u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79a554: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79a554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a558: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a558u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79AF00u));
    // 0x79a55c: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79a55cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79a560: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a564: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a568: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79A568u;
    SET_GPR_U32(ctx, 31, 0x79A570u);
    ctx->pc = 0x79A56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A568u;
    // 0x79a56c: 0x24840148  addiu       $a0, $a0, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79A568u, 0x79A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A570u;
label_79a570:
    // 0x79a570: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79a570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79a574: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a578: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a57c: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a580: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a584: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79a584u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x79a588: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79A588u;
    SET_GPR_U32(ctx, 31, 0x79A590u);
    ctx->pc = 0x79A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A588u;
    // 0x79a58c: 0x24840148  addiu       $a0, $a0, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79A588u, 0x79A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A590u;
label_79a590:
    // 0x79a590: 0x8e05af00  lw          $a1, -0x5100($s0)
    ctx->pc = 0x79a590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a594: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a598: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a59c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x79a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a5a0: 0x24a50148  addiu       $a1, $a1, 0x148
    ctx->pc = 0x79a5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 328));
    // 0x79a5a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a5a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5a8: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79A5A8u;
    SET_GPR_U32(ctx, 31, 0x79A5B0u);
    ctx->pc = 0x79A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5A8u;
    // 0x79a5ac: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79A5A8u, 0x79A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5B0u;
label_79a5b0:
    // 0x79a5b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a5b4: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A5B4u;
    SET_GPR_U32(ctx, 31, 0x79A5BCu);
    ctx->pc = 0x79A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5B4u;
    // 0x79a5b8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A5B4u, 0x79A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5BCu;
label_79a5bc:
    // 0x79a5bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A5BCu;
    {
        const bool branch_taken_0x79a5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5BCu;
        // 0x79a5c0: 0x8e03af00  lw          $v1, -0x5100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5bc) {
            ctx->pc = 0x79A5CCu;
            goto label_79a5cc;
        }
    }
    ctx->pc = 0x79A5C4u;
    // 0x79a5c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A5C4u;
    {
        const bool branch_taken_0x79a5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5C4u;
        // 0x79a5c8: 0x2402100e  addiu       $v0, $zero, 0x100E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5c4) {
            ctx->pc = 0x79A5D0u;
            goto label_79a5d0;
        }
    }
    ctx->pc = 0x79A5CCu;
label_79a5cc:
    // 0x79a5cc: 0x2402100d  addiu       $v0, $zero, 0x100D
    ctx->pc = 0x79a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4109));
label_79a5d0:
    // 0x79a5d0: 0xa46201a6  sh          $v0, 0x1A6($v1)
    ctx->pc = 0x79a5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 422), (uint16_t)GPR_U32(ctx, 2));
label_79a5d4:
    // 0x79a5d4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x79a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x79a5d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5dc: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A5DCu;
    SET_GPR_U32(ctx, 31, 0x79A5E4u);
    ctx->pc = 0x79A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5DCu;
    // 0x79a5e0: 0xa3a20020  sb          $v0, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A5DCu, 0x79A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5E4u;
label_79a5e4:
    // 0x79a5e4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x79A5E4u;
    {
        const bool branch_taken_0x79a5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5E4u;
        // 0x79a5e8: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5e4) {
            ctx->pc = 0x79A6A8u;
            goto label_79a6a8;
        }
    }
    ctx->pc = 0x79A5ECu;
    // 0x79a5ec: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x79a5ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a5f0: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x79a5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x79a5f4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79a5f8: 0x26102fc0  addiu       $s0, $s0, 0x2FC0
    ctx->pc = 0x79a5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x79a5fc: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79A5FCu;
    SET_GPR_U32(ctx, 31, 0x79A604u);
    ctx->pc = 0x79A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5FCu;
    // 0x79a600: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A5FCu, 0x79A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A604u;
label_79a604:
    // 0x79a604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a608: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a60c: 0xc04d484  jal         func_135210
    ctx->pc = 0x79A60Cu;
    SET_GPR_U32(ctx, 31, 0x79A614u);
    ctx->pc = 0x79A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A60Cu;
    // 0x79a610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135210u, 0x79A60Cu, 0x79A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A614u;
label_79a614:
    // 0x79a614: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79A614u;
    SET_GPR_U32(ctx, 31, 0x79A61Cu);
    ctx->pc = 0x79A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A614u;
    // 0x79a618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A614u, 0x79A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A61Cu;
label_79a61c:
    // 0x79a61c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a61cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a620: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79a620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a624: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a624u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79a628: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79a628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a62c: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79AF00u));
    // 0x79a630: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79a630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79a634: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a638: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a63c: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79A63Cu;
    SET_GPR_U32(ctx, 31, 0x79A644u);
    ctx->pc = 0x79A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A63Cu;
    // 0x79a640: 0x248401e4  addiu       $a0, $a0, 0x1E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79A63Cu, 0x79A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A644u;
label_79a644:
    // 0x79a644: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79a644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79a648: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a64c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79a64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a650: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a654: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a658: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79a658u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x79a65c: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79A65Cu;
    SET_GPR_U32(ctx, 31, 0x79A664u);
    ctx->pc = 0x79A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A65Cu;
    // 0x79a660: 0x248401e4  addiu       $a0, $a0, 0x1E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79A65Cu, 0x79A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A664u;
label_79a664:
    // 0x79a664: 0x8e05af00  lw          $a1, -0x5100($s0)
    ctx->pc = 0x79a664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a668: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a66c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a670: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x79a670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a674: 0x24a501e4  addiu       $a1, $a1, 0x1E4
    ctx->pc = 0x79a674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 484));
    // 0x79a678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a67c: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79A67Cu;
    SET_GPR_U32(ctx, 31, 0x79A684u);
    ctx->pc = 0x79A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A67Cu;
    // 0x79a680: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79A67Cu, 0x79A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A684u;
label_79a684:
    // 0x79a684: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a688: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A688u;
    SET_GPR_U32(ctx, 31, 0x79A690u);
    ctx->pc = 0x79A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A688u;
    // 0x79a68c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A688u, 0x79A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A690u;
label_79a690:
    // 0x79a690: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A690u;
    {
        const bool branch_taken_0x79a690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A690u;
        // 0x79a694: 0x8e03af00  lw          $v1, -0x5100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a690) {
            ctx->pc = 0x79A6A0u;
            goto label_79a6a0;
        }
    }
    ctx->pc = 0x79A698u;
    // 0x79a698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A698u;
    {
        const bool branch_taken_0x79a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A698u;
        // 0x79a69c: 0x24021010  addiu       $v0, $zero, 0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a698) {
            ctx->pc = 0x79A6A4u;
            goto label_79a6a4;
        }
    }
    ctx->pc = 0x79A6A0u;
label_79a6a0:
    // 0x79a6a0: 0x2402100f  addiu       $v0, $zero, 0x100F
    ctx->pc = 0x79a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4111));
label_79a6a4:
    // 0x79a6a4: 0xa4620242  sh          $v0, 0x242($v1)
    ctx->pc = 0x79a6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 578), (uint16_t)GPR_U32(ctx, 2));
label_79a6a8:
    // 0x79a6a8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x79a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79a6ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6b0: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A6B0u;
    SET_GPR_U32(ctx, 31, 0x79A6B8u);
    ctx->pc = 0x79A6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6B0u;
    // 0x79a6b4: 0xa3a20030  sb          $v0, 0x30($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A6B0u, 0x79A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6B8u;
label_79a6b8:
    // 0x79a6b8: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x79A6B8u;
    {
        const bool branch_taken_0x79a6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6B8u;
        // 0x79a6bc: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6b8) {
            ctx->pc = 0x79A77Cu;
            goto label_79a77c;
        }
    }
    ctx->pc = 0x79A6C0u;
    // 0x79a6c0: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x79a6c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a6c4: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x79a6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x79a6c8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79a6cc: 0x26102fc0  addiu       $s0, $s0, 0x2FC0
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x79a6d0: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79A6D0u;
    SET_GPR_U32(ctx, 31, 0x79A6D8u);
    ctx->pc = 0x79A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6D0u;
    // 0x79a6d4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A6D0u, 0x79A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6D8u;
label_79a6d8:
    // 0x79a6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6e0: 0xc04d484  jal         func_135210
    ctx->pc = 0x79A6E0u;
    SET_GPR_U32(ctx, 31, 0x79A6E8u);
    ctx->pc = 0x79A6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6E0u;
    // 0x79a6e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135210u, 0x79A6E0u, 0x79A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6E8u;
label_79a6e8:
    // 0x79a6e8: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79A6E8u;
    SET_GPR_U32(ctx, 31, 0x79A6F0u);
    ctx->pc = 0x79A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6E8u;
    // 0x79a6ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A6E8u, 0x79A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6F0u;
label_79a6f0:
    // 0x79a6f0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a6f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a6f4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79a6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a6f8: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79a6fc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79a6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a700: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a700u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79AF00u));
    // 0x79a704: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79a704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79a708: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a70c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a710: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79A710u;
    SET_GPR_U32(ctx, 31, 0x79A718u);
    ctx->pc = 0x79A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A710u;
    // 0x79a714: 0x24840280  addiu       $a0, $a0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79A710u, 0x79A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A718u;
label_79a718:
    // 0x79a718: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79a718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79a71c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a720: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79a720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a724: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a728: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a72c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79a72cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x79a730: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79A730u;
    SET_GPR_U32(ctx, 31, 0x79A738u);
    ctx->pc = 0x79A734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A730u;
    // 0x79a734: 0x24840280  addiu       $a0, $a0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79A730u, 0x79A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A738u;
label_79a738:
    // 0x79a738: 0x8e05af00  lw          $a1, -0x5100($s0)
    ctx->pc = 0x79a738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a73c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a740: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a744: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x79a744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a748: 0x24a50280  addiu       $a1, $a1, 0x280
    ctx->pc = 0x79a748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
    // 0x79a74c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a750: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79A750u;
    SET_GPR_U32(ctx, 31, 0x79A758u);
    ctx->pc = 0x79A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A750u;
    // 0x79a754: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79A750u, 0x79A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A758u;
label_79a758:
    // 0x79a758: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a75c: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A75Cu;
    SET_GPR_U32(ctx, 31, 0x79A764u);
    ctx->pc = 0x79A760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A75Cu;
    // 0x79a760: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A75Cu, 0x79A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A764u;
label_79a764:
    // 0x79a764: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A764u;
    {
        const bool branch_taken_0x79a764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A764u;
        // 0x79a768: 0x8e03af00  lw          $v1, -0x5100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a764) {
            ctx->pc = 0x79A774u;
            goto label_79a774;
        }
    }
    ctx->pc = 0x79A76Cu;
    // 0x79a76c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A76Cu;
    {
        const bool branch_taken_0x79a76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A76Cu;
        // 0x79a770: 0x24021012  addiu       $v0, $zero, 0x1012 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a76c) {
            ctx->pc = 0x79A778u;
            goto label_79a778;
        }
    }
    ctx->pc = 0x79A774u;
label_79a774:
    // 0x79a774: 0x24021011  addiu       $v0, $zero, 0x1011
    ctx->pc = 0x79a774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4113));
label_79a778:
    // 0x79a778: 0xa46202de  sh          $v0, 0x2DE($v1)
    ctx->pc = 0x79a778u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 734), (uint16_t)GPR_U32(ctx, 2));
label_79a77c:
    // 0x79a77c: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x79a77cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a780: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A780u;
    SET_GPR_U32(ctx, 31, 0x79A788u);
    ctx->pc = 0x79A784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A780u;
    // 0x79a784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A780u, 0x79A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A788u;
label_79a788:
    // 0x79a788: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x79A788u;
    {
        const bool branch_taken_0x79a788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A788u;
        // 0x79a78c: 0x27b20050  addiu       $s2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a788) {
            ctx->pc = 0x79A828u;
            goto label_79a828;
        }
    }
    ctx->pc = 0x79A790u;
    // 0x79a790: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79A790u;
    SET_GPR_U32(ctx, 31, 0x79A798u);
    ctx->pc = 0x79A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A790u;
    // 0x79a794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A790u, 0x79A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A798u;
label_79a798:
    // 0x79a798: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a798u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a79c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79a79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a7a0: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79a7a4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79a7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a7a8: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79AF00u));
    // 0x79a7ac: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79a7acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79a7b0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a7b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a7b8: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79A7B8u;
    SET_GPR_U32(ctx, 31, 0x79A7C0u);
    ctx->pc = 0x79A7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7B8u;
    // 0x79a7bc: 0x2484031c  addiu       $a0, $a0, 0x31C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 796));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79A7B8u, 0x79A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7C0u;
label_79a7c0:
    // 0x79a7c0: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a7c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7c8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x79a7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x79a7cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a7d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a7d4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79a7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79a7d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79a7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79a7dc: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79A7DCu;
    SET_GPR_U32(ctx, 31, 0x79A7E4u);
    ctx->pc = 0x79A7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7DCu;
    // 0x79a7e0: 0x2484031c  addiu       $a0, $a0, 0x31C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 796));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79A7DCu, 0x79A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7E4u;
label_79a7e4:
    // 0x79a7e4: 0x8e05af00  lw          $a1, -0x5100($s0)
    ctx->pc = 0x79a7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a7e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a7ec: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a7f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a7f4: 0x24a5031c  addiu       $a1, $a1, 0x31C
    ctx->pc = 0x79a7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 796));
    // 0x79a7f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a7f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7fc: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79A7FCu;
    SET_GPR_U32(ctx, 31, 0x79A804u);
    ctx->pc = 0x79A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7FCu;
    // 0x79a800: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79A7FCu, 0x79A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A804u;
label_79a804:
    // 0x79a804: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a808: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A808u;
    SET_GPR_U32(ctx, 31, 0x79A810u);
    ctx->pc = 0x79A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A808u;
    // 0x79a80c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A808u, 0x79A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A810u;
label_79a810:
    // 0x79a810: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A810u;
    {
        const bool branch_taken_0x79a810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A810u;
        // 0x79a814: 0x8e03af00  lw          $v1, -0x5100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a810) {
            ctx->pc = 0x79A820u;
            goto label_79a820;
        }
    }
    ctx->pc = 0x79A818u;
    // 0x79a818: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A818u;
    {
        const bool branch_taken_0x79a818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A818u;
        // 0x79a81c: 0x24021014  addiu       $v0, $zero, 0x1014 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a818) {
            ctx->pc = 0x79A824u;
            goto label_79a824;
        }
    }
    ctx->pc = 0x79A820u;
label_79a820:
    // 0x79a820: 0x24021013  addiu       $v0, $zero, 0x1013
    ctx->pc = 0x79a820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4115));
label_79a824:
    // 0x79a824: 0xa462037a  sh          $v0, 0x37A($v1)
    ctx->pc = 0x79a824u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 890), (uint16_t)GPR_U32(ctx, 2));
label_79a828:
    // 0x79a828: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x79a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79a82c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a830: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A830u;
    SET_GPR_U32(ctx, 31, 0x79A838u);
    ctx->pc = 0x79A834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A830u;
    // 0x79a834: 0xa3a20050  sb          $v0, 0x50($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A830u, 0x79A838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A838u;
label_79a838:
    // 0x79a838: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x79A838u;
    {
        const bool branch_taken_0x79a838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A838u;
        // 0x79a83c: 0x27b10060  addiu       $s1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a838) {
            ctx->pc = 0x79A8FCu;
            goto label_79a8fc;
        }
    }
    ctx->pc = 0x79A840u;
    // 0x79a840: 0x93a50050  lbu         $a1, 0x50($sp)
    ctx->pc = 0x79a840u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a844: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x79a844u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x79a848: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79a84c: 0x26102fc0  addiu       $s0, $s0, 0x2FC0
    ctx->pc = 0x79a84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x79a850: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79A850u;
    SET_GPR_U32(ctx, 31, 0x79A858u);
    ctx->pc = 0x79A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A850u;
    // 0x79a854: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A850u, 0x79A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A858u;
label_79a858:
    // 0x79a858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a85c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a860: 0xc04d484  jal         func_135210
    ctx->pc = 0x79A860u;
    SET_GPR_U32(ctx, 31, 0x79A868u);
    ctx->pc = 0x79A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A860u;
    // 0x79a864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135210u, 0x79A860u, 0x79A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A868u;
label_79a868:
    // 0x79a868: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79A868u;
    SET_GPR_U32(ctx, 31, 0x79A870u);
    ctx->pc = 0x79A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A868u;
    // 0x79a86c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A868u, 0x79A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A870u;
label_79a870:
    // 0x79a870: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a870u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a874: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79a874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a878: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a878u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79a87c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79a87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a880: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a880u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79AF00u));
    // 0x79a884: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79a884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79a888: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a88c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a890: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79A890u;
    SET_GPR_U32(ctx, 31, 0x79A898u);
    ctx->pc = 0x79A894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A890u;
    // 0x79a894: 0x248403b8  addiu       $a0, $a0, 0x3B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79A890u, 0x79A898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A898u;
label_79a898:
    // 0x79a898: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79a898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79a89c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a8a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79a8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8a4: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a8a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a8ac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79a8acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x79a8b0: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79A8B0u;
    SET_GPR_U32(ctx, 31, 0x79A8B8u);
    ctx->pc = 0x79A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8B0u;
    // 0x79a8b4: 0x248403b8  addiu       $a0, $a0, 0x3B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79A8B0u, 0x79A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8B8u;
label_79a8b8:
    // 0x79a8b8: 0x8e05af00  lw          $a1, -0x5100($s0)
    ctx->pc = 0x79a8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a8bc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a8c0: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a8c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a8c8: 0x24a503b8  addiu       $a1, $a1, 0x3B8
    ctx->pc = 0x79a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 952));
    // 0x79a8cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a8ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8d0: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79A8D0u;
    SET_GPR_U32(ctx, 31, 0x79A8D8u);
    ctx->pc = 0x79A8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8D0u;
    // 0x79a8d4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79A8D0u, 0x79A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8D8u;
label_79a8d8:
    // 0x79a8d8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a8dc: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A8DCu;
    SET_GPR_U32(ctx, 31, 0x79A8E4u);
    ctx->pc = 0x79A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8DCu;
    // 0x79a8e0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A8DCu, 0x79A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8E4u;
label_79a8e4:
    // 0x79a8e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A8E4u;
    {
        const bool branch_taken_0x79a8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8E4u;
        // 0x79a8e8: 0x8e03af00  lw          $v1, -0x5100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8e4) {
            ctx->pc = 0x79A8F4u;
            goto label_79a8f4;
        }
    }
    ctx->pc = 0x79A8ECu;
    // 0x79a8ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A8ECu;
    {
        const bool branch_taken_0x79a8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8ECu;
        // 0x79a8f0: 0x24021016  addiu       $v0, $zero, 0x1016 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8ec) {
            ctx->pc = 0x79A8F8u;
            goto label_79a8f8;
        }
    }
    ctx->pc = 0x79A8F4u;
label_79a8f4:
    // 0x79a8f4: 0x24021015  addiu       $v0, $zero, 0x1015
    ctx->pc = 0x79a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4117));
label_79a8f8:
    // 0x79a8f8: 0xa4620416  sh          $v0, 0x416($v1)
    ctx->pc = 0x79a8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1046), (uint16_t)GPR_U32(ctx, 2));
label_79a8fc:
    // 0x79a8fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x79a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a904: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A904u;
    SET_GPR_U32(ctx, 31, 0x79A90Cu);
    ctx->pc = 0x79A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A904u;
    // 0x79a908: 0xa3a20060  sb          $v0, 0x60($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A904u, 0x79A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A90Cu;
label_79a90c:
    // 0x79a90c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x79A90Cu;
    {
        const bool branch_taken_0x79a90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A90Cu;
        // 0x79a910: 0x27b20070  addiu       $s2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a90c) {
            ctx->pc = 0x79A9D0u;
            goto label_79a9d0;
        }
    }
    ctx->pc = 0x79A914u;
    // 0x79a914: 0x93a50060  lbu         $a1, 0x60($sp)
    ctx->pc = 0x79a914u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a918: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x79a918u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x79a91c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79a920: 0x26102fc0  addiu       $s0, $s0, 0x2FC0
    ctx->pc = 0x79a920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x79a924: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79A924u;
    SET_GPR_U32(ctx, 31, 0x79A92Cu);
    ctx->pc = 0x79A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A924u;
    // 0x79a928: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A924u, 0x79A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A92Cu;
label_79a92c:
    // 0x79a92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a930: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a934: 0xc04d484  jal         func_135210
    ctx->pc = 0x79A934u;
    SET_GPR_U32(ctx, 31, 0x79A93Cu);
    ctx->pc = 0x79A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A934u;
    // 0x79a938: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135210u, 0x79A934u, 0x79A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A93Cu;
label_79a93c:
    // 0x79a93c: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79A93Cu;
    SET_GPR_U32(ctx, 31, 0x79A944u);
    ctx->pc = 0x79A940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A93Cu;
    // 0x79a940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A93Cu, 0x79A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A944u;
label_79a944:
    // 0x79a944: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a944u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a948: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79a948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a94c: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a94cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79a950: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79a950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a954: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a954u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79AF00u));
    // 0x79a958: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79a958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79a95c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a960: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a964: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79A964u;
    SET_GPR_U32(ctx, 31, 0x79A96Cu);
    ctx->pc = 0x79A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A964u;
    // 0x79a968: 0x24840454  addiu       $a0, $a0, 0x454 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79A964u, 0x79A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A96Cu;
label_79a96c:
    // 0x79a96c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79a96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79a970: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a974: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a978: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a97c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a980: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79a980u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x79a984: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79A984u;
    SET_GPR_U32(ctx, 31, 0x79A98Cu);
    ctx->pc = 0x79A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A984u;
    // 0x79a988: 0x24840454  addiu       $a0, $a0, 0x454 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79A984u, 0x79A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A98Cu;
label_79a98c:
    // 0x79a98c: 0x8e05af00  lw          $a1, -0x5100($s0)
    ctx->pc = 0x79a98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a990: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a994: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a998: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a99c: 0x24a50454  addiu       $a1, $a1, 0x454
    ctx->pc = 0x79a99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1108));
    // 0x79a9a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9a4: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79A9A4u;
    SET_GPR_U32(ctx, 31, 0x79A9ACu);
    ctx->pc = 0x79A9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9A4u;
    // 0x79a9a8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79A9A4u, 0x79A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9ACu;
label_79a9ac:
    // 0x79a9ac: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a9b0: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A9B0u;
    SET_GPR_U32(ctx, 31, 0x79A9B8u);
    ctx->pc = 0x79A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9B0u;
    // 0x79a9b4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A9B0u, 0x79A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9B8u;
label_79a9b8:
    // 0x79a9b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A9B8u;
    {
        const bool branch_taken_0x79a9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9B8u;
        // 0x79a9bc: 0x8e03af00  lw          $v1, -0x5100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9b8) {
            ctx->pc = 0x79A9C8u;
            goto label_79a9c8;
        }
    }
    ctx->pc = 0x79A9C0u;
    // 0x79a9c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A9C0u;
    {
        const bool branch_taken_0x79a9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C0u;
        // 0x79a9c4: 0x24021018  addiu       $v0, $zero, 0x1018 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9c0) {
            ctx->pc = 0x79A9CCu;
            goto label_79a9cc;
        }
    }
    ctx->pc = 0x79A9C8u;
label_79a9c8:
    // 0x79a9c8: 0x24021017  addiu       $v0, $zero, 0x1017
    ctx->pc = 0x79a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4119));
label_79a9cc:
    // 0x79a9cc: 0xa46204b2  sh          $v0, 0x4B2($v1)
    ctx->pc = 0x79a9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1202), (uint16_t)GPR_U32(ctx, 2));
label_79a9d0:
    // 0x79a9d0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x79a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79a9d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9d8: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A9D8u;
    SET_GPR_U32(ctx, 31, 0x79A9E0u);
    ctx->pc = 0x79A9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9D8u;
    // 0x79a9dc: 0xa3a20070  sb          $v0, 0x70($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A9D8u, 0x79A9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9E0u;
label_79a9e0:
    // 0x79a9e0: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x79A9E0u;
    {
        const bool branch_taken_0x79a9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9E0u;
        // 0x79a9e4: 0x27b10080  addiu       $s1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9e0) {
            ctx->pc = 0x79AAA4u;
            goto label_79aaa4;
        }
    }
    ctx->pc = 0x79A9E8u;
    // 0x79a9e8: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x79a9e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a9ec: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x79a9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x79a9f0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79a9f4: 0x26102fc0  addiu       $s0, $s0, 0x2FC0
    ctx->pc = 0x79a9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x79a9f8: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79A9F8u;
    SET_GPR_U32(ctx, 31, 0x79AA00u);
    ctx->pc = 0x79A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9F8u;
    // 0x79a9fc: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A9F8u, 0x79AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA00u;
label_79aa00:
    // 0x79aa00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79aa04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa08: 0xc04d484  jal         func_135210
    ctx->pc = 0x79AA08u;
    SET_GPR_U32(ctx, 31, 0x79AA10u);
    ctx->pc = 0x79AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA08u;
    // 0x79aa0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135210u, 0x79AA08u, 0x79AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA10u;
label_79aa10:
    // 0x79aa10: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79AA10u;
    SET_GPR_U32(ctx, 31, 0x79AA18u);
    ctx->pc = 0x79AA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA10u;
    // 0x79aa14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79AA10u, 0x79AA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA18u;
label_79aa18:
    // 0x79aa18: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79aa18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79aa1c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x79aa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79aa20: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79aa20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79aa24: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79aa24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79aa28: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79aa28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79AF00u));
    // 0x79aa2c: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79aa2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79aa30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79aa30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79aa34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79aa34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aa38: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79AA38u;
    SET_GPR_U32(ctx, 31, 0x79AA40u);
    ctx->pc = 0x79AA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA38u;
    // 0x79aa3c: 0x248404f0  addiu       $a0, $a0, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79AA38u, 0x79AA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA40u;
label_79aa40:
    // 0x79aa40: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79aa40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79aa44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79aa44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79aa48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79aa48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa4c: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79aa50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79aa50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aa54: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79aa54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x79aa58: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79AA58u;
    SET_GPR_U32(ctx, 31, 0x79AA60u);
    ctx->pc = 0x79AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA58u;
    // 0x79aa5c: 0x248404f0  addiu       $a0, $a0, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79AA58u, 0x79AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA60u;
label_79aa60:
    // 0x79aa60: 0x8e05af00  lw          $a1, -0x5100($s0)
    ctx->pc = 0x79aa60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79aa64: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79aa68: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79aa6c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x79aa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79aa70: 0x24a504f0  addiu       $a1, $a1, 0x4F0
    ctx->pc = 0x79aa70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1264));
    // 0x79aa74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79aa74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa78: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79AA78u;
    SET_GPR_U32(ctx, 31, 0x79AA80u);
    ctx->pc = 0x79AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA78u;
    // 0x79aa7c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79AA78u, 0x79AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA80u;
label_79aa80:
    // 0x79aa80: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79aa84: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79AA84u;
    SET_GPR_U32(ctx, 31, 0x79AA8Cu);
    ctx->pc = 0x79AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA84u;
    // 0x79aa88: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79AA84u, 0x79AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA8Cu;
label_79aa8c:
    // 0x79aa8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AA8Cu;
    {
        const bool branch_taken_0x79aa8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA8Cu;
        // 0x79aa90: 0x8e03af00  lw          $v1, -0x5100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa8c) {
            ctx->pc = 0x79AA9Cu;
            goto label_79aa9c;
        }
    }
    ctx->pc = 0x79AA94u;
    // 0x79aa94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79AA94u;
    {
        const bool branch_taken_0x79aa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA94u;
        // 0x79aa98: 0x2402101a  addiu       $v0, $zero, 0x101A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa94) {
            ctx->pc = 0x79AAA0u;
            goto label_79aaa0;
        }
    }
    ctx->pc = 0x79AA9Cu;
label_79aa9c:
    // 0x79aa9c: 0x24021019  addiu       $v0, $zero, 0x1019
    ctx->pc = 0x79aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4121));
label_79aaa0:
    // 0x79aaa0: 0xa462054e  sh          $v0, 0x54E($v1)
    ctx->pc = 0x79aaa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1358), (uint16_t)GPR_U32(ctx, 2));
label_79aaa4:
    // 0x79aaa4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x79aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79aaa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79aaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aaac: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79AAACu;
    SET_GPR_U32(ctx, 31, 0x79AAB4u);
    ctx->pc = 0x79AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAACu;
    // 0x79aab0: 0xa3a20080  sb          $v0, 0x80($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79AAACu, 0x79AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAB4u;
label_79aab4:
    // 0x79aab4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x79AAB4u;
    {
        const bool branch_taken_0x79aab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAB4u;
        // 0x79aab8: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aab4) {
            ctx->pc = 0x79AB40u;
            goto label_79ab40;
        }
    }
    ctx->pc = 0x79AABCu;
    // 0x79aabc: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79AABCu;
    SET_GPR_U32(ctx, 31, 0x79AAC4u);
    ctx->pc = 0x79AAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AABCu;
    // 0x79aac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79AABCu, 0x79AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAC4u;
label_79aac4:
    // 0x79aac4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79aac4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79aac8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x79aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79aacc: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79aaccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79aad0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79aad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79aad4: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79AF00u));
    // 0x79aad8: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79aad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79aadc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79aae0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79aae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aae4: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79AAE4u;
    SET_GPR_U32(ctx, 31, 0x79AAECu);
    ctx->pc = 0x79AAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAE4u;
    // 0x79aae8: 0x2484058c  addiu       $a0, $a0, 0x58C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79AAE4u, 0x79AAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAECu;
label_79aaec:
    // 0x79aaec: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79aaf0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x79aaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x79aaf4: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x79aaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x79aaf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79aaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79aafc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79aafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ab00: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79ab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79ab04: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79ab04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79ab08: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79AB08u;
    SET_GPR_U32(ctx, 31, 0x79AB10u);
    ctx->pc = 0x79AB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB08u;
    // 0x79ab0c: 0x2484058c  addiu       $a0, $a0, 0x58C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79AB08u, 0x79AB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB10u;
label_79ab10:
    // 0x79ab10: 0x8e05af00  lw          $a1, -0x5100($s0)
    ctx->pc = 0x79ab10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79ab14: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79ab14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79ab18: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79ab1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79ab1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ab20: 0x24a5058c  addiu       $a1, $a1, 0x58C
    ctx->pc = 0x79ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1420));
    // 0x79ab24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ab24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab28: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79AB28u;
    SET_GPR_U32(ctx, 31, 0x79AB30u);
    ctx->pc = 0x79AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB28u;
    // 0x79ab2c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79AB28u, 0x79AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB30u;
label_79ab30:
    // 0x79ab30: 0x8e03af00  lw          $v1, -0x5100($s0)
    ctx->pc = 0x79ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79ab34: 0x24021002  addiu       $v0, $zero, 0x1002
    ctx->pc = 0x79ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x79ab38: 0xa46205ea  sh          $v0, 0x5EA($v1)
    ctx->pc = 0x79ab38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1514), (uint16_t)GPR_U32(ctx, 2));
    // 0x79ab3c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x79ab3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79ab40:
    // 0x79ab40: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x79ab40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79ab44: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x79ab44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79ab48: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x79ab48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79ab4c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x79ab4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79ab50: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB50u;
        // 0x79ab54: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB58u;
}
} // namespace gh_r001
