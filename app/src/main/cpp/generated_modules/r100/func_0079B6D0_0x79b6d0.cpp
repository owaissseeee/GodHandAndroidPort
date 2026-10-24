#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_0079B6D0
// Address: 0x79b6d0 - 0x79b9a0
void func_0079B6D0_0x79b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B6D0_0x79b6d0");
#endif

    switch (ctx->pc) {
        case 0x79b734u: goto label_79b734;
        case 0x79b750u: goto label_79b750;
        case 0x79b758u: goto label_79b758;
        case 0x79b764u: goto label_79b764;
        case 0x79b774u: goto label_79b774;
        case 0x79b790u: goto label_79b790;
        case 0x79b7b0u: goto label_79b7b0;
        case 0x79b7c4u: goto label_79b7c4;
        case 0x79b7f8u: goto label_79b7f8;
        case 0x79b81cu: goto label_79b81c;
        case 0x79b82cu: goto label_79b82c;
        case 0x79b848u: goto label_79b848;
        case 0x79b868u: goto label_79b868;
        case 0x79b894u: goto label_79b894;
        case 0x79b8acu: goto label_79b8ac;
        case 0x79b8b4u: goto label_79b8b4;
        case 0x79b8ccu: goto label_79b8cc;
        case 0x79b8d8u: goto label_79b8d8;
        case 0x79b8e4u: goto label_79b8e4;
        case 0x79b8ecu: goto label_79b8ec;
        case 0x79b904u: goto label_79b904;
        case 0x79b910u: goto label_79b910;
        case 0x79b918u: goto label_79b918;
        case 0x79b920u: goto label_79b920;
        case 0x79b938u: goto label_79b938;
        case 0x79b940u: goto label_79b940;
        case 0x79b958u: goto label_79b958;
        case 0x79b960u: goto label_79b960;
        case 0x79b96cu: goto label_79b96c;
        default: break;
    }

    ctx->pc = 0x79b6d0u;

    // 0x79b6d0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x79b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x79b6d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b6d8: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x79b6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x79b6dc: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79b6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b6e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x79b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b6e4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x79b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79b6e8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x79b6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x79b6ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b6f0: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x79b6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x79b6f4: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x79b6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x79b6f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x79b6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b6fc: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x79b6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x79b700: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x79b700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x79b704: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x79b704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x79b708: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x79b708u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b70c: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x79b70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x79b710: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x79b710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x79b714: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x79b714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x79b718: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79b718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79b71c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x79b71cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x79b720: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x79b720u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b724: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x79b724u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x79b728: 0x8cc22f84  lw          $v0, 0x2F84($a2)
    ctx->pc = 0x79b728u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b72c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B72Cu;
    SET_GPR_U32(ctx, 31, 0x79B734u);
    ctx->pc = 0x79B730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B72Cu;
    // 0x79b730: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B72Cu, 0x79B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B734u;
label_79b734:
    // 0x79b734: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x79b734u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b738: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x79b738u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b73c: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x79b73cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79b740: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x79b740u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b744: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x79b744u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79b748: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b74c: 0x0  nop
    ctx->pc = 0x79b74cu;
    // NOP
label_79b750:
    // 0x79b750: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79B750u;
    SET_GPR_U32(ctx, 31, 0x79B758u);
    ctx->pc = 0x79B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B750u;
    // 0x79b754: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79B750u, 0x79B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B758u;
label_79b758:
    // 0x79b758: 0x242800a  movz        $s0, $s2, $v0
    ctx->pc = 0x79b758u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x79b75c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79B75Cu;
    SET_GPR_U32(ctx, 31, 0x79B764u);
    ctx->pc = 0x79B760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B75Cu;
    // 0x79b760: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79B75Cu, 0x79B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B764u;
label_79b764:
    // 0x79b764: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x79b764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x79b768: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79b768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b76c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79B76Cu;
    SET_GPR_U32(ctx, 31, 0x79B774u);
    ctx->pc = 0x79B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B76Cu;
    // 0x79b770: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79B76Cu, 0x79B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B774u;
label_79b774:
    // 0x79b774: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x79b774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x79b778: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x79b778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x79b77c: 0x24a4ea60  addiu       $a0, $a1, -0x15A0
    ctx->pc = 0x79b77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
    // 0x79b780: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x79b780u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x79b784: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b788: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79B788u;
    SET_GPR_U32(ctx, 31, 0x79B790u);
    ctx->pc = 0x79B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B788u;
    // 0x79b78c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79B788u, 0x79B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B790u;
