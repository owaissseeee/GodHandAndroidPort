#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: func_0079A080
// Address: 0x79a080 - 0x79a1f8
void func_0079A080_0x79a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A080_0x79a080");
#endif

    switch (ctx->pc) {
        case 0x79a0c8u: goto label_79a0c8;
        case 0x79a0dcu: goto label_79a0dc;
        case 0x79a0e4u: goto label_79a0e4;
        case 0x79a0ecu: goto label_79a0ec;
        case 0x79a110u: goto label_79a110;
        case 0x79a120u: goto label_79a120;
        case 0x79a138u: goto label_79a138;
        case 0x79a140u: goto label_79a140;
        case 0x79a158u: goto label_79a158;
        case 0x79a164u: goto label_79a164;
        case 0x79a16cu: goto label_79a16c;
        case 0x79a17cu: goto label_79a17c;
        case 0x79a194u: goto label_79a194;
        case 0x79a1a4u: goto label_79a1a4;
        case 0x79a1c4u: goto label_79a1c4;
        case 0x79a1d0u: goto label_79a1d0;
        default: break;
    }

    ctx->pc = 0x79a080u;

    // 0x79a080: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x79a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x79a084: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x79a084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79a088: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x79a088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a08c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x79a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79a090: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x79a090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79a094: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79a094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79a098: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x79a09c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x79a09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79a0a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0a4: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x79a0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a0a8: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79a0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a0ac: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x79a0acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x79a0b0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79a0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79a0b4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79a0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79a0b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79a0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x79a0bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79a0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79a0c0: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A0C0u;
    SET_GPR_U32(ctx, 31, 0x79A0C8u);
    ctx->pc = 0x79A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0C0u;
    // 0x79a0c4: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A0C0u, 0x79A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0C8u;
label_79a0c8:
    // 0x79a0c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79A0C8u;
    {
        const bool branch_taken_0x79a0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0C8u;
        // 0x79a0cc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0c8) {
            ctx->pc = 0x79A0F4u;
            goto label_79a0f4;
        }
    }
    ctx->pc = 0x79A0D0u;
    // 0x79a0d0: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x79a0d4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A0D4u;
    SET_GPR_U32(ctx, 31, 0x79A0DCu);
    ctx->pc = 0x79A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0D4u;
    // 0x79a0d8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A0D4u, 0x79A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0DCu;
label_79a0dc:
    // 0x79a0dc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x79A0DCu;
    {
        const bool branch_taken_0x79a0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0DCu;
        // 0x79a0e0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0dc) {
            ctx->pc = 0x79A1D4u;
            goto label_79a1d4;
        }
    }
    ctx->pc = 0x79A0E4u;
label_79a0e4:
    // 0x79a0e4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A0E4u;
    SET_GPR_U32(ctx, 31, 0x79A0ECu);
    ctx->pc = 0x79A0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0E4u;
    // 0x79a0e8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A0E4u, 0x79A0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0ECu;
label_79a0ec:
    // 0x79a0ec: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x79A0ECu;
    {
        const bool branch_taken_0x79a0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0ECu;
        // 0x79a0f0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0ec) {
            ctx->pc = 0x79A1D4u;
            goto label_79a1d4;
        }
    }
    ctx->pc = 0x79A0F4u;
label_79a0f4:
    // 0x79a0f4: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79a0f8: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a0f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79a0fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a100: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79a100u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79a104: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a108: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x79a108u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x79a10c: 0x0  nop
    ctx->pc = 0x79a10cu;
    // NOP
label_79a110:
    // 0x79a110: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79A110u;
    {
        const bool branch_taken_0x79a110 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a110) {
            ctx->pc = 0x79A164u;
            goto label_79a164;
        }
    }
    ctx->pc = 0x79A118u;
    // 0x79a118: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A118u;
    SET_GPR_U32(ctx, 31, 0x79A120u);
    ctx->pc = 0x79A11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A118u;
    // 0x79a11c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A118u, 0x79A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A120u;
