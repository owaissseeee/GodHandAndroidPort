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

// Function: func_001633A0
// Address: 0x1633a0 - 0x1634e0
void func_001633A0_0x1633a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001633A0_0x1633a0");
#endif

    ctx->pc = 0x1633a0u;

    // 0x1633a0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1633a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1633a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1633a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1633a8: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x1633a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x1633ac: 0x90640014  lbu         $a0, 0x14($v1)
    ctx->pc = 0x1633acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1633b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1633B0u;
    {
        const bool branch_taken_0x1633b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633B0u;
        // 0x1633b4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633b0) {
            ctx->pc = 0x1633C0u;
            goto label_1633c0;
        }
    }
    ctx->pc = 0x1633B8u;
    // 0x1633b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1633B8u;
    {
        const bool branch_taken_0x1633b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633B8u;
        // 0x1633bc: 0x90437a57  lbu         $v1, 0x7A57($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 31319)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633b8) {
            ctx->pc = 0x1633C8u;
            goto label_1633c8;
        }
    }
    ctx->pc = 0x1633C0u;
label_1633c0:
    // 0x1633c0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1633c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1633c4: 0x90437a51  lbu         $v1, 0x7A51($v0)
    ctx->pc = 0x1633c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x747A51u));
label_1633c8:
    // 0x1633c8: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x1633c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1633cc: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1633CCu;
    {
        const bool branch_taken_0x1633cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633CCu;
        // 0x1633d0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633cc) {
            ctx->pc = 0x1634D4u;
            goto label_1634d4;
        }
    }
    ctx->pc = 0x1633D4u;
    // 0x1633d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1633d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1633d8: 0x2442f510  addiu       $v0, $v0, -0xAF0
    ctx->pc = 0x1633d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964496));
    // 0x1633dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1633dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1633e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1633e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1633e4: 0x800008  jr          $a0
    ctx->pc = 0x1633E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1633ECu: goto label_1633ec;
            case 0x163408u: goto label_163408;
            case 0x163420u: goto label_163420;
            case 0x163438u: goto label_163438;
            case 0x163450u: goto label_163450;
            case 0x163468u: goto label_163468;
            case 0x163480u: goto label_163480;
            case 0x163498u: goto label_163498;
            case 0x1634B0u: goto label_1634b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1633E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1633ECu;
label_1633ec:
    // 0x1633ec: 0x3c01437e  lui         $at, 0x437E
    ctx->pc = 0x1633ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17278 << 16));
    // 0x1633f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1633f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1633f4: 0x3c014390  lui         $at, 0x4390
    ctx->pc = 0x1633f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17296 << 16));
    // 0x1633f8: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x1633f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x1633fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1633fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163400: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x163400u;
    {
        const bool branch_taken_0x163400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163400u;
        // 0x163404: 0x8ca30080  lw          $v1, 0x80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163400) {
            ctx->pc = 0x1634C8u;
            goto label_1634c8;
        }
    }
    ctx->pc = 0x163408u;
label_163408:
    // 0x163408: 0x3c0142cc  lui         $at, 0x42CC
    ctx->pc = 0x163408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17100 << 16));
    // 0x16340c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16340cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163410: 0x3c014385  lui         $at, 0x4385
    ctx->pc = 0x163410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17285 << 16));
    // 0x163414: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163418: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x163418u;
    {
        const bool branch_taken_0x163418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163418u;
        // 0x16341c: 0x8ca30080  lw          $v1, 0x80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163418) {
            ctx->pc = 0x1634C8u;
            goto label_1634c8;
        }
    }
    ctx->pc = 0x163420u;
label_163420:
    // 0x163420: 0x3c014327  lui         $at, 0x4327
    ctx->pc = 0x163420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17191 << 16));
    // 0x163424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163428: 0x3c014343  lui         $at, 0x4343
    ctx->pc = 0x163428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17219 << 16));
    // 0x16342c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16342cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163430: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x163430u;
    {
        const bool branch_taken_0x163430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163430u;
        // 0x163434: 0x8ca30080  lw          $v1, 0x80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163430) {
            ctx->pc = 0x1634C8u;
            goto label_1634c8;
        }
    }
    ctx->pc = 0x163438u;