label_79b790:
    // 0x79b790: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79b790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b794: 0x16320008  bne         $s1, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B794u;
    {
        const bool branch_taken_0x79b794 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x79B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B794u;
        // 0x79b798: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b794) {
            ctx->pc = 0x79B7B8u;
            goto label_79b7b8;
        }
    }
    ctx->pc = 0x79B79Cu;
    // 0x79b79c: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x79b79cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b7a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B7A0u;
    {
        const bool branch_taken_0x79b7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7A0u;
        // 0x79b7a4: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b7a0) {
            ctx->pc = 0x79B7B8u;
            goto label_79b7b8;
        }
    }
    ctx->pc = 0x79B7A8u;
    // 0x79b7a8: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x79B7A8u;
    SET_GPR_U32(ctx, 31, 0x79B7B0u);
    ctx->pc = 0x79B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B7A8u;
    // 0x79b7ac: 0x8ec42f84  lw          $a0, 0x2F84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79B7A8u, 0x79B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7B0u;
label_79b7b0:
    // 0x79b7b0: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B7B0u;
    {
        const bool branch_taken_0x79b7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7B0u;
        // 0x79b7b4: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b7b0) {
            ctx->pc = 0x79B7CCu;
            goto label_79b7cc;
        }
    }
    ctx->pc = 0x79B7B8u;
label_79b7b8:
    // 0x79b7b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b7bc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B7BCu;
    SET_GPR_U32(ctx, 31, 0x79B7C4u);
    ctx->pc = 0x79B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B7BCu;
    // 0x79b7c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B7BCu, 0x79B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7C4u;
label_79b7c4:
    // 0x79b7c4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x79B7C4u;
    {
        const bool branch_taken_0x79b7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7C4u;
        // 0x79b7c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b7c4) {
            ctx->pc = 0x79B750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b750;
        }
    }
    ctx->pc = 0x79B7CCu;
label_79b7cc:
    // 0x79b7cc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79b7d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x79b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x79b7d4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79b7d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7dc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79b7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79b7e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79b7e4: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79b7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x79b7e8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79b7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x79b7ec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79b7f0: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79B7F0u;
    SET_GPR_U32(ctx, 31, 0x79B7F8u);
    ctx->pc = 0x79B7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B7F0u;
    // 0x79b7f4: 0x8ec42f84  lw          $a0, 0x2F84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79B7F0u, 0x79B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7F8u;
label_79b7f8:
    // 0x79b7f8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79b7fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b800: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b800u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b804: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b804u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b808: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x79b808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x79b80c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b810: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79b810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79b814: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79B814u;
    SET_GPR_U32(ctx, 31, 0x79B81Cu);
    ctx->pc = 0x79B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B814u;
    // 0x79b818: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B814u, 0x79B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B81Cu;
label_79b81c:
    // 0x79b81c: 0x8ec42f84  lw          $a0, 0x2F84($s6)
    ctx->pc = 0x79b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x79b820: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b824: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79B824u;
    SET_GPR_U32(ctx, 31, 0x79B82Cu);
    ctx->pc = 0x79B828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B824u;
    // 0x79b828: 0x24a5c440  addiu       $a1, $a1, -0x3BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79B824u, 0x79B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B82Cu;
label_79b82c:
    // 0x79b82c: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x79b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x79b830: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x79b830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79b834: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x79b834u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b83c: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x79b83cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b840: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B840u;
    SET_GPR_U32(ctx, 31, 0x79B848u);
    ctx->pc = 0x79B844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B840u;
    // 0x79b844: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B840u, 0x79B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B848u;
label_79b848:
    // 0x79b848: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b84c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b850: 0x8c43c500  lw          $v1, -0x3B00($v0)
    ctx->pc = 0x79b850u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79C500u));
    // 0x79b854: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b85c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79b85cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79b860: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B860u;
    SET_GPR_U32(ctx, 31, 0x79B868u);
    ctx->pc = 0x79B864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B860u;
    // 0x79b864: 0x93a50040  lbu         $a1, 0x40($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B860u, 0x79B868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B868u;
label_79b868:
    // 0x79b868: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b86c: 0x8ca3c500  lw          $v1, -0x3B00($a1)
    ctx->pc = 0x79b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79C500u));
    // 0x79b870: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b878: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79b878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79b87c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x79b87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79b880: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79b880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x79b884: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x79b884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b888: 0x2444ea60  addiu       $a0, $v0, -0x15A0
    ctx->pc = 0x79b888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x79b88c: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79B88Cu;
    SET_GPR_U32(ctx, 31, 0x79B894u);
    ctx->pc = 0x79B890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B88Cu;
    // 0x79b890: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79B88Cu, 0x79B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B894u;
