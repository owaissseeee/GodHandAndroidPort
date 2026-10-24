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

// Function: func_0031A0E8
// Address: 0x31a0e8 - 0x31a300
void func_0031A0E8_0x31a0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031A0E8_0x31a0e8");
#endif

    switch (ctx->pc) {
        case 0x31a150u: goto label_31a150;
        case 0x31a15cu: goto label_31a15c;
        case 0x31a16cu: goto label_31a16c;
        case 0x31a17cu: goto label_31a17c;
        case 0x31a18cu: goto label_31a18c;
        case 0x31a19cu: goto label_31a19c;
        case 0x31a1acu: goto label_31a1ac;
        case 0x31a1bcu: goto label_31a1bc;
        case 0x31a1ccu: goto label_31a1cc;
        case 0x31a1dcu: goto label_31a1dc;
        case 0x31a1f4u: goto label_31a1f4;
        case 0x31a224u: goto label_31a224;
        case 0x31a234u: goto label_31a234;
        case 0x31a244u: goto label_31a244;
        case 0x31a254u: goto label_31a254;
        case 0x31a264u: goto label_31a264;
        case 0x31a274u: goto label_31a274;
        case 0x31a284u: goto label_31a284;
        case 0x31a294u: goto label_31a294;
        case 0x31a2a4u: goto label_31a2a4;
        case 0x31a2b4u: goto label_31a2b4;
        case 0x31a2c4u: goto label_31a2c4;
        case 0x31a2d0u: goto label_31a2d0;
        default: break;
    }

    ctx->pc = 0x31a0e8u;

    // 0x31a0e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31a0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x31a0ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a0f0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x31a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x31a0f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31a0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a0f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x31a0fc: 0x26020a00  addiu       $v0, $s0, 0xA00
    ctx->pc = 0x31a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2560));
    // 0x31a100: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x31a100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x31a104: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x31a104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x31a108: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x31a108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a10c: 0x26020900  addiu       $v0, $s0, 0x900
    ctx->pc = 0x31a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2304));
    // 0x31a110: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x31a110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x31a114: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x31a114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x31a118: 0x26120100  addiu       $s2, $s0, 0x100
    ctx->pc = 0x31a118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x31a11c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x31a11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x31a120: 0x26130200  addiu       $s3, $s0, 0x200
    ctx->pc = 0x31a120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x31a124: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31a124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31a128: 0x26140300  addiu       $s4, $s0, 0x300
    ctx->pc = 0x31a128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x31a12c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x31a12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x31a130: 0x26150500  addiu       $s5, $s0, 0x500
    ctx->pc = 0x31a130u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
    // 0x31a134: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x31a134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x31a138: 0x26160600  addiu       $s6, $s0, 0x600
    ctx->pc = 0x31a138u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x31a13c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x31a13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x31a140: 0x26170700  addiu       $s7, $s0, 0x700
    ctx->pc = 0x31a140u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1792));
    // 0x31a144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a148: 0x261e0800  addiu       $fp, $s0, 0x800
    ctx->pc = 0x31a148u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
    // 0x31a14c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x31a14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_31a150:
    // 0x31a150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a154: 0xc053f82  jal         func_14FE08
    ctx->pc = 0x31A154u;
    SET_GPR_U32(ctx, 31, 0x31A15Cu);
    ctx->pc = 0x31A158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A154u;
    // 0x31a158: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE08u, 0x31A154u, 0x31A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A15Cu;
label_31a15c:
    // 0x31a15c: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x31a15cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x31a160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31a160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a164: 0xc053f82  jal         func_14FE08
    ctx->pc = 0x31A164u;
    SET_GPR_U32(ctx, 31, 0x31A16Cu);
    ctx->pc = 0x31A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A164u;
    // 0x31a168: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE08u, 0x31A164u, 0x31A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A16Cu;
label_31a16c:
    // 0x31a16c: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x31a16cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x31a170: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31a170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a174: 0xc053f82  jal         func_14FE08
    ctx->pc = 0x31A174u;
    SET_GPR_U32(ctx, 31, 0x31A17Cu);
    ctx->pc = 0x31A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A174u;
    // 0x31a178: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE08u, 0x31A174u, 0x31A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A17Cu;
label_31a17c:
    // 0x31a17c: 0x26730080  addiu       $s3, $s3, 0x80
    ctx->pc = 0x31a17cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x31a180: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31a180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a184: 0xc053f82  jal         func_14FE08
    ctx->pc = 0x31A184u;
    SET_GPR_U32(ctx, 31, 0x31A18Cu);
    ctx->pc = 0x31A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A184u;
    // 0x31a188: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE08u, 0x31A184u, 0x31A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A18Cu;
