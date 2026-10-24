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

// Function: cObjSimple_Update
// Address: 0x2b6930 - 0x2b6a40
void cObjSimple_Update_0x2b6930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple_Update_0x2b6930");
#endif

    switch (ctx->pc) {
        case 0x2b6930u: goto label_2b6930;
        case 0x2b6934u: goto label_2b6934;
        case 0x2b6938u: goto label_2b6938;
        case 0x2b693cu: goto label_2b693c;
        case 0x2b6940u: goto label_2b6940;
        case 0x2b6944u: goto label_2b6944;
        case 0x2b6948u: goto label_2b6948;
        case 0x2b694cu: goto label_2b694c;
        case 0x2b6950u: goto label_2b6950;
        case 0x2b6954u: goto label_2b6954;
        case 0x2b6958u: goto label_2b6958;
        case 0x2b695cu: goto label_2b695c;
        case 0x2b6960u: goto label_2b6960;
        case 0x2b6964u: goto label_2b6964;
        case 0x2b6968u: goto label_2b6968;
        case 0x2b696cu: goto label_2b696c;
        case 0x2b6970u: goto label_2b6970;
        case 0x2b6974u: goto label_2b6974;
        case 0x2b6978u: goto label_2b6978;
        case 0x2b697cu: goto label_2b697c;
        case 0x2b6980u: goto label_2b6980;
        case 0x2b6984u: goto label_2b6984;
        case 0x2b6988u: goto label_2b6988;
        case 0x2b698cu: goto label_2b698c;
        case 0x2b6990u: goto label_2b6990;
        case 0x2b6994u: goto label_2b6994;
        case 0x2b6998u: goto label_2b6998;
        case 0x2b699cu: goto label_2b699c;
        case 0x2b69a0u: goto label_2b69a0;
        case 0x2b69a4u: goto label_2b69a4;
        case 0x2b69a8u: goto label_2b69a8;
        case 0x2b69acu: goto label_2b69ac;
        case 0x2b69b0u: goto label_2b69b0;
        case 0x2b69b4u: goto label_2b69b4;
        case 0x2b69b8u: goto label_2b69b8;
        case 0x2b69bcu: goto label_2b69bc;
        case 0x2b69c0u: goto label_2b69c0;
        case 0x2b69c4u: goto label_2b69c4;
        case 0x2b69c8u: goto label_2b69c8;
        case 0x2b69ccu: goto label_2b69cc;
        case 0x2b69d0u: goto label_2b69d0;
        case 0x2b69d4u: goto label_2b69d4;
        case 0x2b69d8u: goto label_2b69d8;
        case 0x2b69dcu: goto label_2b69dc;
        case 0x2b69e0u: goto label_2b69e0;
        case 0x2b69e4u: goto label_2b69e4;
        case 0x2b69e8u: goto label_2b69e8;
        case 0x2b69ecu: goto label_2b69ec;
        case 0x2b69f0u: goto label_2b69f0;
        case 0x2b69f4u: goto label_2b69f4;
        case 0x2b69f8u: goto label_2b69f8;
        case 0x2b69fcu: goto label_2b69fc;
        case 0x2b6a00u: goto label_2b6a00;
        case 0x2b6a04u: goto label_2b6a04;
        case 0x2b6a08u: goto label_2b6a08;
        case 0x2b6a0cu: goto label_2b6a0c;
        case 0x2b6a10u: goto label_2b6a10;
        case 0x2b6a14u: goto label_2b6a14;
        case 0x2b6a18u: goto label_2b6a18;
        case 0x2b6a1cu: goto label_2b6a1c;
        case 0x2b6a20u: goto label_2b6a20;
        case 0x2b6a24u: goto label_2b6a24;
        case 0x2b6a28u: goto label_2b6a28;
        case 0x2b6a2cu: goto label_2b6a2c;
        case 0x2b6a30u: goto label_2b6a30;
        case 0x2b6a34u: goto label_2b6a34;
        case 0x2b6a38u: goto label_2b6a38;
        case 0x2b6a3cu: goto label_2b6a3c;
        default: break;
    }

    ctx->pc = 0x2b6930u;

label_2b6930:
    // 0x2b6930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b6934:
    // 0x2b6934: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b6934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2b6938:
    // 0x2b6938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b693c:
    // 0x2b693c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b693cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b6940:
    // 0x2b6940: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x2b6940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_2b6944:
    // 0x2b6944: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
