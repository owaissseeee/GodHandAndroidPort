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

// Function: func_00281968
// Address: 0x281968 - 0x281b40
void func_00281968_0x281968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00281968_0x281968");
#endif

    switch (ctx->pc) {
        case 0x281968u: goto label_281968;
        case 0x28196cu: goto label_28196c;
        case 0x281970u: goto label_281970;
        case 0x281974u: goto label_281974;
        case 0x281978u: goto label_281978;
        case 0x28197cu: goto label_28197c;
        case 0x281980u: goto label_281980;
        case 0x281984u: goto label_281984;
        case 0x281988u: goto label_281988;
        case 0x28198cu: goto label_28198c;
        case 0x281990u: goto label_281990;
        case 0x281994u: goto label_281994;
        case 0x281998u: goto label_281998;
        case 0x28199cu: goto label_28199c;
        case 0x2819a0u: goto label_2819a0;
        case 0x2819a4u: goto label_2819a4;
        case 0x2819a8u: goto label_2819a8;
        case 0x2819acu: goto label_2819ac;
        case 0x2819b0u: goto label_2819b0;
        case 0x2819b4u: goto label_2819b4;
        case 0x2819b8u: goto label_2819b8;
        case 0x2819bcu: goto label_2819bc;
        case 0x2819c0u: goto label_2819c0;
        case 0x2819c4u: goto label_2819c4;
        case 0x2819c8u: goto label_2819c8;
        case 0x2819ccu: goto label_2819cc;
        case 0x2819d0u: goto label_2819d0;
        case 0x2819d4u: goto label_2819d4;
        case 0x2819d8u: goto label_2819d8;
        case 0x2819dcu: goto label_2819dc;
        case 0x2819e0u: goto label_2819e0;
        case 0x2819e4u: goto label_2819e4;
        case 0x2819e8u: goto label_2819e8;
        case 0x2819ecu: goto label_2819ec;
        case 0x2819f0u: goto label_2819f0;
        case 0x2819f4u: goto label_2819f4;
        case 0x2819f8u: goto label_2819f8;
        case 0x2819fcu: goto label_2819fc;
        case 0x281a00u: goto label_281a00;
        case 0x281a04u: goto label_281a04;
        case 0x281a08u: goto label_281a08;
        case 0x281a0cu: goto label_281a0c;
        case 0x281a10u: goto label_281a10;
        case 0x281a14u: goto label_281a14;
        case 0x281a18u: goto label_281a18;
        case 0x281a1cu: goto label_281a1c;
        case 0x281a20u: goto label_281a20;
        case 0x281a24u: goto label_281a24;
        case 0x281a28u: goto label_281a28;
        case 0x281a2cu: goto label_281a2c;
        case 0x281a30u: goto label_281a30;
        case 0x281a34u: goto label_281a34;
        case 0x281a38u: goto label_281a38;
        case 0x281a3cu: goto label_281a3c;
        case 0x281a40u: goto label_281a40;
        case 0x281a44u: goto label_281a44;
        case 0x281a48u: goto label_281a48;
        case 0x281a4cu: goto label_281a4c;
        case 0x281a50u: goto label_281a50;
        case 0x281a54u: goto label_281a54;
        case 0x281a58u: goto label_281a58;
        case 0x281a5cu: goto label_281a5c;
        case 0x281a60u: goto label_281a60;
        case 0x281a64u: goto label_281a64;
        case 0x281a68u: goto label_281a68;
        case 0x281a6cu: goto label_281a6c;
        case 0x281a70u: goto label_281a70;
        case 0x281a74u: goto label_281a74;
        case 0x281a78u: goto label_281a78;
        case 0x281a7cu: goto label_281a7c;
        case 0x281a80u: goto label_281a80;
        case 0x281a84u: goto label_281a84;
        case 0x281a88u: goto label_281a88;
        case 0x281a8cu: goto label_281a8c;
        case 0x281a90u: goto label_281a90;
        case 0x281a94u: goto label_281a94;
        case 0x281a98u: goto label_281a98;
        case 0x281a9cu: goto label_281a9c;
        case 0x281aa0u: goto label_281aa0;
        case 0x281aa4u: goto label_281aa4;
        case 0x281aa8u: goto label_281aa8;
        case 0x281aacu: goto label_281aac;
        case 0x281ab0u: goto label_281ab0;
        case 0x281ab4u: goto label_281ab4;
        case 0x281ab8u: goto label_281ab8;
        case 0x281abcu: goto label_281abc;
        case 0x281ac0u: goto label_281ac0;
        case 0x281ac4u: goto label_281ac4;
        case 0x281ac8u: goto label_281ac8;
        case 0x281accu: goto label_281acc;
        case 0x281ad0u: goto label_281ad0;
        case 0x281ad4u: goto label_281ad4;
        case 0x281ad8u: goto label_281ad8;
        case 0x281adcu: goto label_281adc;
        case 0x281ae0u: goto label_281ae0;
        case 0x281ae4u: goto label_281ae4;
        case 0x281ae8u: goto label_281ae8;
        case 0x281aecu: goto label_281aec;
        case 0x281af0u: goto label_281af0;
        case 0x281af4u: goto label_281af4;
        case 0x281af8u: goto label_281af8;
        case 0x281afcu: goto label_281afc;
        case 0x281b00u: goto label_281b00;
        case 0x281b04u: goto label_281b04;
        case 0x281b08u: goto label_281b08;
        case 0x281b0cu: goto label_281b0c;
        case 0x281b10u: goto label_281b10;
        case 0x281b14u: goto label_281b14;
        case 0x281b18u: goto label_281b18;
        case 0x281b1cu: goto label_281b1c;
        case 0x281b20u: goto label_281b20;
        case 0x281b24u: goto label_281b24;
        case 0x281b28u: goto label_281b28;
        case 0x281b2cu: goto label_281b2c;
        case 0x281b30u: goto label_281b30;
        case 0x281b34u: goto label_281b34;
        case 0x281b38u: goto label_281b38;
        case 0x281b3cu: goto label_281b3c;
        default: break;
    }

    ctx->pc = 0x281968u;