label_31a18c:
    // 0x31a18c: 0x26940080  addiu       $s4, $s4, 0x80
    ctx->pc = 0x31a18cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x31a190: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a194: 0xc053f82  jal         func_14FE08
    ctx->pc = 0x31A194u;
    SET_GPR_U32(ctx, 31, 0x31A19Cu);
    ctx->pc = 0x31A198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A194u;
    // 0x31a198: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE08u, 0x31A194u, 0x31A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A19Cu;
label_31a19c:
    // 0x31a19c: 0x26b50080  addiu       $s5, $s5, 0x80
    ctx->pc = 0x31a19cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x31a1a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31a1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a1a4: 0xc053f82  jal         func_14FE08
    ctx->pc = 0x31A1A4u;
    SET_GPR_U32(ctx, 31, 0x31A1ACu);
    ctx->pc = 0x31A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A1A4u;
    // 0x31a1a8: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE08u, 0x31A1A4u, 0x31A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A1ACu;
label_31a1ac:
    // 0x31a1ac: 0x26d60080  addiu       $s6, $s6, 0x80
    ctx->pc = 0x31a1acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x31a1b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31a1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a1b4: 0xc053f82  jal         func_14FE08
    ctx->pc = 0x31A1B4u;
    SET_GPR_U32(ctx, 31, 0x31A1BCu);
    ctx->pc = 0x31A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A1B4u;
    // 0x31a1b8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE08u, 0x31A1B4u, 0x31A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A1BCu;
label_31a1bc:
    // 0x31a1bc: 0x26f70080  addiu       $s7, $s7, 0x80
    ctx->pc = 0x31a1bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 128));
    // 0x31a1c0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31a1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a1c4: 0xc053f82  jal         func_14FE08
    ctx->pc = 0x31A1C4u;
    SET_GPR_U32(ctx, 31, 0x31A1CCu);
    ctx->pc = 0x31A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A1C4u;
    // 0x31a1c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE08u, 0x31A1C4u, 0x31A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A1CCu;
label_31a1cc:
    // 0x31a1cc: 0x27de0080  addiu       $fp, $fp, 0x80
    ctx->pc = 0x31a1ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    // 0x31a1d0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x31a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31a1d4: 0xc053f82  jal         func_14FE08
    ctx->pc = 0x31A1D4u;
    SET_GPR_U32(ctx, 31, 0x31A1DCu);
    ctx->pc = 0x31A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A1D4u;
    // 0x31a1d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE08u, 0x31A1D4u, 0x31A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A1DCu;
label_31a1dc:
    // 0x31a1dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x31a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31a1e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x31a1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a1e4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x31a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31a1e8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x31a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x31a1ec: 0xc053f82  jal         func_14FE08
    ctx->pc = 0x31A1ECu;
    SET_GPR_U32(ctx, 31, 0x31A1F4u);
    ctx->pc = 0x31A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A1ECu;
    // 0x31a1f0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE08u, 0x31A1ECu, 0x31A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A1F4u;
label_31a1f4:
    // 0x31a1f4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x31a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31a1f8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x31a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x31a1fc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x31a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x31a200: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x31a200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a204: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31a208: 0x441ffd1  bgez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x31A208u;
    {
        const bool branch_taken_0x31a208 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x31A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A208u;
        // 0x31a20c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a208) {
            ctx->pc = 0x31A150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a150;
        }
    }
    ctx->pc = 0x31A210u;
    // 0x31a210: 0xa2000b58  sb          $zero, 0xB58($s0)
    ctx->pc = 0x31a210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2904), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a214: 0x26040b00  addiu       $a0, $s0, 0xB00
    ctx->pc = 0x31a214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2816));
    // 0x31a218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a21c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x31A21Cu;
    SET_GPR_U32(ctx, 31, 0x31A224u);
    ctx->pc = 0x31A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A21Cu;
    // 0x31a220: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x31A21Cu, 0x31A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A224u;
label_31a224:
    // 0x31a224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a228: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31a228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a22c: 0xc0c68c0  jal         func_31A300
    ctx->pc = 0x31A22Cu;
    SET_GPR_U32(ctx, 31, 0x31A234u);
    ctx->pc = 0x31A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A22Cu;
    // 0x31a230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A300u, 0x31A22Cu, 0x31A234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A234u;
label_31a234:
    // 0x31a234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a238: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x31a238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x31a23c: 0xc0c68c0  jal         func_31A300
    ctx->pc = 0x31A23Cu;
    SET_GPR_U32(ctx, 31, 0x31A244u);
    ctx->pc = 0x31A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A23Cu;
    // 0x31a240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A300u, 0x31A23Cu, 0x31A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A244u;
