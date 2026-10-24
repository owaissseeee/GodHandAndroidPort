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

// Function: func_002769A8
// Address: 0x2769a8 - 0x276c88
void func_002769A8_0x2769a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002769A8_0x2769a8");
#endif

    switch (ctx->pc) {
        case 0x2769a8u: goto label_2769a8;
        case 0x2769acu: goto label_2769ac;
        case 0x2769b0u: goto label_2769b0;
        case 0x2769b4u: goto label_2769b4;
        case 0x2769b8u: goto label_2769b8;
        case 0x2769bcu: goto label_2769bc;
        case 0x2769c0u: goto label_2769c0;
        case 0x2769c4u: goto label_2769c4;
        case 0x2769c8u: goto label_2769c8;
        case 0x2769ccu: goto label_2769cc;
        case 0x2769d0u: goto label_2769d0;
        case 0x2769d4u: goto label_2769d4;
        case 0x2769d8u: goto label_2769d8;
        case 0x2769dcu: goto label_2769dc;
        case 0x2769e0u: goto label_2769e0;
        case 0x2769e4u: goto label_2769e4;
        case 0x2769e8u: goto label_2769e8;
        case 0x2769ecu: goto label_2769ec;
        case 0x2769f0u: goto label_2769f0;
        case 0x2769f4u: goto label_2769f4;
        case 0x2769f8u: goto label_2769f8;
        case 0x2769fcu: goto label_2769fc;
        case 0x276a00u: goto label_276a00;
        case 0x276a04u: goto label_276a04;
        case 0x276a08u: goto label_276a08;
        case 0x276a0cu: goto label_276a0c;
        case 0x276a10u: goto label_276a10;
        case 0x276a14u: goto label_276a14;
        case 0x276a18u: goto label_276a18;
        case 0x276a1cu: goto label_276a1c;
        case 0x276a20u: goto label_276a20;
        case 0x276a24u: goto label_276a24;
        case 0x276a28u: goto label_276a28;
        case 0x276a2cu: goto label_276a2c;
        case 0x276a30u: goto label_276a30;
        case 0x276a34u: goto label_276a34;
        case 0x276a38u: goto label_276a38;
        case 0x276a3cu: goto label_276a3c;
        case 0x276a40u: goto label_276a40;
        case 0x276a44u: goto label_276a44;
        case 0x276a48u: goto label_276a48;
        case 0x276a4cu: goto label_276a4c;
        case 0x276a50u: goto label_276a50;
        case 0x276a54u: goto label_276a54;
        case 0x276a58u: goto label_276a58;
        case 0x276a5cu: goto label_276a5c;
        case 0x276a60u: goto label_276a60;
        case 0x276a64u: goto label_276a64;
        case 0x276a68u: goto label_276a68;
        case 0x276a6cu: goto label_276a6c;
        case 0x276a70u: goto label_276a70;
        case 0x276a74u: goto label_276a74;
        case 0x276a78u: goto label_276a78;
        case 0x276a7cu: goto label_276a7c;
        case 0x276a80u: goto label_276a80;
        case 0x276a84u: goto label_276a84;
        case 0x276a88u: goto label_276a88;
        case 0x276a8cu: goto label_276a8c;
        case 0x276a90u: goto label_276a90;
        case 0x276a94u: goto label_276a94;
        case 0x276a98u: goto label_276a98;
        case 0x276a9cu: goto label_276a9c;
        case 0x276aa0u: goto label_276aa0;
        case 0x276aa4u: goto label_276aa4;
        case 0x276aa8u: goto label_276aa8;
        case 0x276aacu: goto label_276aac;
        case 0x276ab0u: goto label_276ab0;
        case 0x276ab4u: goto label_276ab4;
        case 0x276ab8u: goto label_276ab8;
        case 0x276abcu: goto label_276abc;
        case 0x276ac0u: goto label_276ac0;
        case 0x276ac4u: goto label_276ac4;
        case 0x276ac8u: goto label_276ac8;
        case 0x276accu: goto label_276acc;
        case 0x276ad0u: goto label_276ad0;
        case 0x276ad4u: goto label_276ad4;
        case 0x276ad8u: goto label_276ad8;
        case 0x276adcu: goto label_276adc;
        case 0x276ae0u: goto label_276ae0;
        case 0x276ae4u: goto label_276ae4;
        case 0x276ae8u: goto label_276ae8;
        case 0x276aecu: goto label_276aec;
        case 0x276af0u: goto label_276af0;
        case 0x276af4u: goto label_276af4;
        case 0x276af8u: goto label_276af8;
        case 0x276afcu: goto label_276afc;
        case 0x276b00u: goto label_276b00;
        case 0x276b04u: goto label_276b04;
        case 0x276b08u: goto label_276b08;
        case 0x276b0cu: goto label_276b0c;
        case 0x276b10u: goto label_276b10;
        case 0x276b14u: goto label_276b14;
        case 0x276b18u: goto label_276b18;
        case 0x276b1cu: goto label_276b1c;
        case 0x276b20u: goto label_276b20;
        case 0x276b24u: goto label_276b24;
        case 0x276b28u: goto label_276b28;
        case 0x276b2cu: goto label_276b2c;
        case 0x276b30u: goto label_276b30;
        case 0x276b34u: goto label_276b34;
        case 0x276b38u: goto label_276b38;
        case 0x276b3cu: goto label_276b3c;
        case 0x276b40u: goto label_276b40;
        case 0x276b44u: goto label_276b44;
        case 0x276b48u: goto label_276b48;
        case 0x276b4cu: goto label_276b4c;
        case 0x276b50u: goto label_276b50;
        case 0x276b54u: goto label_276b54;
        case 0x276b58u: goto label_276b58;
        case 0x276b5cu: goto label_276b5c;
        case 0x276b60u: goto label_276b60;
        case 0x276b64u: goto label_276b64;
        case 0x276b68u: goto label_276b68;
        case 0x276b6cu: goto label_276b6c;
        case 0x276b70u: goto label_276b70;
        case 0x276b74u: goto label_276b74;
        case 0x276b78u: goto label_276b78;
        case 0x276b7cu: goto label_276b7c;
        case 0x276b80u: goto label_276b80;
        case 0x276b84u: goto label_276b84;
        case 0x276b88u: goto label_276b88;
        case 0x276b8cu: goto label_276b8c;
        case 0x276b90u: goto label_276b90;
        case 0x276b94u: goto label_276b94;
        case 0x276b98u: goto label_276b98;
        case 0x276b9cu: goto label_276b9c;
        case 0x276ba0u: goto label_276ba0;
        case 0x276ba4u: goto label_276ba4;
        case 0x276ba8u: goto label_276ba8;
        case 0x276bacu: goto label_276bac;
        case 0x276bb0u: goto label_276bb0;
        case 0x276bb4u: goto label_276bb4;
        case 0x276bb8u: goto label_276bb8;
        case 0x276bbcu: goto label_276bbc;
        case 0x276bc0u: goto label_276bc0;
        case 0x276bc4u: goto label_276bc4;
        case 0x276bc8u: goto label_276bc8;
        case 0x276bccu: goto label_276bcc;
        case 0x276bd0u: goto label_276bd0;
        case 0x276bd4u: goto label_276bd4;
        case 0x276bd8u: goto label_276bd8;
        case 0x276bdcu: goto label_276bdc;
        case 0x276be0u: goto label_276be0;
        case 0x276be4u: goto label_276be4;
        case 0x276be8u: goto label_276be8;
        case 0x276becu: goto label_276bec;
        case 0x276bf0u: goto label_276bf0;
        case 0x276bf4u: goto label_276bf4;
        case 0x276bf8u: goto label_276bf8;
        case 0x276bfcu: goto label_276bfc;
        case 0x276c00u: goto label_276c00;
        case 0x276c04u: goto label_276c04;
        case 0x276c08u: goto label_276c08;
        case 0x276c0cu: goto label_276c0c;
        case 0x276c10u: goto label_276c10;
        case 0x276c14u: goto label_276c14;
        case 0x276c18u: goto label_276c18;
        case 0x276c1cu: goto label_276c1c;
        case 0x276c20u: goto label_276c20;
        case 0x276c24u: goto label_276c24;
        case 0x276c28u: goto label_276c28;
        case 0x276c2cu: goto label_276c2c;
        case 0x276c30u: goto label_276c30;
        case 0x276c34u: goto label_276c34;
        case 0x276c38u: goto label_276c38;
        case 0x276c3cu: goto label_276c3c;
        case 0x276c40u: goto label_276c40;
        case 0x276c44u: goto label_276c44;
        case 0x276c48u: goto label_276c48;
        case 0x276c4cu: goto label_276c4c;
        case 0x276c50u: goto label_276c50;
        case 0x276c54u: goto label_276c54;
        case 0x276c58u: goto label_276c58;
        case 0x276c5cu: goto label_276c5c;
        case 0x276c60u: goto label_276c60;
        case 0x276c64u: goto label_276c64;
        case 0x276c68u: goto label_276c68;
        case 0x276c6cu: goto label_276c6c;
        case 0x276c70u: goto label_276c70;
        case 0x276c74u: goto label_276c74;
        case 0x276c78u: goto label_276c78;
        case 0x276c7cu: goto label_276c7c;
        case 0x276c80u: goto label_276c80;
        case 0x276c84u: goto label_276c84;
        default: break;
    }

    ctx->pc = 0x2769a8u;

