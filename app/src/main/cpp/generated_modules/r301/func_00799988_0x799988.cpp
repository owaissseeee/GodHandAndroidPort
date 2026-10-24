#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_00799988
// Address: 0x799988 - 0x799cf0
void func_00799988_0x799988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799988_0x799988");
#endif

    switch (ctx->pc) {
        case 0x7999d0u: goto label_7999d0;
        case 0x7999dcu: goto label_7999dc;
        case 0x7999f4u: goto label_7999f4;
        case 0x799a00u: goto label_799a00;
        case 0x799a08u: goto label_799a08;
        case 0x799a2cu: goto label_799a2c;
        case 0x799a3cu: goto label_799a3c;
        case 0x799a44u: goto label_799a44;
        case 0x799a68u: goto label_799a68;
        case 0x799a78u: goto label_799a78;
        case 0x799a80u: goto label_799a80;
        case 0x799aa4u: goto label_799aa4;
        case 0x799ab4u: goto label_799ab4;
        case 0x799abcu: goto label_799abc;
        case 0x799ae0u: goto label_799ae0;
        case 0x799af0u: goto label_799af0;
        case 0x799af8u: goto label_799af8;
        case 0x799b14u: goto label_799b14;
        case 0x799b30u: goto label_799b30;
        case 0x799b3cu: goto label_799b3c;
        case 0x799b44u: goto label_799b44;
        case 0x799b5cu: goto label_799b5c;
        case 0x799b70u: goto label_799b70;
        case 0x799b84u: goto label_799b84;
        case 0x799b98u: goto label_799b98;
        case 0x799bb0u: goto label_799bb0;
        case 0x799bb8u: goto label_799bb8;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bd0u: goto label_799bd0;
        case 0x799be4u: goto label_799be4;
        case 0x799bf4u: goto label_799bf4;
        case 0x799c00u: goto label_799c00;
        case 0x799c14u: goto label_799c14;
        case 0x799c20u: goto label_799c20;
        case 0x799ca8u: goto label_799ca8;
        case 0x799cb0u: goto label_799cb0;
        case 0x799cbcu: goto label_799cbc;
        default: break;
    }

    ctx->pc = 0x799988u;

    // 0x799988: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x799988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x79998c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79998cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799990: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x799990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x799994: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x799994u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x799998: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x799998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x79999c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x79999cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x7999a0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x7999a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x7999a4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x7999a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x7999a8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x7999a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x7999ac: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x7999acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x7999b0: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x7999b0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x7999b4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x7999b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x7999b8: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x7999bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x7999bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x7999c0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x7999c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x7999c4: 0x8ec22f84  lw          $v0, 0x2F84($s6)
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7999c8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7999C8u;
    SET_GPR_U32(ctx, 31, 0x7999D0u);
    ctx->pc = 0x7999CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C8u;
    // 0x7999cc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999C8u, 0x7999D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D0u;
label_7999d0:
    // 0x7999d0: 0x26a4ee00  addiu       $a0, $s5, -0x1200
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962688));
    // 0x7999d4: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7999D4u;
    SET_GPR_U32(ctx, 31, 0x7999DCu);
    ctx->pc = 0x7999D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D4u;
    // 0x7999d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7999D4u, 0x7999DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999DCu;
label_7999dc:
    // 0x7999dc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x7999dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x7999e0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7999e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7999e4: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x7999e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x7999e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7999e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999ec: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x7999ECu;
    SET_GPR_U32(ctx, 31, 0x7999F4u);
    ctx->pc = 0x7999F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999ECu;
    // 0x7999f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7999ECu, 0x7999F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999F4u;
label_7999f4:
    // 0x7999f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7999f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999f8: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x7999F8u;
    SET_GPR_U32(ctx, 31, 0x799A00u);
    ctx->pc = 0x7999FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F8u;
    // 0x7999fc: 0x240503d0  addiu       $a1, $zero, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x7999F8u, 0x799A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A00u;