label_79b894:
    // 0x79b894: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79b894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79b898: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79b898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79b89c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b8a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8a4: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79B8A4u;
    SET_GPR_U32(ctx, 31, 0x79B8ACu);
    ctx->pc = 0x79B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8A4u;
    // 0x79b8a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79B8A4u, 0x79B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8ACu;
label_79b8ac:
    // 0x79b8ac: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B8ACu;
    SET_GPR_U32(ctx, 31, 0x79B8B4u);
    ctx->pc = 0x79B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8ACu;
    // 0x79b8b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B8ACu, 0x79B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8B4u;
label_79b8b4:
    // 0x79b8b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b8b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b8b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b8bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8c4: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B8C4u;
    SET_GPR_U32(ctx, 31, 0x79B8CCu);
    ctx->pc = 0x79B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8C4u;
    // 0x79b8c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B8C4u, 0x79B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8CCu;
label_79b8cc:
    // 0x79b8cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8d0: 0xc0a581c  jal         func_296070
    ctx->pc = 0x79B8D0u;
    SET_GPR_U32(ctx, 31, 0x79B8D8u);
    ctx->pc = 0x79B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8D0u;
    // 0x79b8d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x79B8D0u, 0x79B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8D8u;
label_79b8d8:
    // 0x79b8d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8dc: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79B8DCu;
    SET_GPR_U32(ctx, 31, 0x79B8E4u);
    ctx->pc = 0x79B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8DCu;
    // 0x79b8e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79B8DCu, 0x79B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8E4u;
label_79b8e4:
    // 0x79b8e4: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B8E4u;
    SET_GPR_U32(ctx, 31, 0x79B8ECu);
    ctx->pc = 0x79B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8E4u;
    // 0x79b8e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B8E4u, 0x79B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8ECu;
label_79b8ec:
    // 0x79b8ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b8ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b8f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79b8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8fc: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B8FCu;
    SET_GPR_U32(ctx, 31, 0x79B904u);
    ctx->pc = 0x79B900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8FCu;
    // 0x79b900: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B8FCu, 0x79B904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B904u;
label_79b904:
    // 0x79b904: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79b904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b908: 0xc0a581c  jal         func_296070
    ctx->pc = 0x79B908u;
    SET_GPR_U32(ctx, 31, 0x79B910u);
    ctx->pc = 0x79B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B908u;
    // 0x79b90c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x79B908u, 0x79B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B910u;
label_79b910:
    // 0x79b910: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79B910u;
    SET_GPR_U32(ctx, 31, 0x79B918u);
    ctx->pc = 0x79B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B910u;
    // 0x79b914: 0x8ec42f84  lw          $a0, 0x2F84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79B910u, 0x79B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B918u;
label_79b918:
    // 0x79b918: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B918u;
    SET_GPR_U32(ctx, 31, 0x79B920u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B918u, 0x79B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B920u;
label_79b920:
    // 0x79b920: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79b920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b924: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b928: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b92c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79b92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b930: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B930u;
    SET_GPR_U32(ctx, 31, 0x79B938u);
    ctx->pc = 0x79B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B930u;
    // 0x79b934: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B930u, 0x79B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B938u;
label_79b938:
    // 0x79b938: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B938u;
    SET_GPR_U32(ctx, 31, 0x79B940u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B938u, 0x79B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B940u;
label_79b940:
    // 0x79b940: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79b940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b944: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b944u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79b948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b94c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79b94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b950: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B950u;
    SET_GPR_U32(ctx, 31, 0x79B958u);
    ctx->pc = 0x79B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B950u;
    // 0x79b954: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B950u, 0x79B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B958u;
label_79b958:
    // 0x79b958: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B958u;
    SET_GPR_U32(ctx, 31, 0x79B960u);
    ctx->pc = 0x79B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B958u;
    // 0x79b95c: 0x8ec42f84  lw          $a0, 0x2F84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B958u, 0x79B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B960u;
label_79b960:
    // 0x79b960: 0x8ec22f84  lw          $v0, 0x2F84($s6)
    ctx->pc = 0x79b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x79b964: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B964u;
    SET_GPR_U32(ctx, 31, 0x79B96Cu);
    ctx->pc = 0x79B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B964u;
    // 0x79b968: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B964u, 0x79B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B96Cu;
label_79b96c:
    // 0x79b96c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x79b96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79b970: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x79b970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79b974: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x79b974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79b978: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x79b978u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79b97c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x79b97cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79b980: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x79b980u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79b984: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x79b984u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79b988: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x79b988u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b98c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x79b98cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b990: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79b990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b994: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x79b994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b998: 0x3e00008  jr          $ra
    ctx->pc = 0x79B998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B998u;
        // 0x79b99c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B9A0u;
}
} // namespace gh_r100