label_79a120:
    // 0x79a120: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79a120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a128: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a12c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a12cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a130: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79A130u;
    SET_GPR_U32(ctx, 31, 0x79A138u);
    ctx->pc = 0x79A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A130u;
    // 0x79a134: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A130u, 0x79A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A138u;
label_79a138:
    // 0x79a138: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A138u;
    SET_GPR_U32(ctx, 31, 0x79A140u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A138u, 0x79A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A140u;
label_79a140:
    // 0x79a140: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79a140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a144: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a148: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a14c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a14cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a150: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79A150u;
    SET_GPR_U32(ctx, 31, 0x79A158u);
    ctx->pc = 0x79A154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A150u;
    // 0x79a154: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A150u, 0x79A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A158u;
label_79a158:
    // 0x79a158: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x79a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x79a15c: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79A15Cu;
    SET_GPR_U32(ctx, 31, 0x79A164u);
    ctx->pc = 0x79A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A15Cu;
    // 0x79a160: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79A15Cu, 0x79A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A164u;
label_79a164:
    // 0x79a164: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A164u;
    SET_GPR_U32(ctx, 31, 0x79A16Cu);
    ctx->pc = 0x79A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A164u;
    // 0x79a168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A164u, 0x79A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A16Cu;
label_79a16c:
    // 0x79a16c: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x79A16Cu;
    {
        const bool branch_taken_0x79a16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A16Cu;
        // 0x79a170: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a16c) {
            ctx->pc = 0x79A0E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0e4;
        }
    }
    ctx->pc = 0x79A174u;
    // 0x79a174: 0xc1e6b02  jal         func_79AC08
    ctx->pc = 0x79A174u;
    SET_GPR_U32(ctx, 31, 0x79A17Cu);
    ctx->pc = 0x79AC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AC08u, 0x79A174u, 0x79A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A17Cu;
label_79a17c:
    // 0x79a17c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x79a17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a180: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A180u;
    {
        const bool branch_taken_0x79a180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A180u;
        // 0x79a184: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a180) {
            ctx->pc = 0x79A19Cu;
            goto label_79a19c;
        }
    }
    ctx->pc = 0x79A188u;
    // 0x79a188: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a18c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A18Cu;
    SET_GPR_U32(ctx, 31, 0x79A194u);
    ctx->pc = 0x79A190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A18Cu;
    // 0x79a190: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A18Cu, 0x79A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A194u;
label_79a194:
    // 0x79a194: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x79A194u;
    {
        const bool branch_taken_0x79a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a194) {
            ctx->pc = 0x79A110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a110;
        }
    }
    ctx->pc = 0x79A19Cu;
label_79a19c:
    // 0x79a19c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A19Cu;
    SET_GPR_U32(ctx, 31, 0x79A1A4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A19Cu, 0x79A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A4u;
label_79a1a4:
    // 0x79a1a4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a1a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1ac: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79a1b0: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a1b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79a1b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a1b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a1bc: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79A1BCu;
    SET_GPR_U32(ctx, 31, 0x79A1C4u);
    ctx->pc = 0x79A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1BCu;
    // 0x79a1c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A1BCu, 0x79A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1C4u;
label_79a1c4:
    // 0x79a1c4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a1c8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A1C8u;
    SET_GPR_U32(ctx, 31, 0x79A1D0u);
    ctx->pc = 0x79A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1C8u;
    // 0x79a1cc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A1C8u, 0x79A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1D0u;
label_79a1d0:
    // 0x79a1d0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79a1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79a1d4:
    // 0x79a1d4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79a1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a1d8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79a1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a1dc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79a1dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a1e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x79a1e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a1e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79a1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a1e8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x79a1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x79A1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1ECu;
        // 0x79a1f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A1F4u;
    // 0x79a1f4: 0x0  nop
    ctx->pc = 0x79a1f4u;
    // NOP
    ctx->pc = 0x79a1f8u;
}
} // namespace gh_r204