label_163438:
    // 0x163438: 0x3c014306  lui         $at, 0x4306
    ctx->pc = 0x163438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17158 << 16));
    // 0x16343c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16343cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163440: 0x3c0142b8  lui         $at, 0x42B8
    ctx->pc = 0x163440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17080 << 16));
    // 0x163444: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163448: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x163448u;
    {
        const bool branch_taken_0x163448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163448u;
        // 0x16344c: 0x8ca30080  lw          $v1, 0x80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163448) {
            ctx->pc = 0x1634C8u;
            goto label_1634c8;
        }
    }
    ctx->pc = 0x163450u;
label_163450:
    // 0x163450: 0x3c01436b  lui         $at, 0x436B
    ctx->pc = 0x163450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17259 << 16));
    // 0x163454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163458: 0x3c0142fc  lui         $at, 0x42FC
    ctx->pc = 0x163458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17148 << 16));
    // 0x16345c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16345cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163460: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x163460u;
    {
        const bool branch_taken_0x163460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163460u;
        // 0x163464: 0x8ca30080  lw          $v1, 0x80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163460) {
            ctx->pc = 0x1634C8u;
            goto label_1634c8;
        }
    }
    ctx->pc = 0x163468u;
label_163468:
    // 0x163468: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x163468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x16346c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16346cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163470: 0x3c01433e  lui         $at, 0x433E
    ctx->pc = 0x163470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17214 << 16));
    // 0x163474: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163478: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x163478u;
    {
        const bool branch_taken_0x163478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163478u;
        // 0x16347c: 0x8ca30080  lw          $v1, 0x80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163478) {
            ctx->pc = 0x1634C8u;
            goto label_1634c8;
        }
    }
    ctx->pc = 0x163480u;
label_163480:
    // 0x163480: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x163480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x163484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163488: 0x3c0142b0  lui         $at, 0x42B0
    ctx->pc = 0x163488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17072 << 16));
    // 0x16348c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16348cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163490: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x163490u;
    {
        const bool branch_taken_0x163490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163490u;
        // 0x163494: 0x8ca30080  lw          $v1, 0x80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163490) {
            ctx->pc = 0x1634C8u;
            goto label_1634c8;
        }
    }
    ctx->pc = 0x163498u;
label_163498:
    // 0x163498: 0x3c0143cc  lui         $at, 0x43CC
    ctx->pc = 0x163498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17356 << 16));
    // 0x16349c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16349cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1634a0: 0x3c0142b0  lui         $at, 0x42B0
    ctx->pc = 0x1634a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17072 << 16));
    // 0x1634a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1634a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1634a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1634A8u;
    {
        const bool branch_taken_0x1634a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1634ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634A8u;
        // 0x1634ac: 0x8ca30080  lw          $v1, 0x80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634a8) {
            ctx->pc = 0x1634C8u;
            goto label_1634c8;
        }
    }
    ctx->pc = 0x1634B0u;
label_1634b0:
    // 0x1634b0: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x1634b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x1634b4: 0x3c0143e3  lui         $at, 0x43E3
    ctx->pc = 0x1634b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17379 << 16));
    // 0x1634b8: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x1634b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x1634bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1634bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1634c0: 0x3c01423c  lui         $at, 0x423C
    ctx->pc = 0x1634c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16956 << 16));
    // 0x1634c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1634c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1634c8:
    // 0x1634c8: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x1634c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x1634cc: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x1634ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x1634d0: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x1634d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_1634d4:
    // 0x1634d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1634D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1634D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1634DCu;
    // 0x1634dc: 0x0  nop
    ctx->pc = 0x1634dcu;
    // NOP
    ctx->pc = 0x1634e0u;
}