label_2769a8:
    // 0x2769a8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2769a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2769ac:
    // 0x2769ac: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2769acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2769b0:
    // 0x2769b0: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x2769b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_2769b4:
    // 0x2769b4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2769b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_2769b8:
    // 0x2769b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2769b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2769bc:
    // 0x2769bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2769bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2769c0:
    // 0x2769c0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2769c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2769c4:
    // 0x2769c4: 0x146000ac  bnez        $v1, . + 4 + (0xAC << 2)
label_2769c8:
    if (ctx->pc == 0x2769C8u) {
        ctx->pc = 0x2769C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769C4u;
        // 0x2769c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2769CCu;
        goto label_2769cc;
    }
    ctx->pc = 0x2769C4u;
    {
        const bool branch_taken_0x2769c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2769C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769C4u;
        // 0x2769c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769c4) {
            ctx->pc = 0x276C78u;
            goto label_276c78;
        }
    }
    ctx->pc = 0x2769CCu;
label_2769cc:
    // 0x2769cc: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x2769ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_2769d0:
    // 0x2769d0: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
label_2769d4:
    if (ctx->pc == 0x2769D4u) {
        ctx->pc = 0x2769D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769D0u;
        // 0x2769d4: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2769D8u;
        goto label_2769d8;
    }
    ctx->pc = 0x2769D0u;
    {
        const bool branch_taken_0x2769d0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2769D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769D0u;
        // 0x2769d4: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769d0) {
            ctx->pc = 0x276A00u;
            goto label_276a00;
        }
    }
    ctx->pc = 0x2769D8u;