label_799a00:
    // 0x799a00: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799A00u;
    SET_GPR_U32(ctx, 31, 0x799A08u);
    ctx->pc = 0x799A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A00u;
    // 0x799a04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799A00u, 0x799A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A08u;
label_799a08:
    // 0x799a08: 0x8e83e010  lw          $v1, -0x1FF0($s4)
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294959120)));
    // 0x799a0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a18: 0x8c620460  lw          $v0, 0x460($v1)
    ctx->pc = 0x799a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1120)));
    // 0x799a1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799a20: 0xac620460  sw          $v0, 0x460($v1)
    ctx->pc = 0x799a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1120), GPR_U32(ctx, 2));
    // 0x799a24: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799A24u;
    SET_GPR_U32(ctx, 31, 0x799A2Cu);
    ctx->pc = 0x799A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A24u;
    // 0x799a28: 0xa3a60010  sb          $a2, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799A24u, 0x799A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A2Cu;
label_799a2c:
    // 0x799a2c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799a30: 0x240503c1  addiu       $a1, $zero, 0x3C1
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
    // 0x799a34: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799A34u;
    SET_GPR_U32(ctx, 31, 0x799A3Cu);
    ctx->pc = 0x799A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A34u;
    // 0x799a38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799A34u, 0x799A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A3Cu;
label_799a3c:
    // 0x799a3c: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799A3Cu;
    SET_GPR_U32(ctx, 31, 0x799A44u);
    ctx->pc = 0x799A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A3Cu;
    // 0x799a40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799A3Cu, 0x799A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A44u;
label_799a44:
    // 0x799a44: 0x8e83e010  lw          $v1, -0x1FF0($s4)
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294959120)));
    // 0x799a48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799a54: 0x8c620460  lw          $v0, 0x460($v1)
    ctx->pc = 0x799a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1120)));
    // 0x799a58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799a5c: 0xac620460  sw          $v0, 0x460($v1)
    ctx->pc = 0x799a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1120), GPR_U32(ctx, 2));
    // 0x799a60: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799A60u;
    SET_GPR_U32(ctx, 31, 0x799A68u);
    ctx->pc = 0x799A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A60u;
    // 0x799a64: 0xa3a60020  sb          $a2, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799A60u, 0x799A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A68u;
label_799a68:
    // 0x799a68: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799a6c: 0x240503c1  addiu       $a1, $zero, 0x3C1
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
    // 0x799a70: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799A70u;
    SET_GPR_U32(ctx, 31, 0x799A78u);
    ctx->pc = 0x799A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A70u;
    // 0x799a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799A70u, 0x799A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A78u;
label_799a78:
    // 0x799a78: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799A78u;
    SET_GPR_U32(ctx, 31, 0x799A80u);
    ctx->pc = 0x799A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A78u;
    // 0x799a7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799A78u, 0x799A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A80u;
label_799a80:
    // 0x799a80: 0x8e83e010  lw          $v1, -0x1FF0($s4)
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294959120)));
    // 0x799a84: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x799a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a8c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799a90: 0x8c620460  lw          $v0, 0x460($v1)
    ctx->pc = 0x799a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1120)));
    // 0x799a94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799a98: 0xac620460  sw          $v0, 0x460($v1)
    ctx->pc = 0x799a98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1120), GPR_U32(ctx, 2));
    // 0x799a9c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799A9Cu;
    SET_GPR_U32(ctx, 31, 0x799AA4u);
    ctx->pc = 0x799AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A9Cu;
    // 0x799aa0: 0xa3a60030  sb          $a2, 0x30($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799A9Cu, 0x799AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA4u;
label_799aa4:
    // 0x799aa4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x799aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799aa8: 0x240503c1  addiu       $a1, $zero, 0x3C1
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
    // 0x799aac: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799AACu;
    SET_GPR_U32(ctx, 31, 0x799AB4u);
    ctx->pc = 0x799AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AACu;
    // 0x799ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799AACu, 0x799AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AB4u;