label_2b6948:
    if (ctx->pc == 0x2B6948u) {
        ctx->pc = 0x2B6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6944u;
        // 0x2b6948: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B694Cu;
        goto label_2b694c;
    }
    ctx->pc = 0x2B6944u;
    {
        const bool branch_taken_0x2b6944 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2B6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6944u;
        // 0x2b6948: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6944) {
            ctx->pc = 0x2B6970u;
            goto label_2b6970;
        }
    }
    ctx->pc = 0x2B694Cu;
label_2b694c:
    // 0x2b694c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2b6950:
    if (ctx->pc == 0x2B6950u) {
        ctx->pc = 0x2B6950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B694Cu;
        // 0x2b6950: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6954u;
        goto label_2b6954;
    }
    ctx->pc = 0x2B694Cu;
    {
        const bool branch_taken_0x2b694c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B694Cu;
        // 0x2b6950: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b694c) {
            ctx->pc = 0x2B6970u;
            goto label_2b6970;
        }
    }
    ctx->pc = 0x2B6954u;
label_2b6954:
    // 0x2b6954: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2b6958:
    if (ctx->pc == 0x2B6958u) {
        ctx->pc = 0x2B695Cu;
        goto label_2b695c;
    }
    ctx->pc = 0x2B6954u;
    {
        const bool branch_taken_0x2b6954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b6954) {
            ctx->pc = 0x2B6970u;
            goto label_2b6970;
        }
    }
    ctx->pc = 0x2B695Cu;
label_2b695c:
    // 0x2b695c: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x2b695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_2b6960:
    // 0x2b6960: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2b6960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2b6964:
    // 0x2b6964: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2b6964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2b6968:
    // 0x2b6968: 0x60f809  jalr        $v1
label_2b696c:
    if (ctx->pc == 0x2B696Cu) {
        ctx->pc = 0x2B696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6968u;
        // 0x2b696c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6970u;
        goto label_2b6970;
    }
    ctx->pc = 0x2B6968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B6970u);
        ctx->pc = 0x2B696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6968u;
        // 0x2b696c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6968u, 0x2B6970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6970u;
label_2b6970:
    // 0x2b6970: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b6970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b6974:
    // 0x2b6974: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b6974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b6978:
    // 0x2b6978: 0xc053934  jal         func_14E4D0
label_2b697c:
    if (ctx->pc == 0x2B697Cu) {
        ctx->pc = 0x2B697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6978u;
        // 0x2b697c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6980u;
        goto label_2b6980;
    }
    ctx->pc = 0x2B6978u;
    SET_GPR_U32(ctx, 31, 0x2B6980u);
    ctx->pc = 0x2B697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6978u;
    // 0x2b697c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E4D0u, 0x2B6978u, 0x2B6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6980u;
label_2b6980:
    // 0x2b6980: 0x920204e0  lbu         $v0, 0x4E0($s0)
    ctx->pc = 0x2b6980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1248)));
label_2b6984:
    // 0x2b6984: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b6988:
    if (ctx->pc == 0x2B6988u) {
        ctx->pc = 0x2B698Cu;
        goto label_2b698c;
    }
    ctx->pc = 0x2B6984u;
    {
        const bool branch_taken_0x2b6984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6984) {
            ctx->pc = 0x2B6994u;
            goto label_2b6994;
        }
    }
    ctx->pc = 0x2B698Cu;
label_2b698c:
    // 0x2b698c: 0xc0adbfa  jal         func_2B6FE8
label_2b6990:
    if (ctx->pc == 0x2B6990u) {
        ctx->pc = 0x2B6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B698Cu;
        // 0x2b6990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6994u;
        goto label_2b6994;
    }
    ctx->pc = 0x2B698Cu;
    SET_GPR_U32(ctx, 31, 0x2B6994u);
    ctx->pc = 0x2B6990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B698Cu;
    // 0x2b6990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6FE8u, 0x2B698Cu, 0x2B6994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6994u;
label_2b6994:
    // 0x2b6994: 0xc0527ae  jal         func_149EB8
label_2b6998:
    if (ctx->pc == 0x2B6998u) {
        ctx->pc = 0x2B6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6994u;
        // 0x2b6998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B699Cu;
        goto label_2b699c;
    }
    ctx->pc = 0x2B6994u;
    SET_GPR_U32(ctx, 31, 0x2B699Cu);
    ctx->pc = 0x2B6998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6994u;
    // 0x2b6998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2B6994u, 0x2B699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B699Cu;