label_2769d8:
    // 0x2769d8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2769dc:
    if (ctx->pc == 0x2769DCu) {
        ctx->pc = 0x2769DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769D8u;
        // 0x2769dc: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2769E0u;
        goto label_2769e0;
    }
    ctx->pc = 0x2769D8u;
    {
        const bool branch_taken_0x2769d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2769d8) {
            ctx->pc = 0x2769DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2769D8u;
            // 0x2769dc: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276A04u;
            goto label_276a04;
        }
    }
    ctx->pc = 0x2769E0u;
label_2769e0:
    // 0x2769e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2769e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2769e4:
    // 0x2769e4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_2769e8:
    if (ctx->pc == 0x2769E8u) {
        ctx->pc = 0x2769E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769E4u;
        // 0x2769e8: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2769ECu;
        goto label_2769ec;
    }
    ctx->pc = 0x2769E4u;
    {
        const bool branch_taken_0x2769e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2769e4) {
            ctx->pc = 0x2769E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2769E4u;
            // 0x2769e8: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276A04u;
            goto label_276a04;
        }
    }
    ctx->pc = 0x2769ECu;
label_2769ec:
    // 0x2769ec: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x2769ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_2769f0:
    // 0x2769f0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2769f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2769f4:
    // 0x2769f4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2769f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2769f8:
    // 0x2769f8: 0x60f809  jalr        $v1
label_2769fc:
    if (ctx->pc == 0x2769FCu) {
        ctx->pc = 0x2769FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769F8u;
        // 0x2769fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A00u;
        goto label_276a00;
    }
    ctx->pc = 0x2769F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x276A00u);
        ctx->pc = 0x2769FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769F8u;
        // 0x2769fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2769F8u, 0x276A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x276A00u;