label_799ab4:
    // 0x799ab4: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799AB4u;
    SET_GPR_U32(ctx, 31, 0x799ABCu);
    ctx->pc = 0x799AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AB4u;
    // 0x799ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799AB4u, 0x799ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ABCu;
label_799abc:
    // 0x799abc: 0x8e83e010  lw          $v1, -0x1FF0($s4)
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294959120)));
    // 0x799ac0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ac8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799acc: 0x8c620460  lw          $v0, 0x460($v1)
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1120)));
    // 0x799ad0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799ad4: 0xac620460  sw          $v0, 0x460($v1)
    ctx->pc = 0x799ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1120), GPR_U32(ctx, 2));
    // 0x799ad8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799AD8u;
    SET_GPR_U32(ctx, 31, 0x799AE0u);
    ctx->pc = 0x799ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AD8u;
    // 0x799adc: 0xa3a60040  sb          $a2, 0x40($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799AD8u, 0x799AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AE0u;
label_799ae0:
    // 0x799ae0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x799ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x799ae4: 0x240503c1  addiu       $a1, $zero, 0x3C1
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
    // 0x799ae8: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799AE8u;
    SET_GPR_U32(ctx, 31, 0x799AF0u);
    ctx->pc = 0x799AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE8u;
    // 0x799aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799AE8u, 0x799AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF0u;
label_799af0:
    // 0x799af0: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799AF0u;
    SET_GPR_U32(ctx, 31, 0x799AF8u);
    ctx->pc = 0x799AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AF0u;
    // 0x799af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799AF0u, 0x799AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF8u;
label_799af8:
    // 0x799af8: 0x8e83e010  lw          $v1, -0x1FF0($s4)
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294959120)));
    // 0x799afc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b04: 0x8c620460  lw          $v0, 0x460($v1)
    ctx->pc = 0x799b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1120)));
    // 0x799b08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799b0c: 0xc1e6a28  jal         func_79A8A0
    ctx->pc = 0x799B0Cu;
    SET_GPR_U32(ctx, 31, 0x799B14u);
    ctx->pc = 0x799B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B0Cu;
    // 0x799b10: 0xac620460  sw          $v0, 0x460($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A8A0u, 0x799B0Cu, 0x799B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B14u;
label_799b14:
    // 0x799b14: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x799b14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b18: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x799b18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b1c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x799b1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b20: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x799b20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b24: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x799b24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x799b28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799B28u;
    {
        const bool branch_taken_0x799b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B28u;
        // 0x799b2c: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b28) {
            ctx->pc = 0x799B3Cu;
            goto label_799b3c;
        }
    }
    ctx->pc = 0x799B30u;
label_799b30:
    // 0x799b30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b34: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799B34u;
    SET_GPR_U32(ctx, 31, 0x799B3Cu);
    ctx->pc = 0x799B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B34u;
    // 0x799b38: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799B34u, 0x799B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B3Cu;
label_799b3c:
    // 0x799b3c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799B3Cu;
    SET_GPR_U32(ctx, 31, 0x799B44u);
    ctx->pc = 0x799B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B3Cu;
    // 0x799b40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799B3Cu, 0x799B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B44u;
label_799b44:
    // 0x799b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b4c: 0x1602fff8  bne         $s0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799B4Cu;
    {
        const bool branch_taken_0x799b4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x799B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B4Cu;
        // 0x799b50: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b4c) {
            ctx->pc = 0x799B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b30;
        }
    }
    ctx->pc = 0x799B54u;
    // 0x799b54: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799B54u;
    SET_GPR_U32(ctx, 31, 0x799B5Cu);
    ctx->pc = 0x799B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B54u;
    // 0x799b58: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799B54u, 0x799B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B5Cu;