label_2b699c:
    // 0x2b699c: 0x8e0204dc  lw          $v0, 0x4DC($s0)
    ctx->pc = 0x2b699cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1244)));
label_2b69a0:
    // 0x2b69a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b69a4:
    if (ctx->pc == 0x2B69A4u) {
        ctx->pc = 0x2B69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69A0u;
        // 0x2b69a4: 0x92021390  lbu         $v0, 0x1390($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69A8u;
        goto label_2b69a8;
    }
    ctx->pc = 0x2B69A0u;
    {
        const bool branch_taken_0x2b69a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b69a0) {
            ctx->pc = 0x2B69A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B69A0u;
            // 0x2b69a4: 0x92021390  lbu         $v0, 0x1390($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B69B4u;
            goto label_2b69b4;
        }
    }
    ctx->pc = 0x2B69A8u;
label_2b69a8:
    // 0x2b69a8: 0xc053bea  jal         func_14EFA8
label_2b69ac:
    if (ctx->pc == 0x2B69ACu) {
        ctx->pc = 0x2B69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69A8u;
        // 0x2b69ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69B0u;
        goto label_2b69b0;
    }
    ctx->pc = 0x2B69A8u;
    SET_GPR_U32(ctx, 31, 0x2B69B0u);
    ctx->pc = 0x2B69ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69A8u;
    // 0x2b69ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EFA8u, 0x2B69A8u, 0x2B69B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69B0u;
label_2b69b0:
    // 0x2b69b0: 0x92021390  lbu         $v0, 0x1390($s0)
    ctx->pc = 0x2b69b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5008)));
label_2b69b4:
    // 0x2b69b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b69b8:
    if (ctx->pc == 0x2B69B8u) {
        ctx->pc = 0x2B69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69B4u;
        // 0x2b69b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69BCu;
        goto label_2b69bc;
    }
    ctx->pc = 0x2B69B4u;
    {
        const bool branch_taken_0x2b69b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69B4u;
        // 0x2b69b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69b4) {
            ctx->pc = 0x2B69CCu;
            goto label_2b69cc;
        }
    }
    ctx->pc = 0x2B69BCu;
label_2b69bc:
    // 0x2b69bc: 0x8e041394  lw          $a0, 0x1394($s0)
    ctx->pc = 0x2b69bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
label_2b69c0:
    // 0x2b69c0: 0x260613a0  addiu       $a2, $s0, 0x13A0
    ctx->pc = 0x2b69c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5024));
label_2b69c4:
    // 0x2b69c4: 0xc0b7e18  jal         func_2DF860
label_2b69c8:
    if (ctx->pc == 0x2B69C8u) {
        ctx->pc = 0x2B69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69C4u;
        // 0x2b69c8: 0x26072f20  addiu       $a3, $s0, 0x2F20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69CCu;
        goto label_2b69cc;
    }
    ctx->pc = 0x2B69C4u;
    SET_GPR_U32(ctx, 31, 0x2B69CCu);
    ctx->pc = 0x2B69C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69C4u;
    // 0x2b69c8: 0x26072f20  addiu       $a3, $s0, 0x2F20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF860u, 0x2B69C4u, 0x2B69CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69CCu;
label_2b69cc:
    // 0x2b69cc: 0x92022fa0  lbu         $v0, 0x2FA0($s0)
    ctx->pc = 0x2b69ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12192)));
label_2b69d0:
    // 0x2b69d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b69d4:
    if (ctx->pc == 0x2B69D4u) {
        ctx->pc = 0x2B69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69D0u;
        // 0x2b69d4: 0x92022ff0  lbu         $v0, 0x2FF0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69D8u;
        goto label_2b69d8;
    }
    ctx->pc = 0x2B69D0u;
    {
        const bool branch_taken_0x2b69d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b69d0) {
            ctx->pc = 0x2B69D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B69D0u;
            // 0x2b69d4: 0x92022ff0  lbu         $v0, 0x2FF0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B69E4u;
            goto label_2b69e4;
        }
    }
    ctx->pc = 0x2B69D8u;
label_2b69d8:
    // 0x2b69d8: 0xc0ada90  jal         func_2B6A40
label_2b69dc:
    if (ctx->pc == 0x2B69DCu) {
        ctx->pc = 0x2B69DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69D8u;
        // 0x2b69dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69E0u;
        goto label_2b69e0;
    }
    ctx->pc = 0x2B69D8u;
    SET_GPR_U32(ctx, 31, 0x2B69E0u);
    ctx->pc = 0x2B69DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69D8u;
    // 0x2b69dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6A40u, 0x2B69D8u, 0x2B69E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69E0u;