label_276a00:
    // 0x276a00: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x276a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_276a04:
    // 0x276a04: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x276a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_276a08:
    // 0x276a08: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
label_276a0c:
    if (ctx->pc == 0x276A0Cu) {
        ctx->pc = 0x276A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A08u;
        // 0x276a0c: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A10u;
        goto label_276a10;
    }
    ctx->pc = 0x276A08u;
    {
        const bool branch_taken_0x276a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276a08) {
            ctx->pc = 0x276A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276A08u;
            // 0x276a0c: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276B38u;
            goto label_276b38;
        }
    }
    ctx->pc = 0x276A10u;
label_276a10:
    // 0x276a10: 0x8e0221b0  lw          $v0, 0x21B0($s0)
    ctx->pc = 0x276a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_276a14:
    // 0x276a14: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_276a18:
    if (ctx->pc == 0x276A18u) {
        ctx->pc = 0x276A1Cu;
        goto label_276a1c;
    }
    ctx->pc = 0x276A14u;
    {
        const bool branch_taken_0x276a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276a14) {
            ctx->pc = 0x276C68u;
            goto label_276c68;
        }
    }
    ctx->pc = 0x276A1Cu;
label_276a1c:
    // 0x276a1c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x276a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_276a20:
    // 0x276a20: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x276a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_276a24:
    // 0x276a24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_276a28:
    if (ctx->pc == 0x276A28u) {
        ctx->pc = 0x276A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A24u;
        // 0x276a28: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A2Cu;
        goto label_276a2c;
    }
    ctx->pc = 0x276A24u;
    {
        const bool branch_taken_0x276a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A24u;
        // 0x276a28: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a24) {
            ctx->pc = 0x276A38u;
            goto label_276a38;
        }
    }
    ctx->pc = 0x276A2Cu;
label_276a2c:
    // 0x276a2c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x276a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_276a30:
    // 0x276a30: 0x10000002  b           . + 4 + (0x2 << 2)
label_276a34:
    if (ctx->pc == 0x276A34u) {
        ctx->pc = 0x276A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A30u;
        // 0x276a34: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A38u;
        goto label_276a38;
    }
    ctx->pc = 0x276A30u;
    {
        const bool branch_taken_0x276a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A30u;
        // 0x276a34: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a30) {
            ctx->pc = 0x276A3Cu;
            goto label_276a3c;
        }
    }
    ctx->pc = 0x276A38u;
label_276a38:
    // 0x276a38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x276a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276a3c:
    // 0x276a3c: 0x8e0521b0  lw          $a1, 0x21B0($s0)
    ctx->pc = 0x276a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_276a40:
    // 0x276a40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276a44:
    // 0x276a44: 0x8e0421b4  lw          $a0, 0x21B4($s0)
    ctx->pc = 0x276a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8628)));
label_276a48:
    // 0x276a48: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x276a48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
label_276a4c:
    // 0x276a4c: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_276a50:
    if (ctx->pc == 0x276A50u) {
        ctx->pc = 0x276A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A4Cu;
        // 0x276a50: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A54u;
        goto label_276a54;
    }
    ctx->pc = 0x276A4Cu;
    {
        const bool branch_taken_0x276a4c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x276A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A4Cu;
        // 0x276a50: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a4c) {
            ctx->pc = 0x276A58u;
            goto label_276a58;
        }
    }
    ctx->pc = 0x276A54u;
label_276a54:
    // 0x276a54: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x276a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_276a58:
    // 0x276a58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_276a5c:
    // 0x276a5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_276a60:
    if (ctx->pc == 0x276A60u) {
        ctx->pc = 0x276A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A5Cu;
        // 0x276a60: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A64u;
        goto label_276a64;
    }
    ctx->pc = 0x276A5Cu;
    {
        const bool branch_taken_0x276a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A5Cu;
        // 0x276a60: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a5c) {
            ctx->pc = 0x276A74u;
            goto label_276a74;
        }
    }
    ctx->pc = 0x276A64u;
label_276a64:
    // 0x276a64: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x276a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