label_31a244:
    // 0x31a244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a248: 0x26060200  addiu       $a2, $s0, 0x200
    ctx->pc = 0x31a248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x31a24c: 0xc0c68c0  jal         func_31A300
    ctx->pc = 0x31A24Cu;
    SET_GPR_U32(ctx, 31, 0x31A254u);
    ctx->pc = 0x31A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A24Cu;
    // 0x31a250: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A300u, 0x31A24Cu, 0x31A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A254u;
label_31a254:
    // 0x31a254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a258: 0x26060300  addiu       $a2, $s0, 0x300
    ctx->pc = 0x31a258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x31a25c: 0xc0c68c0  jal         func_31A300
    ctx->pc = 0x31A25Cu;
    SET_GPR_U32(ctx, 31, 0x31A264u);
    ctx->pc = 0x31A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A25Cu;
    // 0x31a260: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A300u, 0x31A25Cu, 0x31A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A264u;
label_31a264:
    // 0x31a264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a268: 0x26060500  addiu       $a2, $s0, 0x500
    ctx->pc = 0x31a268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
    // 0x31a26c: 0xc0c68c0  jal         func_31A300
    ctx->pc = 0x31A26Cu;
    SET_GPR_U32(ctx, 31, 0x31A274u);
    ctx->pc = 0x31A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A26Cu;
    // 0x31a270: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A300u, 0x31A26Cu, 0x31A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A274u;
label_31a274:
    // 0x31a274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a278: 0x26060600  addiu       $a2, $s0, 0x600
    ctx->pc = 0x31a278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x31a27c: 0xc0c68c0  jal         func_31A300
    ctx->pc = 0x31A27Cu;
    SET_GPR_U32(ctx, 31, 0x31A284u);
    ctx->pc = 0x31A280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A27Cu;
    // 0x31a280: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A300u, 0x31A27Cu, 0x31A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A284u;
label_31a284:
    // 0x31a284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a288: 0x26060700  addiu       $a2, $s0, 0x700
    ctx->pc = 0x31a288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1792));
    // 0x31a28c: 0xc0c68c0  jal         func_31A300
    ctx->pc = 0x31A28Cu;
    SET_GPR_U32(ctx, 31, 0x31A294u);
    ctx->pc = 0x31A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A28Cu;
    // 0x31a290: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A300u, 0x31A28Cu, 0x31A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A294u;
label_31a294:
    // 0x31a294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a298: 0x26060800  addiu       $a2, $s0, 0x800
    ctx->pc = 0x31a298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
    // 0x31a29c: 0xc0c68c0  jal         func_31A300
    ctx->pc = 0x31A29Cu;
    SET_GPR_U32(ctx, 31, 0x31A2A4u);
    ctx->pc = 0x31A2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A29Cu;
    // 0x31a2a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A300u, 0x31A29Cu, 0x31A2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A2A4u;
label_31a2a4:
    // 0x31a2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2a8: 0x26060900  addiu       $a2, $s0, 0x900
    ctx->pc = 0x31a2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2304));
    // 0x31a2ac: 0xc0c68c0  jal         func_31A300
    ctx->pc = 0x31A2ACu;
    SET_GPR_U32(ctx, 31, 0x31A2B4u);
    ctx->pc = 0x31A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A2ACu;
    // 0x31a2b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A300u, 0x31A2ACu, 0x31A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A2B4u;
label_31a2b4:
    // 0x31a2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2b8: 0x26060a00  addiu       $a2, $s0, 0xA00
    ctx->pc = 0x31a2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2560));
    // 0x31a2bc: 0xc0c68c0  jal         func_31A300
    ctx->pc = 0x31A2BCu;
    SET_GPR_U32(ctx, 31, 0x31A2C4u);
    ctx->pc = 0x31A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A2BCu;
    // 0x31a2c0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A300u, 0x31A2BCu, 0x31A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A2C4u;
label_31a2c4:
    // 0x31a2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2c8: 0xc0c68c8  jal         func_31A320
    ctx->pc = 0x31A2C8u;
    SET_GPR_U32(ctx, 31, 0x31A2D0u);
    ctx->pc = 0x31A2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A2C8u;
    // 0x31a2cc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A320u, 0x31A2C8u, 0x31A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A2D0u;
label_31a2d0:
    // 0x31a2d0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x31a2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31a2d4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x31a2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31a2d8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x31a2d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31a2dc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x31a2dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31a2e0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x31a2e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31a2e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31a2e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31a2e8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x31a2e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31a2ec: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x31a2ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31a2f0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x31a2f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a2f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x31A2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2F8u;
        // 0x31a2fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A300u;
}