label_2b69e0:
    // 0x2b69e0: 0x92022ff0  lbu         $v0, 0x2FF0($s0)
    ctx->pc = 0x2b69e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12272)));
label_2b69e4:
    // 0x2b69e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b69e8:
    if (ctx->pc == 0x2B69E8u) {
        ctx->pc = 0x2B69E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69E4u;
        // 0x2b69e8: 0x920204d8  lbu         $v0, 0x4D8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69ECu;
        goto label_2b69ec;
    }
    ctx->pc = 0x2B69E4u;
    {
        const bool branch_taken_0x2b69e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b69e4) {
            ctx->pc = 0x2B69E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B69E4u;
            // 0x2b69e8: 0x920204d8  lbu         $v0, 0x4D8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B69F8u;
            goto label_2b69f8;
        }
    }
    ctx->pc = 0x2B69ECu;
label_2b69ec:
    // 0x2b69ec: 0xc0ade78  jal         func_2B79E0
label_2b69f0:
    if (ctx->pc == 0x2B69F0u) {
        ctx->pc = 0x2B69F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69ECu;
        // 0x2b69f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69F4u;
        goto label_2b69f4;
    }
    ctx->pc = 0x2B69ECu;
    SET_GPR_U32(ctx, 31, 0x2B69F4u);
    ctx->pc = 0x2B69F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69ECu;
    // 0x2b69f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79E0u, 0x2B69ECu, 0x2B69F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69F4u;
label_2b69f4:
    // 0x2b69f4: 0x920204d8  lbu         $v0, 0x4D8($s0)
    ctx->pc = 0x2b69f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1240)));
label_2b69f8:
    // 0x2b69f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b69fc:
    if (ctx->pc == 0x2B69FCu) {
        ctx->pc = 0x2B69FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69F8u;
        // 0x2b69fc: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A00u;
        goto label_2b6a00;
    }
    ctx->pc = 0x2B69F8u;
    {
        const bool branch_taken_0x2b69f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b69f8) {
            ctx->pc = 0x2B69FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B69F8u;
            // 0x2b69fc: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6A0Cu;
            goto label_2b6a0c;
        }
    }
    ctx->pc = 0x2B6A00u;
label_2b6a00:
    // 0x2b6a00: 0xc0adb68  jal         func_2B6DA0
label_2b6a04:
    if (ctx->pc == 0x2B6A04u) {
        ctx->pc = 0x2B6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A00u;
        // 0x2b6a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A08u;
        goto label_2b6a08;
    }
    ctx->pc = 0x2B6A00u;
    SET_GPR_U32(ctx, 31, 0x2B6A08u);
    ctx->pc = 0x2B6A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A00u;
    // 0x2b6a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DA0u, 0x2B6A00u, 0x2B6A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A08u;
label_2b6a08:
    // 0x2b6a08: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2b6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2b6a0c:
    // 0x2b6a0c: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x2b6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_2b6a10:
    // 0x2b6a10: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_2b6a14:
    if (ctx->pc == 0x2B6A14u) {
        ctx->pc = 0x2B6A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A10u;
        // 0x2b6a14: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A18u;
        goto label_2b6a18;
    }
    ctx->pc = 0x2B6A10u;
    {
        const bool branch_taken_0x2b6a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b6a10) {
            ctx->pc = 0x2B6A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6A10u;
            // 0x2b6a14: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6A34u;
            goto label_2b6a34;
        }
    }
    ctx->pc = 0x2B6A18u;
label_2b6a18:
    // 0x2b6a18: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b6a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6a1c:
    // 0x2b6a1c: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x2b6a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_2b6a20:
    // 0x2b6a20: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b6a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b6a24:
    // 0x2b6a24: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b6a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2b6a28:
    // 0x2b6a28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b6a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6a2c:
    // 0x2b6a2c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b6a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2b6a30:
    // 0x2b6a30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b6a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b6a34:
    // 0x2b6a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b6a38:
    // 0x2b6a38: 0x3e00008  jr          $ra
label_2b6a3c:
    if (ctx->pc == 0x2B6A3Cu) {
        ctx->pc = 0x2B6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A38u;
        // 0x2b6a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A40u;
        goto label_fallthrough_0x2b6a38;
    }
    ctx->pc = 0x2B6A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A38u;
        // 0x2b6a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b6a38:
    ctx->pc = 0x2B6A40u;
}