label_276a68:
    // 0x276a68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_276a6c:
    // 0x276a6c: 0x10000002  b           . + 4 + (0x2 << 2)
label_276a70:
    if (ctx->pc == 0x276A70u) {
        ctx->pc = 0x276A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A6Cu;
        // 0x276a70: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A74u;
        goto label_276a74;
    }
    ctx->pc = 0x276A6Cu;
    {
        const bool branch_taken_0x276a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A6Cu;
        // 0x276a70: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a6c) {
            ctx->pc = 0x276A78u;
            goto label_276a78;
        }
    }
    ctx->pc = 0x276A74u;
label_276a74:
    // 0x276a74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276a78:
    // 0x276a78: 0x50c0002f  beql        $a2, $zero, . + 4 + (0x2F << 2)
label_276a7c:
    if (ctx->pc == 0x276A7Cu) {
        ctx->pc = 0x276A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A78u;
        // 0x276a7c: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A80u;
        goto label_276a80;
    }
    ctx->pc = 0x276A78u;
    {
        const bool branch_taken_0x276a78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x276a78) {
            ctx->pc = 0x276A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276A78u;
            // 0x276a7c: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276B38u;
            goto label_276b38;
        }
    }
    ctx->pc = 0x276A80u;
label_276a80:
    // 0x276a80: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_276a84:
    if (ctx->pc == 0x276A84u) {
        ctx->pc = 0x276A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A80u;
        // 0x276a84: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A88u;
        goto label_276a88;
    }
    ctx->pc = 0x276A80u;
    {
        const bool branch_taken_0x276a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A80u;
        // 0x276a84: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a80) {
            ctx->pc = 0x276B34u;
            goto label_276b34;
        }
    }
    ctx->pc = 0x276A88u;
label_276a88:
    // 0x276a88: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x276a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_276a8c:
    // 0x276a8c: 0x8cc300f0  lw          $v1, 0xF0($a2)
    ctx->pc = 0x276a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_276a90:
    // 0x276a90: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x276a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_276a94:
    // 0x276a94: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x276a94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_276a98:
    // 0x276a98: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x276a98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_276a9c:
    // 0x276a9c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x276a9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_276aa0:
    // 0x276aa0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x276aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_276aa4:
    // 0x276aa4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x276aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_276aa8:
    // 0x276aa8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x276aa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_276aac:
    // 0x276aac: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x276aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_276ab0:
    // 0x276ab0: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
label_276ab4:
    if (ctx->pc == 0x276AB4u) {
        ctx->pc = 0x276AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276AB0u;
        // 0x276ab4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276AB8u;
        goto label_276ab8;
    }
    ctx->pc = 0x276AB0u;
    {
        const bool branch_taken_0x276ab0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x276AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276AB0u;
        // 0x276ab4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ab0) {
            ctx->pc = 0x276ACCu;
            goto label_276acc;
        }
    }
    ctx->pc = 0x276AB8u;
label_276ab8:
    // 0x276ab8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x276ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276abc:
    // 0x276abc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x276abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276ac0:
    // 0x276ac0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x276ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_276ac4:
    // 0x276ac4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x276ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_276ac8:
    // 0x276ac8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x276ac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_276acc:
    // 0x276acc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x276accu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_276ad0:
    // 0x276ad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x276ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276ad4:
    // 0x276ad4: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x276ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_276ad8:
    // 0x276ad8: 0x26052130  addiu       $a1, $s0, 0x2130
    ctx->pc = 0x276ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8496));
label_276adc:
    // 0x276adc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_276ae0:
    if (ctx->pc == 0x276AE0u) {
        ctx->pc = 0x276AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276ADCu;
        // 0x276ae0: 0x260605b0  addiu       $a2, $s0, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276AE4u;
        goto label_276ae4;
    }
    ctx->pc = 0x276ADCu;
    {
        const bool branch_taken_0x276adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276ADCu;
        // 0x276ae0: 0x260605b0  addiu       $a2, $s0, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276adc) {
            ctx->pc = 0x276B2Cu;
            goto label_276b2c;
        }
    }
    ctx->pc = 0x276AE4u;
label_276ae4:
    // 0x276ae4: 0x0  nop
    ctx->pc = 0x276ae4u;
    // NOP