label_281968:
    // 0x281968: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x281968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_28196c:
    // 0x28196c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28196cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_281970:
    // 0x281970: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x281970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_281974:
    // 0x281974: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x281974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_281978:
    // 0x281978: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x281978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_28197c:
    // 0x28197c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_281980:
    // 0x281980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_281984:
    // 0x281984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_281988:
    // 0x281988: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x281988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_28198c:
    // 0x28198c: 0x14600066  bnez        $v1, . + 4 + (0x66 << 2)
label_281990:
    if (ctx->pc == 0x281990u) {
        ctx->pc = 0x281990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28198Cu;
        // 0x281990: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x281994u;
        goto label_281994;
    }
    ctx->pc = 0x28198Cu;
    {
        const bool branch_taken_0x28198c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x281990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28198Cu;
        // 0x281990: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28198c) {
            ctx->pc = 0x281B28u;
            goto label_281b28;
        }
    }
    ctx->pc = 0x281994u;
label_281994:
    // 0x281994: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x281994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_281998:
    // 0x281998: 0xc0a4bd4  jal         func_292F50
label_28199c:
    if (ctx->pc == 0x28199Cu) {
        ctx->pc = 0x28199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281998u;
        // 0x28199c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2819A0u;
        goto label_2819a0;
    }
    ctx->pc = 0x281998u;
    SET_GPR_U32(ctx, 31, 0x2819A0u);
    ctx->pc = 0x28199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281998u;
    // 0x28199c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x281998u, 0x2819A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819A0u;
label_2819a0:
    // 0x2819a0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2819a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2819a4:
    // 0x2819a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2819a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2819a8:
    // 0x2819a8: 0xc0560a2  jal         func_158288
label_2819ac:
    if (ctx->pc == 0x2819ACu) {
        ctx->pc = 0x2819ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819A8u;
        // 0x2819ac: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2819B0u;
        goto label_2819b0;
    }
    ctx->pc = 0x2819A8u;
    SET_GPR_U32(ctx, 31, 0x2819B0u);
    ctx->pc = 0x2819ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2819A8u;
    // 0x2819ac: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x2819A8u, 0x2819B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819B0u;
label_2819b0:
    // 0x2819b0: 0xc0b6dac  jal         func_2DB6B0