label_799b5c:
    // 0x799b5c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x799b5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b60: 0x1690fff3  bne         $s4, $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x799B60u;
    {
        const bool branch_taken_0x799b60 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        ctx->pc = 0x799B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B60u;
        // 0x799b64: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b60) {
            ctx->pc = 0x799B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b30;
        }
    }
    ctx->pc = 0x799B68u;
    // 0x799b68: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799B68u;
    SET_GPR_U32(ctx, 31, 0x799B70u);
    ctx->pc = 0x799B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B68u;
    // 0x799b6c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799B68u, 0x799B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B70u;
label_799b70:
    // 0x799b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b74: 0x1614ffee  bne         $s0, $s4, . + 4 + (-0x12 << 2)
    ctx->pc = 0x799B74u;
    {
        const bool branch_taken_0x799b74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x799B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B74u;
        // 0x799b78: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b74) {
            ctx->pc = 0x799B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b30;
        }
    }
    ctx->pc = 0x799B7Cu;
    // 0x799b7c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799B7Cu;
    SET_GPR_U32(ctx, 31, 0x799B84u);
    ctx->pc = 0x799B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B7Cu;
    // 0x799b80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799B7Cu, 0x799B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B84u;
label_799b84:
    // 0x799b84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x799b84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b88: 0x1690ffe9  bne         $s4, $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x799B88u;
    {
        const bool branch_taken_0x799b88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        ctx->pc = 0x799B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B88u;
        // 0x799b8c: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b88) {
            ctx->pc = 0x799B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b30;
        }
    }
    ctx->pc = 0x799B90u;
    // 0x799b90: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799B90u;
    SET_GPR_U32(ctx, 31, 0x799B98u);
    ctx->pc = 0x799B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B90u;
    // 0x799b94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799B90u, 0x799B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B98u;
label_799b98:
    // 0x799b98: 0x1454ffe5  bne         $v0, $s4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x799B98u;
    {
        const bool branch_taken_0x799b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x799B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B98u;
        // 0x799b9c: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b98) {
            ctx->pc = 0x799B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b30;
        }
    }
    ctx->pc = 0x799BA0u;
    // 0x799ba0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799ba4: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ba8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799BA8u;
    SET_GPR_U32(ctx, 31, 0x799BB0u);
    ctx->pc = 0x799BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BA8u;
    // 0x799bac: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799BA8u, 0x799BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BB0u;
label_799bb0:
    // 0x799bb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799BB0u;
    {
        const bool branch_taken_0x799bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799bb0) {
            ctx->pc = 0x799BC8u;
            goto label_799bc8;
        }
    }
    ctx->pc = 0x799BB8u;
label_799bb8:
    // 0x799bb8: 0x8ec22f84  lw          $v0, 0x2F84($s6)
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x799bbc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799bc0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799BC0u;
    SET_GPR_U32(ctx, 31, 0x799BC8u);
    ctx->pc = 0x799BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC0u;
    // 0x799bc4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799BC0u, 0x799BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BC8u;
label_799bc8:
    // 0x799bc8: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x799BC8u;
    SET_GPR_U32(ctx, 31, 0x799BD0u);
    ctx->pc = 0x799BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC8u;
    // 0x799bcc: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799BC8u, 0x799BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BD0u;
label_799bd0:
    // 0x799bd0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799BD0u;
    {
        const bool branch_taken_0x799bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD0u;
        // 0x799bd4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bd0) {
            ctx->pc = 0x799BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bb8;
        }
    }
    ctx->pc = 0x799BD8u;
    // 0x799bd8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x799bdc: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x799BDCu;
    SET_GPR_U32(ctx, 31, 0x799BE4u);
    ctx->pc = 0x799BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BDCu;
    // 0x799be0: 0x24446af0  addiu       $a0, $v0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799BDCu, 0x799BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BE4u;