label_276ae8:
    // 0x276ae8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x276ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276aec:
    // 0x276aec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x276aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_276af0:
    // 0x276af0: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x276af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276af4:
    // 0x276af4: 0xc46200b4  lwc1        $f2, 0xB4($v1)
    ctx->pc = 0x276af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276af8:
    // 0x276af8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x276af8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_276afc:
    // 0x276afc: 0xc46300b8  lwc1        $f3, 0xB8($v1)
    ctx->pc = 0x276afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_276b00:
    // 0x276b00: 0xe46100b0  swc1        $f1, 0xB0($v1)
    ctx->pc = 0x276b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
label_276b04:
    // 0x276b04: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x276b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276b08:
    // 0x276b08: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x276b08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_276b0c:
    // 0x276b0c: 0xe46200b4  swc1        $f2, 0xB4($v1)
    ctx->pc = 0x276b0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
label_276b10:
    // 0x276b10: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x276b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276b14:
    // 0x276b14: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x276b14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_276b18:
    // 0x276b18: 0xe46300b8  swc1        $f3, 0xB8($v1)
    ctx->pc = 0x276b18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
label_276b1c:
    // 0x276b1c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x276b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_276b20:
    // 0x276b20: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x276b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_276b24:
    // 0x276b24: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_276b28:
    if (ctx->pc == 0x276B28u) {
        ctx->pc = 0x276B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B24u;
        // 0x276b28: 0x8c630144  lw          $v1, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B2Cu;
        goto label_276b2c;
    }
    ctx->pc = 0x276B24u;
    {
        const bool branch_taken_0x276b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B24u;
        // 0x276b28: 0x8c630144  lw          $v1, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b24) {
            ctx->pc = 0x276AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276ae8;
        }
    }
    ctx->pc = 0x276B2Cu;
label_276b2c:
    // 0x276b2c: 0xc041f1a  jal         func_107C68
label_276b30:
    if (ctx->pc == 0x276B30u) {
        ctx->pc = 0x276B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B2Cu;
        // 0x276b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B34u;
        goto label_276b34;
    }
    ctx->pc = 0x276B2Cu;
    SET_GPR_U32(ctx, 31, 0x276B34u);
    ctx->pc = 0x276B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276B2Cu;
    // 0x276b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C68u, 0x276B2Cu, 0x276B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B34u;
label_276b34:
    // 0x276b34: 0x8e0321b0  lw          $v1, 0x21B0($s0)
    ctx->pc = 0x276b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_276b38:
    // 0x276b38: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
label_276b3c:
    if (ctx->pc == 0x276B3Cu) {
        ctx->pc = 0x276B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B38u;
        // 0x276b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B40u;
        goto label_276b40;
    }
    ctx->pc = 0x276B38u;
    {
        const bool branch_taken_0x276b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x276B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B38u;
        // 0x276b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b38) {
            ctx->pc = 0x276C68u;
            goto label_276c68;
        }
    }
    ctx->pc = 0x276B40u;
label_276b40:
    // 0x276b40: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x276b40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
label_276b44:
    // 0x276b44: 0x8e0421b4  lw          $a0, 0x21B4($s0)
    ctx->pc = 0x276b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8628)));
label_276b48:
    // 0x276b48: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_276b4c:
    if (ctx->pc == 0x276B4Cu) {
        ctx->pc = 0x276B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B48u;
        // 0x276b4c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B50u;
        goto label_276b50;
    }
    ctx->pc = 0x276B48u;
    {
        const bool branch_taken_0x276b48 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x276B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B48u;
        // 0x276b4c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b48) {
            ctx->pc = 0x276B54u;
            goto label_276b54;
        }
    }
    ctx->pc = 0x276B50u;
label_276b50:
    // 0x276b50: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x276b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_276b54:
    // 0x276b54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_276b58:
    // 0x276b58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_276b5c:
    if (ctx->pc == 0x276B5Cu) {
        ctx->pc = 0x276B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B58u;
        // 0x276b5c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B60u;
        goto label_276b60;
    }
    ctx->pc = 0x276B58u;
    {
        const bool branch_taken_0x276b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B58u;
        // 0x276b5c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b58) {
            ctx->pc = 0x276B70u;
            goto label_276b70;
        }
    }
    ctx->pc = 0x276B60u;