label_2819b4:
    if (ctx->pc == 0x2819B4u) {
        ctx->pc = 0x2819B8u;
        goto label_2819b8;
    }
    ctx->pc = 0x2819B0u;
    SET_GPR_U32(ctx, 31, 0x2819B8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2819B0u, 0x2819B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819B8u;
label_2819b8:
    // 0x2819b8: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x2819b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_2819bc:
    // 0x2819bc: 0xc07dfac  jal         func_1F7EB0
label_2819c0:
    if (ctx->pc == 0x2819C0u) {
        ctx->pc = 0x2819C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819BCu;
        // 0x2819c0: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2819C4u;
        goto label_2819c4;
    }
    ctx->pc = 0x2819BCu;
    SET_GPR_U32(ctx, 31, 0x2819C4u);
    ctx->pc = 0x2819C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2819BCu;
    // 0x2819c0: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2819BCu, 0x2819C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819C4u;
label_2819c4:
    // 0x2819c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2819c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2819c8:
    // 0x2819c8: 0xc0a06d0  jal         func_281B40
label_2819cc:
    if (ctx->pc == 0x2819CCu) {
        ctx->pc = 0x2819CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819C8u;
        // 0x2819cc: 0xe6000618  swc1        $f0, 0x618($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2819D0u;
        goto label_2819d0;
    }
    ctx->pc = 0x2819C8u;
    SET_GPR_U32(ctx, 31, 0x2819D0u);
    ctx->pc = 0x2819CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2819C8u;
    // 0x2819cc: 0xe6000618  swc1        $f0, 0x618($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1560), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x281B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281B40u, 0x2819C8u, 0x2819D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819D0u;
label_2819d0:
    // 0x2819d0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2819d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2819d4:
    // 0x2819d4: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x2819d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_2819d8:
    // 0x2819d8: 0x2446ff40  addiu       $a2, $v0, -0xC0
    ctx->pc = 0x2819d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967104));
label_2819dc:
    // 0x2819dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2819dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2819e0:
    // 0x2819e0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2819e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2819e4:
    // 0x2819e4: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x2819e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2819e8:
    // 0x2819e8: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x2819e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_2819ec:
    // 0x2819ec: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_2819f0:
    if (ctx->pc == 0x2819F0u) {
        ctx->pc = 0x2819F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819ECu;
        // 0x2819f0: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2819F4u;
        goto label_2819f4;
    }
    ctx->pc = 0x2819ECu;
    {
        const bool branch_taken_0x2819ec = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2819F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819ECu;
        // 0x2819f0: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819ec) {
            ctx->pc = 0x281A18u;
            goto label_281a18;
        }
    }
    ctx->pc = 0x2819F4u;
label_2819f4:
    // 0x2819f4: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x2819f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2819f8:
    // 0x2819f8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2819f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2819fc:
    // 0x2819fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2819fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_281a00:
    // 0x281a00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x281a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_281a04:
    // 0x281a04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x281a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_281a08:
    // 0x281a08: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x281a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_281a0c:
    // 0x281a0c: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x281a0cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_281a10:
    // 0x281a10: 0x10000003  b           . + 4 + (0x3 << 2)
label_281a14:
    if (ctx->pc == 0x281A14u) {
        ctx->pc = 0x281A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A10u;
        // 0x281a14: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A18u;
        goto label_281a18;
    }
    ctx->pc = 0x281A10u;
    {
        const bool branch_taken_0x281a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A10u;
        // 0x281a14: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a10) {
            ctx->pc = 0x281A20u;
            goto label_281a20;
        }
    }
    ctx->pc = 0x281A18u;
label_281a18:
    // 0x281a18: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x281a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_281a1c:
    // 0x281a1c: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x281a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_281a20:
    // 0x281a20: 0x24e3ff40  addiu       $v1, $a3, -0xC0
    ctx->pc = 0x281a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967104));
label_281a24:
    // 0x281a24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x281a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_281a28:
    // 0x281a28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_281a2c:
    // 0x281a2c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_281a30:
    if (ctx->pc == 0x281A30u) {
        ctx->pc = 0x281A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A2Cu;
        // 0x281a30: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A34u;
        goto label_281a34;
    }
    ctx->pc = 0x281A2Cu;
    {
        const bool branch_taken_0x281a2c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x281A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A2Cu;
        // 0x281a30: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a2c) {
            ctx->pc = 0x281A48u;
            goto label_281a48;
        }
    }
    ctx->pc = 0x281A34u;
label_281a34:
    // 0x281a34: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x281a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_281a38:
    // 0x281a38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x281a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_281a3c:
    // 0x281a3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x281a3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_281a40:
    // 0x281a40: 0x10000002  b           . + 4 + (0x2 << 2)