label_799be4:
    // 0x799be4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x799be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bec: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x799BECu;
    SET_GPR_U32(ctx, 31, 0x799BF4u);
    ctx->pc = 0x799BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BECu;
    // 0x799bf0: 0x2444ee00  addiu       $a0, $v0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799BECu, 0x799BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF4u;
label_799bf4:
    // 0x799bf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799bf8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799BF8u;
    SET_GPR_U32(ctx, 31, 0x799C00u);
    ctx->pc = 0x799BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BF8u;
    // 0x799bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799BF8u, 0x799C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C00u;
label_799c00:
    // 0x799c00: 0x8ec42f84  lw          $a0, 0x2F84($s6)
    ctx->pc = 0x799c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x799c04: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799c08: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799c0c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799C0Cu;
    SET_GPR_U32(ctx, 31, 0x799C14u);
    ctx->pc = 0x799C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C0Cu;
    // 0x799c10: 0x2445af10  addiu       $a1, $v0, -0x50F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799C0Cu, 0x799C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C14u;
label_799c14:
    // 0x799c14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c18: 0xc1e6ad2  jal         func_79AB48
    ctx->pc = 0x799C18u;
    SET_GPR_U32(ctx, 31, 0x799C20u);
    ctx->pc = 0x799C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C18u;
    // 0x799c1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB48u, 0x799C18u, 0x799C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C20u;
label_799c20:
    // 0x799c20: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799c24: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x799c28: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799c28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799c2c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x799c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c30: 0x3c014066  lui         $at, 0x4066
    ctx->pc = 0x799c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16486 << 16));
    // 0x799c34: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799c34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799c38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799c3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x799c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c40: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799c44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c48: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x799c4c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x799c4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x799c50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799c54: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x799c58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799c5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799c60: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799c64: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x799c64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x799c68: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799c6c: 0x3c01413a  lui         $at, 0x413A
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16698 << 16));
    // 0x799c70: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x799c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x799c74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799c78: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x799c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x799c7c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x799c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x799c80: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x799c80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x799c84: 0x3c01c046  lui         $at, 0xC046
    ctx->pc = 0x799c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49222 << 16));
    // 0x799c88: 0x3421d3f2  ori         $at, $at, 0xD3F2
    ctx->pc = 0x799c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54258);
    // 0x799c8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799c90: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x799c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x799c94: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x799c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x799c98: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x799c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x799c9c: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x799c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x799ca0: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799CA0u;
    SET_GPR_U32(ctx, 31, 0x799CA8u);
    ctx->pc = 0x799CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CA0u;
    // 0x799ca4: 0xe643000c  swc1        $f3, 0xC($s2) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799CA0u, 0x799CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CA8u;
label_799ca8:
    // 0x799ca8: 0xc1e678c  jal         func_799E30
    ctx->pc = 0x799CA8u;
    SET_GPR_U32(ctx, 31, 0x799CB0u);
    ctx->pc = 0x799E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799E30u, 0x799CA8u, 0x799CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CB0u;
label_799cb0:
    // 0x799cb0: 0x8ec22f84  lw          $v0, 0x2F84($s6)
    ctx->pc = 0x799cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x799cb4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799CB4u;
    SET_GPR_U32(ctx, 31, 0x799CBCu);
    ctx->pc = 0x799CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CB4u;
    // 0x799cb8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799CB4u, 0x799CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CBCu;
label_799cbc:
    // 0x799cbc: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x799cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x799cc0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x799cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x799cc4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x799cc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x799cc8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x799cc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799ccc: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x799cccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799cd0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x799cd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799cd4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x799cd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799cd8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x799cd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799cdc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x799cdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799ce0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x799ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x799CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CE4u;
        // 0x799ce8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799CECu;
    // 0x799cec: 0x0  nop
    ctx->pc = 0x799cecu;
    // NOP
    ctx->pc = 0x799cf0u;
}
} // namespace gh_r301