label_276b60:
    // 0x276b60: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x276b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
label_276b64:
    // 0x276b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_276b68:
    // 0x276b68: 0x10000002  b           . + 4 + (0x2 << 2)
label_276b6c:
    if (ctx->pc == 0x276B6Cu) {
        ctx->pc = 0x276B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B68u;
        // 0x276b6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B70u;
        goto label_276b70;
    }
    ctx->pc = 0x276B68u;
    {
        const bool branch_taken_0x276b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B68u;
        // 0x276b6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b68) {
            ctx->pc = 0x276B74u;
            goto label_276b74;
        }
    }
    ctx->pc = 0x276B70u;
label_276b70:
    // 0x276b70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x276b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276b74:
    // 0x276b74: 0x8e0221b0  lw          $v0, 0x21B0($s0)
    ctx->pc = 0x276b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_276b78:
    // 0x276b78: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x276b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_276b7c:
    // 0x276b7c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x276b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_276b80:
    // 0x276b80: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_276b84:
    if (ctx->pc == 0x276B84u) {
        ctx->pc = 0x276B88u;
        goto label_276b88;
    }
    ctx->pc = 0x276B80u;
    {
        const bool branch_taken_0x276b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x276b80) {
            ctx->pc = 0x276BA0u;
            goto label_276ba0;
        }
    }
    ctx->pc = 0x276B88u;
label_276b88:
    // 0x276b88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x276b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276b8c:
    // 0x276b8c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x276b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_276b90:
    // 0x276b90: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x276b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276b94:
    // 0x276b94: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x276b94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_276b98:
    // 0x276b98: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x276b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276b9c:
    // 0x276b9c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x276b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_276ba0:
    // 0x276ba0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_276ba4:
    if (ctx->pc == 0x276BA4u) {
        ctx->pc = 0x276BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BA0u;
        // 0x276ba4: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276BA8u;
        goto label_276ba8;
    }
    ctx->pc = 0x276BA0u;
    {
        const bool branch_taken_0x276ba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x276BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BA0u;
        // 0x276ba4: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ba0) {
            ctx->pc = 0x276BF0u;
            goto label_276bf0;
        }
    }
    ctx->pc = 0x276BA8u;
label_276ba8:
    // 0x276ba8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x276ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_276bac:
    // 0x276bac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_276bb0:
    if (ctx->pc == 0x276BB0u) {
        ctx->pc = 0x276BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BACu;
        // 0x276bb0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276BB4u;
        goto label_276bb4;
    }
    ctx->pc = 0x276BACu;
    {
        const bool branch_taken_0x276bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BACu;
        // 0x276bb0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276bac) {
            ctx->pc = 0x276BC0u;
            goto label_276bc0;
        }
    }
    ctx->pc = 0x276BB4u;
label_276bb4:
    // 0x276bb4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x276bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_276bb8:
    // 0x276bb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_276bbc:
    if (ctx->pc == 0x276BBCu) {
        ctx->pc = 0x276BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BB8u;
        // 0x276bbc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276BC0u;
        goto label_276bc0;
    }
    ctx->pc = 0x276BB8u;
    {
        const bool branch_taken_0x276bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BB8u;
        // 0x276bbc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276bb8) {
            ctx->pc = 0x276BC4u;
            goto label_276bc4;
        }
    }
    ctx->pc = 0x276BC0u;
label_276bc0:
    // 0x276bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276bc4:
    // 0x276bc4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x276bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_276bc8:
    // 0x276bc8: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x276bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_276bcc:
    // 0x276bcc: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_276bd0:
    if (ctx->pc == 0x276BD0u) {
        ctx->pc = 0x276BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BCCu;
        // 0x276bd0: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276BD4u;
        goto label_276bd4;
    }
    ctx->pc = 0x276BCCu;
    {
        const bool branch_taken_0x276bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x276bcc) {
            ctx->pc = 0x276BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276BCCu;
            // 0x276bd0: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276BF0u;
            goto label_276bf0;
        }
    }
    ctx->pc = 0x276BD4u;