label_281a44:
    if (ctx->pc == 0x281A44u) {
        ctx->pc = 0x281A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A40u;
        // 0x281a44: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A48u;
        goto label_281a48;
    }
    ctx->pc = 0x281A40u;
    {
        const bool branch_taken_0x281a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A40u;
        // 0x281a44: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a40) {
            ctx->pc = 0x281A4Cu;
            goto label_281a4c;
        }
    }
    ctx->pc = 0x281A48u;
label_281a48:
    // 0x281a48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x281a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_281a4c:
    // 0x281a4c: 0xc0f809  jalr        $a2
label_281a50:
    if (ctx->pc == 0x281A50u) {
        ctx->pc = 0x281A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A4Cu;
        // 0x281a50: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A54u;
        goto label_281a54;
    }
    ctx->pc = 0x281A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x281A54u);
        ctx->pc = 0x281A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A4Cu;
        // 0x281a50: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281A4Cu, 0x281A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281A54u;
label_281a54:
    // 0x281a54: 0xc053ed2  jal         func_14FB48
label_281a58:
    if (ctx->pc == 0x281A58u) {
        ctx->pc = 0x281A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A54u;
        // 0x281a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A5Cu;
        goto label_281a5c;
    }
    ctx->pc = 0x281A54u;
    SET_GPR_U32(ctx, 31, 0x281A5Cu);
    ctx->pc = 0x281A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A54u;
    // 0x281a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x281A54u, 0x281A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A5Cu;
label_281a5c:
    // 0x281a5c: 0xc0a0c1c  jal         func_283070
label_281a60:
    if (ctx->pc == 0x281A60u) {
        ctx->pc = 0x281A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A5Cu;
        // 0x281a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A64u;
        goto label_281a64;
    }
    ctx->pc = 0x281A5Cu;
    SET_GPR_U32(ctx, 31, 0x281A64u);
    ctx->pc = 0x281A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A5Cu;
    // 0x281a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283070u, 0x281A5Cu, 0x281A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A64u;
label_281a64:
    // 0x281a64: 0xc0527ae  jal         func_149EB8
label_281a68:
    if (ctx->pc == 0x281A68u) {
        ctx->pc = 0x281A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A64u;
        // 0x281a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A6Cu;
        goto label_281a6c;
    }
    ctx->pc = 0x281A64u;
    SET_GPR_U32(ctx, 31, 0x281A6Cu);
    ctx->pc = 0x281A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A64u;
    // 0x281a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x281A64u, 0x281A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A6Cu;
label_281a6c:
    // 0x281a6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x281a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_281a70:
    // 0x281a70: 0xc054a88  jal         func_152A20
label_281a74:
    if (ctx->pc == 0x281A74u) {
        ctx->pc = 0x281A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A70u;
        // 0x281a74: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A78u;
        goto label_281a78;
    }
    ctx->pc = 0x281A70u;
    SET_GPR_U32(ctx, 31, 0x281A78u);
    ctx->pc = 0x281A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A70u;
    // 0x281a74: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x281A70u, 0x281A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A78u;
label_281a78:
    // 0x281a78: 0xc05280e  jal         func_14A038
label_281a7c:
    if (ctx->pc == 0x281A7Cu) {
        ctx->pc = 0x281A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A78u;
        // 0x281a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A80u;
        goto label_281a80;
    }
    ctx->pc = 0x281A78u;
    SET_GPR_U32(ctx, 31, 0x281A80u);
    ctx->pc = 0x281A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A78u;
    // 0x281a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x281A78u, 0x281A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A80u;
label_281a80:
    // 0x281a80: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x281a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_281a84:
    // 0x281a84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281a88:
    // 0x281a88: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x281a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_281a8c:
    // 0x281a8c: 0xc04d476  jal         func_1351D8
label_281a90:
    if (ctx->pc == 0x281A90u) {
        ctx->pc = 0x281A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A8Cu;
        // 0x281a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A94u;
        goto label_281a94;
    }
    ctx->pc = 0x281A8Cu;
    SET_GPR_U32(ctx, 31, 0x281A94u);
    ctx->pc = 0x281A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A8Cu;
    // 0x281a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x281A8Cu, 0x281A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A94u;
label_281a94:
    // 0x281a94: 0xc07dfbc  jal         func_1F7EF0
label_281a98:
    if (ctx->pc == 0x281A98u) {
        ctx->pc = 0x281A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A94u;
        // 0x281a98: 0xc60c15b4  lwc1        $f12, 0x15B4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A9Cu;
        goto label_281a9c;
    }
    ctx->pc = 0x281A94u;
    SET_GPR_U32(ctx, 31, 0x281A9Cu);
    ctx->pc = 0x281A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A94u;
    // 0x281a98: 0xc60c15b4  lwc1        $f12, 0x15B4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x281A94u, 0x281A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A9Cu;
label_281a9c:
    // 0x281a9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x281a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_281aa0:
    // 0x281aa0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x281aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_281aa4:
    // 0x281aa4: 0xc60405a8  lwc1        $f4, 0x5A8($s0)
    ctx->pc = 0x281aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_281aa8:
    // 0x281aa8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x281aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_281aac:
    // 0x281aac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x281aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_281ab0:
    // 0x281ab0: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x281ab0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_281ab4:
    // 0x281ab4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x281ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_281ab8:
    // 0x281ab8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x281ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_281abc:
    // 0x281abc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x281abcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_281ac0:
    // 0x281ac0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x281ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_281ac4:
    // 0x281ac4: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x281ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
label_281ac8:
    // 0x281ac8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x281ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_281acc:
    // 0x281acc: 0x4603a500  add.s       $f20, $f20, $f3
    ctx->pc = 0x281accu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
label_281ad0:
    // 0x281ad0: 0xc60015b4  lwc1        $f0, 0x15B4($s0)
    ctx->pc = 0x281ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281ad4:
    // 0x281ad4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x281ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_281ad8:
    // 0x281ad8: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x281ad8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_281adc:
    // 0x281adc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_281ae0:
    // 0x281ae0: 0x4604a502  mul.s       $f20, $f20, $f4
    ctx->pc = 0x281ae0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_281ae4:
    // 0x281ae4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x281ae4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_281ae8:
    // 0x281ae8: 0xc07df52  jal         func_1F7D48
label_281aec:
    if (ctx->pc == 0x281AECu) {
        ctx->pc = 0x281AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AE8u;
        // 0x281aec: 0xe60015b4  swc1        $f0, 0x15B4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x281AF0u;
        goto label_281af0;
    }
    ctx->pc = 0x281AE8u;
    SET_GPR_U32(ctx, 31, 0x281AF0u);
    ctx->pc = 0x281AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281AE8u;
    // 0x281aec: 0xe60015b4  swc1        $f0, 0x15B4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5556), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x281AE8u, 0x281AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AF0u;
label_281af0:
    // 0x281af0: 0xe60015b4  swc1        $f0, 0x15B4($s0)
    ctx->pc = 0x281af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5556), bits); }
label_281af4:
    // 0x281af4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x281af4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_281af8:
    // 0x281af8: 0xc053934  jal         func_14E4D0
label_281afc:
    if (ctx->pc == 0x281AFCu) {
        ctx->pc = 0x281AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AF8u;
        // 0x281afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B00u;
        goto label_281b00;
    }
    ctx->pc = 0x281AF8u;
    SET_GPR_U32(ctx, 31, 0x281B00u);
    ctx->pc = 0x281AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281AF8u;
    // 0x281afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E4D0u, 0x281AF8u, 0x281B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B00u;
label_281b00:
    // 0x281b00: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x281b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_281b04:
    // 0x281b04: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x281b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_281b08:
    // 0x281b08: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_281b0c:
    if (ctx->pc == 0x281B0Cu) {
        ctx->pc = 0x281B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B08u;
        // 0x281b0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B10u;
        goto label_281b10;
    }
    ctx->pc = 0x281B08u;
    {
        const bool branch_taken_0x281b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x281b08) {
            ctx->pc = 0x281B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281B08u;
            // 0x281b0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281B2Cu;
            goto label_281b2c;
        }
    }
    ctx->pc = 0x281B10u;
label_281b10:
    // 0x281b10: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x281b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281b14:
    // 0x281b14: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x281b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_281b18:
    // 0x281b18: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x281b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_281b1c:
    // 0x281b1c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x281b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_281b20:
    // 0x281b20: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x281b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281b24:
    // 0x281b24: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x281b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_281b28:
    // 0x281b28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x281b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_281b2c:
    // 0x281b2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_281b30:
    // 0x281b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_281b34:
    // 0x281b34: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x281b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_281b38:
    // 0x281b38: 0x3e00008  jr          $ra
label_281b3c:
    if (ctx->pc == 0x281B3Cu) {
        ctx->pc = 0x281B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B38u;
        // 0x281b3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B40u;
        goto label_fallthrough_0x281b38;
    }
    ctx->pc = 0x281B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B38u;
        // 0x281b3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x281b38:
    ctx->pc = 0x281B40u;
}