label_276bd4:
    // 0x276bd4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x276bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276bd8:
    // 0x276bd8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x276bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_276bdc:
    // 0x276bdc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x276bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276be0:
    // 0x276be0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x276be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_276be4:
    // 0x276be4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x276be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276be8:
    // 0x276be8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_276bec:
    // 0x276bec: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x276becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_276bf0:
    // 0x276bf0: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x276bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_276bf4:
    // 0x276bf4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_276bf8:
    if (ctx->pc == 0x276BF8u) {
        ctx->pc = 0x276BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BF4u;
        // 0x276bf8: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276BFCu;
        goto label_276bfc;
    }
    ctx->pc = 0x276BF4u;
    {
        const bool branch_taken_0x276bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x276bf4) {
            ctx->pc = 0x276BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276BF4u;
            // 0x276bf8: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276C18u;
            goto label_276c18;
        }
    }
    ctx->pc = 0x276BFCu;
label_276bfc:
    // 0x276bfc: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x276bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276c00:
    // 0x276c00: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x276c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_276c04:
    // 0x276c04: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x276c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276c08:
    // 0x276c08: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x276c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_276c0c:
    // 0x276c0c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x276c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276c10:
    // 0x276c10: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x276c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_276c14:
    // 0x276c14: 0x8e0421b0  lw          $a0, 0x21B0($s0)
    ctx->pc = 0x276c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_276c18:
    // 0x276c18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x276c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_276c1c:
    // 0x276c1c: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x276c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_276c20:
    // 0x276c20: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x276c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_276c24:
    // 0x276c24: 0xc480024c  lwc1        $f0, 0x24C($a0)
    ctx->pc = 0x276c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276c28:
    // 0x276c28: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x276c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_276c2c:
    // 0x276c2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x276c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_276c30:
    // 0x276c30: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x276c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_276c34:
    // 0x276c34: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x276c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
label_276c38:
    // 0x276c38: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x276c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_276c3c:
    // 0x276c3c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x276c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_276c40:
    // 0x276c40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x276c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_276c44:
    // 0x276c44: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x276c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_276c48:
    // 0x276c48: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x276c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_276c4c:
    // 0x276c4c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x276c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_276c50:
    // 0x276c50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_276c54:
    if (ctx->pc == 0x276C54u) {
        ctx->pc = 0x276C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C50u;
        // 0x276c54: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C58u;
        goto label_276c58;
    }
    ctx->pc = 0x276C50u;
    {
        const bool branch_taken_0x276c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C50u;
        // 0x276c54: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c50) {
            ctx->pc = 0x276C64u;
            goto label_276c64;
        }
    }
    ctx->pc = 0x276C58u;
label_276c58:
    // 0x276c58: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x276c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_276c5c:
    // 0x276c5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x276c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_276c60:
    // 0x276c60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x276c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_276c64:
    // 0x276c64: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x276c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_276c68:
    // 0x276c68: 0xc0527ae  jal         func_149EB8
label_276c6c:
    if (ctx->pc == 0x276C6Cu) {
        ctx->pc = 0x276C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C68u;
        // 0x276c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C70u;
        goto label_276c70;
    }
    ctx->pc = 0x276C68u;
    SET_GPR_U32(ctx, 31, 0x276C70u);
    ctx->pc = 0x276C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C68u;
    // 0x276c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x276C68u, 0x276C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C70u;
label_276c70:
    // 0x276c70: 0xc09db72  jal         func_276DC8
label_276c74:
    if (ctx->pc == 0x276C74u) {
        ctx->pc = 0x276C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C70u;
        // 0x276c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C78u;
        goto label_276c78;
    }
    ctx->pc = 0x276C70u;
    SET_GPR_U32(ctx, 31, 0x276C78u);
    ctx->pc = 0x276C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C70u;
    // 0x276c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276DC8u, 0x276C70u, 0x276C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C78u;
label_276c78:
    // 0x276c78: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x276c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_276c7c:
    // 0x276c7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x276c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_276c80:
    // 0x276c80: 0x3e00008  jr          $ra
label_276c84:
    if (ctx->pc == 0x276C84u) {
        ctx->pc = 0x276C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C80u;
        // 0x276c84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C88u;
        goto label_fallthrough_0x276c80;
    }
    ctx->pc = 0x276C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C80u;
        // 0x276c84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x276c80:
    ctx->pc = 0x276C88u;
}
