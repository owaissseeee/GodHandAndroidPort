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

// Function: func_00257948
// Address: 0x257948 - 0x257e90
void func_00257948_0x257948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00257948_0x257948");
#endif

    switch (ctx->pc) {
        case 0x257990u: goto label_257990;
        case 0x2579d8u: goto label_2579d8;
        case 0x257a44u: goto label_257a44;
        case 0x257a7cu: goto label_257a7c;
        case 0x257ab0u: goto label_257ab0;
        case 0x257adcu: goto label_257adc;
        case 0x257b24u: goto label_257b24;
        case 0x257b68u: goto label_257b68;
        case 0x257b94u: goto label_257b94;
        case 0x257d88u: goto label_257d88;
        case 0x257d90u: goto label_257d90;
        case 0x257da4u: goto label_257da4;
        case 0x257db4u: goto label_257db4;
        case 0x257dc4u: goto label_257dc4;
        case 0x257dd4u: goto label_257dd4;
        case 0x257de8u: goto label_257de8;
        case 0x257df4u: goto label_257df4;
        case 0x257e14u: goto label_257e14;
        case 0x257e6cu: goto label_257e6c;
        default: break;
    }

    ctx->pc = 0x257948u;

    // 0x257948: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x257948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25794c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25794cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x257950: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x257950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x257954: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x257954u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257958: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x257958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x25795c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x257960: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x257960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x257964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257968: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x257968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25796c: 0x926302f6  lbu         $v1, 0x2F6($s3)
    ctx->pc = 0x25796cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x257970: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x257970u;
    {
        const bool branch_taken_0x257970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257970u;
        // 0x257974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257970) {
            ctx->pc = 0x257988u;
            goto label_257988;
        }
    }
    ctx->pc = 0x257978u;
    // 0x257978: 0x10620108  beq         $v1, $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x257978u;
    {
        const bool branch_taken_0x257978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x257978) {
            ctx->pc = 0x257D9Cu;
            goto label_257d9c;
        }
    }
    ctx->pc = 0x257980u;
    // 0x257980: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x257980u;
    {
        const bool branch_taken_0x257980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257980u;
        // 0x257984: 0x8e630564  lw          $v1, 0x564($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257980) {
            ctx->pc = 0x257DF8u;
            goto label_257df8;
        }
    }
    ctx->pc = 0x257988u;
label_257988:
    // 0x257988: 0xc09d91a  jal         func_276468
    ctx->pc = 0x257988u;
    SET_GPR_U32(ctx, 31, 0x257990u);
    ctx->pc = 0x25798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257988u;
    // 0x25798c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x257988u, 0x257990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257990u;
label_257990:
    // 0x257990: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x257990u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x257994: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x257994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x257998: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x257998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x25799c: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x25799cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x2579a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2579A0u;
    {
        const bool branch_taken_0x2579a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2579A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579A0u;
        // 0x2579a4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579a0) {
            ctx->pc = 0x2579C0u;
            goto label_2579c0;
        }
    }
    ctx->pc = 0x2579A8u;
    // 0x2579a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2579a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2579ac: 0x24422430  addiu       $v0, $v0, 0x2430
    ctx->pc = 0x2579acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9264));
    // 0x2579b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2579b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2579b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2579b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2579b8: 0x800008  jr          $a0
    ctx->pc = 0x2579B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2579C0u: goto label_2579c0;
            case 0x257A04u: goto label_257a04;
            case 0x257A2Cu: goto label_257a2c;
            case 0x257AC4u: goto label_257ac4;
            case 0x257B0Cu: goto label_257b0c;
            case 0x257B9Cu: goto label_257b9c;
            case 0x257BC4u: goto label_257bc4;
            case 0x257BECu: goto label_257bec;
            case 0x257C14u: goto label_257c14;
            case 0x257C3Cu: goto label_257c3c;
            case 0x257C64u: goto label_257c64;
            case 0x257C8Cu: goto label_257c8c;
            case 0x257CB4u: goto label_257cb4;
            case 0x257CDCu: goto label_257cdc;
            case 0x257D04u: goto label_257d04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2579B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2579C0u;
label_2579c0:
    // 0x2579c0: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x2579c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x2579c4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2579c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2579c8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2579C8u;
    {
        const bool branch_taken_0x2579c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2579c8) {
            ctx->pc = 0x2579CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2579C8u;
            // 0x2579cc: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2579F8u;
            goto label_2579f8;
        }
    }
    ctx->pc = 0x2579D0u;
    // 0x2579d0: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x2579D0u;
    SET_GPR_U32(ctx, 31, 0x2579D8u);
    ctx->pc = 0x2579D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2579D0u;
    // 0x2579d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x2579D0u, 0x2579D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2579D8u;
label_2579d8:
    // 0x2579d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2579D8u;
    {
        const bool branch_taken_0x2579d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2579DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579D8u;
        // 0x2579dc: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579d8) {
            ctx->pc = 0x2579ECu;
            goto label_2579ec;
        }
    }
    ctx->pc = 0x2579E0u;
    // 0x2579e0: 0x8c430358  lw          $v1, 0x358($v0)
    ctx->pc = 0x2579e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
    // 0x2579e4: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x2579E4u;
    {
        const bool branch_taken_0x2579e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2579E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579E4u;
        // 0x2579e8: 0x8c44035c  lw          $a0, 0x35C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579e4) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x2579ECu;
label_2579ec:
    // 0x2579ec: 0x8c430368  lw          $v1, 0x368($v0)
    ctx->pc = 0x2579ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2579f0: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x2579F0u;
    {
        const bool branch_taken_0x2579f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2579F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579F0u;
        // 0x2579f4: 0x8c44036c  lw          $a0, 0x36C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579f0) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x2579F8u;
label_2579f8:
    // 0x2579f8: 0x8c430360  lw          $v1, 0x360($v0)
    ctx->pc = 0x2579f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 864)));
    // 0x2579fc: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x2579FCu;
    {
        const bool branch_taken_0x2579fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579FCu;
        // 0x257a00: 0x8c440364  lw          $a0, 0x364($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579fc) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257A04u;
label_257a04:
    // 0x257a04: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257a04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257a08: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257a0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257A0Cu;
    {
        const bool branch_taken_0x257a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A0Cu;
        // 0x257a10: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a0c) {
            ctx->pc = 0x257A20u;
            goto label_257a20;
        }
    }
    ctx->pc = 0x257A14u;
    // 0x257a14: 0x8c4307a4  lw          $v1, 0x7A4($v0)
    ctx->pc = 0x257a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1956)));
    // 0x257a18: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x257A18u;
    {
        const bool branch_taken_0x257a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A18u;
        // 0x257a1c: 0x8c4407a8  lw          $a0, 0x7A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a18) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257A20u;
label_257a20:
    // 0x257a20: 0x8c4307ac  lw          $v1, 0x7AC($v0)
    ctx->pc = 0x257a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1964)));
    // 0x257a24: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x257A24u;
    {
        const bool branch_taken_0x257a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A24u;
        // 0x257a28: 0x8c4407b0  lw          $a0, 0x7B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a24) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257A2Cu;
label_257a2c:
    // 0x257a2c: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257a2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257a30: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257a34: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x257A34u;
    {
        const bool branch_taken_0x257a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257a34) {
            ctx->pc = 0x257A74u;
            goto label_257a74;
        }
    }
    ctx->pc = 0x257A3Cu;
    // 0x257a3c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x257A3Cu;
    SET_GPR_U32(ctx, 31, 0x257A44u);
    ctx->pc = 0x257A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A3Cu;
    // 0x257a40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x257A3Cu, 0x257A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A44u;
label_257a44:
    // 0x257a44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x257A44u;
    {
        const bool branch_taken_0x257a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A44u;
        // 0x257a48: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a44) {
            ctx->pc = 0x257A68u;
            goto label_257a68;
        }
    }
    ctx->pc = 0x257A4Cu;
    // 0x257a4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x257a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a50: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x257a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x257a54: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x257a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x257a58: 0x8c432ba0  lw          $v1, 0x2BA0($v0)
    ctx->pc = 0x257a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11168)));
    // 0x257a5c: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x257a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x257a60: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x257A60u;
    {
        const bool branch_taken_0x257a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A60u;
        // 0x257a64: 0x8c4a2ba4  lw          $t2, 0x2BA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a60) {
            ctx->pc = 0x257A9Cu;
            goto label_257a9c;
        }
    }
    ctx->pc = 0x257A68u;
label_257a68:
    // 0x257a68: 0x8c432b98  lw          $v1, 0x2B98($v0)
    ctx->pc = 0x257a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11160)));
    // 0x257a6c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x257A6Cu;
    {
        const bool branch_taken_0x257a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A6Cu;
        // 0x257a70: 0x8c442b9c  lw          $a0, 0x2B9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a6c) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257A74u;
label_257a74:
    // 0x257a74: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x257A74u;
    SET_GPR_U32(ctx, 31, 0x257A7Cu);
    ctx->pc = 0x257A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A74u;
    // 0x257a78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x257A74u, 0x257A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A7Cu;
label_257a7c:
    // 0x257a7c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x257A7Cu;
    {
        const bool branch_taken_0x257a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A7Cu;
        // 0x257a80: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a7c) {
            ctx->pc = 0x257AB8u;
            goto label_257ab8;
        }
    }
    ctx->pc = 0x257A84u;
    // 0x257a84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x257a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a88: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x257a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x257a8c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x257a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x257a90: 0x8c43262c  lw          $v1, 0x262C($v0)
    ctx->pc = 0x257a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9772)));
    // 0x257a94: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x257a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x257a98: 0x8c4a2630  lw          $t2, 0x2630($v0)
    ctx->pc = 0x257a98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9776)));
label_257a9c:
    // 0x257a9c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x257a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x257aa0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x257aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257aa4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x257aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257aa8: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x257AA8u;
    SET_GPR_U32(ctx, 31, 0x257AB0u);
    ctx->pc = 0x257AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257AA8u;
    // 0x257aac: 0x1428821  addu        $s1, $t2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x257AA8u, 0x257AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257AB0u;
label_257ab0:
    // 0x257ab0: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x257AB0u;
    {
        const bool branch_taken_0x257ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AB0u;
        // 0x257ab4: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ab0) {
            ctx->pc = 0x257D34u;
            goto label_257d34;
        }
    }
    ctx->pc = 0x257AB8u;
label_257ab8:
    // 0x257ab8: 0x8c430360  lw          $v1, 0x360($v0)
    ctx->pc = 0x257ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 864)));
    // 0x257abc: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x257ABCu;
    {
        const bool branch_taken_0x257abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257ABCu;
        // 0x257ac0: 0x8c440364  lw          $a0, 0x364($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257abc) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257AC4u;
label_257ac4:
    // 0x257ac4: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257ac4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257ac8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257acc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x257ACCu;
    {
        const bool branch_taken_0x257acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257acc) {
            ctx->pc = 0x257AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257ACCu;
            // 0x257ad0: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257B00u;
            goto label_257b00;
        }
    }
    ctx->pc = 0x257AD4u;
    // 0x257ad4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x257AD4u;
    SET_GPR_U32(ctx, 31, 0x257ADCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x257AD4u, 0x257ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257ADCu;
label_257adc:
    // 0x257adc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x257ae0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257AE0u;
    {
        const bool branch_taken_0x257ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AE0u;
        // 0x257ae4: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ae0) {
            ctx->pc = 0x257AF4u;
            goto label_257af4;
        }
    }
    ctx->pc = 0x257AE8u;
    // 0x257ae8: 0x8c430b04  lw          $v1, 0xB04($v0)
    ctx->pc = 0x257ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2820)));
    // 0x257aec: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x257AECu;
    {
        const bool branch_taken_0x257aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AECu;
        // 0x257af0: 0x8c440b08  lw          $a0, 0xB08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257aec) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257AF4u;
label_257af4:
    // 0x257af4: 0x8c430b14  lw          $v1, 0xB14($v0)
    ctx->pc = 0x257af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2836)));
    // 0x257af8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x257AF8u;
    {
        const bool branch_taken_0x257af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AF8u;
        // 0x257afc: 0x8c440b18  lw          $a0, 0xB18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257af8) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257B00u;
label_257b00:
    // 0x257b00: 0x8c430b0c  lw          $v1, 0xB0C($v0)
    ctx->pc = 0x257b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2828)));
    // 0x257b04: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x257B04u;
    {
        const bool branch_taken_0x257b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B04u;
        // 0x257b08: 0x8c440b10  lw          $a0, 0xB10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b04) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257B0Cu;
label_257b0c:
    // 0x257b0c: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257b0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257b10: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257b14: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x257B14u;
    {
        const bool branch_taken_0x257b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257b14) {
            ctx->pc = 0x257B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257B14u;
            // 0x257b18: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257B48u;
            goto label_257b48;
        }
    }
    ctx->pc = 0x257B1Cu;
    // 0x257b1c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x257B1Cu;
    SET_GPR_U32(ctx, 31, 0x257B24u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x257B1Cu, 0x257B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B24u;
label_257b24:
    // 0x257b24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x257b28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257B28u;
    {
        const bool branch_taken_0x257b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B28u;
        // 0x257b2c: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b28) {
            ctx->pc = 0x257B3Cu;
            goto label_257b3c;
        }
    }
    ctx->pc = 0x257B30u;
    // 0x257b30: 0x8c430b04  lw          $v1, 0xB04($v0)
    ctx->pc = 0x257b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2820)));
    // 0x257b34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x257B34u;
    {
        const bool branch_taken_0x257b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B34u;
        // 0x257b38: 0x8c440b08  lw          $a0, 0xB08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b34) {
            ctx->pc = 0x257B50u;
            goto label_257b50;
        }
    }
    ctx->pc = 0x257B3Cu;
label_257b3c:
    // 0x257b3c: 0x8c430b14  lw          $v1, 0xB14($v0)
    ctx->pc = 0x257b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2836)));
    // 0x257b40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x257B40u;
    {
        const bool branch_taken_0x257b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B40u;
        // 0x257b44: 0x8c440b18  lw          $a0, 0xB18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b40) {
            ctx->pc = 0x257B50u;
            goto label_257b50;
        }
    }
    ctx->pc = 0x257B48u;
label_257b48:
    // 0x257b48: 0x8c430b0c  lw          $v1, 0xB0C($v0)
    ctx->pc = 0x257b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2828)));
    // 0x257b4c: 0x8c440b10  lw          $a0, 0xB10($v0)
    ctx->pc = 0x257b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2832)));
label_257b50:
    // 0x257b50: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x257b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257b54: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x257b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x257b58: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x257b58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x257b5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x257b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b60: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x257B60u;
    SET_GPR_U32(ctx, 31, 0x257B68u);
    ctx->pc = 0x257B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B60u;
    // 0x257b64: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x257B60u, 0x257B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B68u;
label_257b68:
    // 0x257b68: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x257b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x257b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b70: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x257b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x257b74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x257b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257b78: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x257b78u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x257b7c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x257b7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x257b80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x257b84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x257b88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b8c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x257B8Cu;
    SET_GPR_U32(ctx, 31, 0x257B94u);
    ctx->pc = 0x257B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B8Cu;
    // 0x257b90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x257B8Cu, 0x257B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B94u;
label_257b94:
    // 0x257b94: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x257B94u;
    {
        const bool branch_taken_0x257b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B94u;
        // 0x257b98: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b94) {
            ctx->pc = 0x257D34u;
            goto label_257d34;
        }
    }
    ctx->pc = 0x257B9Cu;
label_257b9c:
    // 0x257b9c: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257b9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257ba0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257ba4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257BA4u;
    {
        const bool branch_taken_0x257ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BA4u;
        // 0x257ba8: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ba4) {
            ctx->pc = 0x257BB8u;
            goto label_257bb8;
        }
    }
    ctx->pc = 0x257BACu;
    // 0x257bac: 0x8c430b04  lw          $v1, 0xB04($v0)
    ctx->pc = 0x257bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2820)));
    // 0x257bb0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x257BB0u;
    {
        const bool branch_taken_0x257bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BB0u;
        // 0x257bb4: 0x8c440b08  lw          $a0, 0xB08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bb0) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257BB8u;
label_257bb8:
    // 0x257bb8: 0x8c430b0c  lw          $v1, 0xB0C($v0)
    ctx->pc = 0x257bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2828)));
    // 0x257bbc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x257BBCu;
    {
        const bool branch_taken_0x257bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BBCu;
        // 0x257bc0: 0x8c440b10  lw          $a0, 0xB10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bbc) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257BC4u;
label_257bc4:
    // 0x257bc4: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257bc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257bc8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257bcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257BCCu;
    {
        const bool branch_taken_0x257bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BCCu;
        // 0x257bd0: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bcc) {
            ctx->pc = 0x257BE0u;
            goto label_257be0;
        }
    }
    ctx->pc = 0x257BD4u;
    // 0x257bd4: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x257bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x257bd8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x257BD8u;
    {
        const bool branch_taken_0x257bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BD8u;
        // 0x257bdc: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bd8) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257BE0u;
label_257be0:
    // 0x257be0: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x257be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x257be4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x257BE4u;
    {
        const bool branch_taken_0x257be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BE4u;
        // 0x257be8: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257be4) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257BECu;
label_257bec:
    // 0x257bec: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257bf0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257bf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257BF4u;
    {
        const bool branch_taken_0x257bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BF4u;
        // 0x257bf8: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bf4) {
            ctx->pc = 0x257C08u;
            goto label_257c08;
        }
    }
    ctx->pc = 0x257BFCu;
    // 0x257bfc: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x257bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x257c00: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x257C00u;
    {
        const bool branch_taken_0x257c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C00u;
        // 0x257c04: 0x8c443728  lw          $a0, 0x3728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c00) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257C08u;
label_257c08:
    // 0x257c08: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x257c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x257c0c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x257C0Cu;
    {
        const bool branch_taken_0x257c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C0Cu;
        // 0x257c10: 0x8c443728  lw          $a0, 0x3728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c0c) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257C14u;
label_257c14:
    // 0x257c14: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257c14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257c18: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257c1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257C1Cu;
    {
        const bool branch_taken_0x257c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C1Cu;
        // 0x257c20: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c1c) {
            ctx->pc = 0x257C30u;
            goto label_257c30;
        }
    }
    ctx->pc = 0x257C24u;
    // 0x257c24: 0x8c431788  lw          $v1, 0x1788($v0)
    ctx->pc = 0x257c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6024)));
    // 0x257c28: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x257C28u;
    {
        const bool branch_taken_0x257c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C28u;
        // 0x257c2c: 0x8c44178c  lw          $a0, 0x178C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c28) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257C30u;
label_257c30:
    // 0x257c30: 0x8c431790  lw          $v1, 0x1790($v0)
    ctx->pc = 0x257c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6032)));
    // 0x257c34: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x257C34u;
    {
        const bool branch_taken_0x257c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C34u;
        // 0x257c38: 0x8c441794  lw          $a0, 0x1794($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c34) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257C3Cu;
label_257c3c:
    // 0x257c3c: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257c3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257c40: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257c44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257C44u;
    {
        const bool branch_taken_0x257c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C44u;
        // 0x257c48: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c44) {
            ctx->pc = 0x257C58u;
            goto label_257c58;
        }
    }
    ctx->pc = 0x257C4Cu;
    // 0x257c4c: 0x8c433adc  lw          $v1, 0x3ADC($v0)
    ctx->pc = 0x257c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15068)));
    // 0x257c50: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x257C50u;
    {
        const bool branch_taken_0x257c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C50u;
        // 0x257c54: 0x8c443ae0  lw          $a0, 0x3AE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c50) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257C58u;
label_257c58:
    // 0x257c58: 0x8c433ae4  lw          $v1, 0x3AE4($v0)
    ctx->pc = 0x257c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15076)));
    // 0x257c5c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x257C5Cu;
    {
        const bool branch_taken_0x257c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C5Cu;
        // 0x257c60: 0x8c443ae8  lw          $a0, 0x3AE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c5c) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257C64u;
label_257c64:
    // 0x257c64: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257c64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257c68: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257c6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257C6Cu;
    {
        const bool branch_taken_0x257c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C6Cu;
        // 0x257c70: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c6c) {
            ctx->pc = 0x257C80u;
            goto label_257c80;
        }
    }
    ctx->pc = 0x257C74u;
    // 0x257c74: 0x8c431788  lw          $v1, 0x1788($v0)
    ctx->pc = 0x257c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6024)));
    // 0x257c78: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x257C78u;
    {
        const bool branch_taken_0x257c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C78u;
        // 0x257c7c: 0x8c44178c  lw          $a0, 0x178C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c78) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257C80u;
label_257c80:
    // 0x257c80: 0x8c431790  lw          $v1, 0x1790($v0)
    ctx->pc = 0x257c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6032)));
    // 0x257c84: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x257C84u;
    {
        const bool branch_taken_0x257c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C84u;
        // 0x257c88: 0x8c441794  lw          $a0, 0x1794($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c84) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257C8Cu;
label_257c8c:
    // 0x257c8c: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257c8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257c90: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257c94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257C94u;
    {
        const bool branch_taken_0x257c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C94u;
        // 0x257c98: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c94) {
            ctx->pc = 0x257CA8u;
            goto label_257ca8;
        }
    }
    ctx->pc = 0x257C9Cu;
    // 0x257c9c: 0x8c430f34  lw          $v1, 0xF34($v0)
    ctx->pc = 0x257c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3892)));
    // 0x257ca0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x257CA0u;
    {
        const bool branch_taken_0x257ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CA0u;
        // 0x257ca4: 0x8c440f38  lw          $a0, 0xF38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ca0) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257CA8u;
label_257ca8:
    // 0x257ca8: 0x8c430f3c  lw          $v1, 0xF3C($v0)
    ctx->pc = 0x257ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3900)));
    // 0x257cac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x257CACu;
    {
        const bool branch_taken_0x257cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CACu;
        // 0x257cb0: 0x8c440f40  lw          $a0, 0xF40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257cac) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257CB4u;
label_257cb4:
    // 0x257cb4: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257cb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257cb8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257cbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257CBCu;
    {
        const bool branch_taken_0x257cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CBCu;
        // 0x257cc0: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257cbc) {
            ctx->pc = 0x257CD0u;
            goto label_257cd0;
        }
    }
    ctx->pc = 0x257CC4u;
    // 0x257cc4: 0x8c431d40  lw          $v1, 0x1D40($v0)
    ctx->pc = 0x257cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7488)));
    // 0x257cc8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x257CC8u;
    {
        const bool branch_taken_0x257cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CC8u;
        // 0x257ccc: 0x8c441d44  lw          $a0, 0x1D44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257cc8) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257CD0u;
label_257cd0:
    // 0x257cd0: 0x8c431d48  lw          $v1, 0x1D48($v0)
    ctx->pc = 0x257cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7496)));
    // 0x257cd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x257CD4u;
    {
        const bool branch_taken_0x257cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CD4u;
        // 0x257cd8: 0x8c441d4c  lw          $a0, 0x1D4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257cd4) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257CDCu;
label_257cdc:
    // 0x257cdc: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257cdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257ce0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257ce4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257CE4u;
    {
        const bool branch_taken_0x257ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CE4u;
        // 0x257ce8: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ce4) {
            ctx->pc = 0x257CF8u;
            goto label_257cf8;
        }
    }
    ctx->pc = 0x257CECu;
    // 0x257cec: 0x8c432e7c  lw          $v1, 0x2E7C($v0)
    ctx->pc = 0x257cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11900)));
    // 0x257cf0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x257CF0u;
    {
        const bool branch_taken_0x257cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CF0u;
        // 0x257cf4: 0x8c442e80  lw          $a0, 0x2E80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257cf0) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257CF8u;
label_257cf8:
    // 0x257cf8: 0x8c432e7c  lw          $v1, 0x2E7C($v0)
    ctx->pc = 0x257cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11900)));
    // 0x257cfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x257CFCu;
    {
        const bool branch_taken_0x257cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CFCu;
        // 0x257d00: 0x8c442e80  lw          $a0, 0x2E80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257cfc) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257D04u;
label_257d04:
    // 0x257d04: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257d04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257d08: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257d0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257D0Cu;
    {
        const bool branch_taken_0x257d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D0Cu;
        // 0x257d10: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d0c) {
            ctx->pc = 0x257D20u;
            goto label_257d20;
        }
    }
    ctx->pc = 0x257D14u;
    // 0x257d14: 0x8c431360  lw          $v1, 0x1360($v0)
    ctx->pc = 0x257d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4960)));
    // 0x257d18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x257D18u;
    {
        const bool branch_taken_0x257d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D18u;
        // 0x257d1c: 0x8c441364  lw          $a0, 0x1364($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d18) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257D20u;
label_257d20:
    // 0x257d20: 0x8c431368  lw          $v1, 0x1368($v0)
    ctx->pc = 0x257d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
    // 0x257d24: 0x8c44136c  lw          $a0, 0x136C($v0)
    ctx->pc = 0x257d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4972)));
label_257d28:
    // 0x257d28: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x257d28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257d2c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x257d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x257d30: 0x8e6206ec  lw          $v0, 0x6EC($s3)
    ctx->pc = 0x257d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
label_257d34:
    // 0x257d34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x257D34u;
    {
        const bool branch_taken_0x257d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257d34) {
            ctx->pc = 0x257D68u;
            goto label_257d68;
        }
    }
    ctx->pc = 0x257D3Cu;
    // 0x257d3c: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257d3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x257d40: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x257d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x257d44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257D44u;
    {
        const bool branch_taken_0x257d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D44u;
        // 0x257d48: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d44) {
            ctx->pc = 0x257D58u;
            goto label_257d58;
        }
    }
    ctx->pc = 0x257D4Cu;
    // 0x257d4c: 0x8c4307a4  lw          $v1, 0x7A4($v0)
    ctx->pc = 0x257d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1956)));
    // 0x257d50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x257D50u;
    {
        const bool branch_taken_0x257d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D50u;
        // 0x257d54: 0x8c4407a8  lw          $a0, 0x7A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d50) {
            ctx->pc = 0x257D60u;
            goto label_257d60;
        }
    }
    ctx->pc = 0x257D58u;
label_257d58:
    // 0x257d58: 0x8c4307ac  lw          $v1, 0x7AC($v0)
    ctx->pc = 0x257d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1964)));
    // 0x257d5c: 0x8c4407b0  lw          $a0, 0x7B0($v0)
    ctx->pc = 0x257d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1968)));
label_257d60:
    // 0x257d60: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x257d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257d64: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x257d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_257d68:
    // 0x257d68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x257d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x257d6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x257d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257d70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x257d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257d74: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x257d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257d78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x257d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257d7c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x257d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x257d80: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x257D80u;
    SET_GPR_U32(ctx, 31, 0x257D88u);
    ctx->pc = 0x257D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D80u;
    // 0x257d84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x257D80u, 0x257D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D88u;
label_257d88:
    // 0x257d88: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x257D88u;
    SET_GPR_U32(ctx, 31, 0x257D90u);
    ctx->pc = 0x257D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D88u;
    // 0x257d8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x257D88u, 0x257D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D90u;
label_257d90:
    // 0x257d90: 0x926302f6  lbu         $v1, 0x2F6($s3)
    ctx->pc = 0x257d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x257d94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x257d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257d98: 0xa26302f6  sb          $v1, 0x2F6($s3)
    ctx->pc = 0x257d98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 3));
label_257d9c:
    // 0x257d9c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x257D9Cu;
    SET_GPR_U32(ctx, 31, 0x257DA4u);
    ctx->pc = 0x257DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D9Cu;
    // 0x257da0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x257D9Cu, 0x257DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DA4u;
label_257da4:
    // 0x257da4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x257DA4u;
    {
        const bool branch_taken_0x257da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257da4) {
            ctx->pc = 0x257DD4u;
            goto label_257dd4;
        }
    }
    ctx->pc = 0x257DACu;
    // 0x257dac: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x257DACu;
    SET_GPR_U32(ctx, 31, 0x257DB4u);
    ctx->pc = 0x257DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DACu;
    // 0x257db0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x257DACu, 0x257DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DB4u;
label_257db4:
    // 0x257db4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257DB4u;
    {
        const bool branch_taken_0x257db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257db4) {
            ctx->pc = 0x257DCCu;
            goto label_257dcc;
        }
    }
    ctx->pc = 0x257DBCu;
    // 0x257dbc: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x257DBCu;
    SET_GPR_U32(ctx, 31, 0x257DC4u);
    ctx->pc = 0x257DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DBCu;
    // 0x257dc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x257DBCu, 0x257DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DC4u;
label_257dc4:
    // 0x257dc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x257DC4u;
    {
        const bool branch_taken_0x257dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257dc4) {
            ctx->pc = 0x257DD4u;
            goto label_257dd4;
        }
    }
    ctx->pc = 0x257DCCu;
label_257dcc:
    // 0x257dcc: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x257DCCu;
    SET_GPR_U32(ctx, 31, 0x257DD4u);
    ctx->pc = 0x257DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DCCu;
    // 0x257dd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x257DCCu, 0x257DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DD4u;
label_257dd4:
    // 0x257dd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x257dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x257dd8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x257dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x257ddc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x257ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257de0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x257DE0u;
    SET_GPR_U32(ctx, 31, 0x257DE8u);
    ctx->pc = 0x257DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DE0u;
    // 0x257de4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x257DE0u, 0x257DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DE8u;
label_257de8:
    // 0x257de8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x257de8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x257dec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x257DECu;
    SET_GPR_U32(ctx, 31, 0x257DF4u);
    ctx->pc = 0x257DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DECu;
    // 0x257df0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x257DECu, 0x257DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DF4u;
label_257df4:
    // 0x257df4: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x257df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
label_257df8:
    // 0x257df8: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x257df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x257dfc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257DFCu;
    {
        const bool branch_taken_0x257dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x257E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257DFCu;
        // 0x257e00: 0x2402027e  addiu       $v0, $zero, 0x27E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257dfc) {
            ctx->pc = 0x257E0Cu;
            goto label_257e0c;
        }
    }
    ctx->pc = 0x257E04u;
    // 0x257e04: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257E04u;
    {
        const bool branch_taken_0x257e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x257e04) {
            ctx->pc = 0x257E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257E04u;
            // 0x257e08: 0x966203ac  lhu         $v0, 0x3AC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257E18u;
            goto label_257e18;
        }
    }
    ctx->pc = 0x257E0Cu;
label_257e0c:
    // 0x257e0c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x257E0Cu;
    SET_GPR_U32(ctx, 31, 0x257E14u);
    ctx->pc = 0x257E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E0Cu;
    // 0x257e10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x257E0Cu, 0x257E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E14u;
label_257e14:
    // 0x257e14: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
label_257e18:
    // 0x257e18: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x257e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x257e1c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x257E1Cu;
    {
        const bool branch_taken_0x257e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257e1c) {
            ctx->pc = 0x257E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257E1Cu;
            // 0x257e20: 0x966203ac  lhu         $v0, 0x3AC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257E58u;
            goto label_257e58;
        }
    }
    ctx->pc = 0x257E24u;
    // 0x257e24: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x257e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x257e28: 0x2462fdb0  addiu       $v0, $v1, -0x250
    ctx->pc = 0x257e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966704));
    // 0x257e2c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x257e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x257e30: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x257E30u;
    {
        const bool branch_taken_0x257e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257e30) {
            ctx->pc = 0x257E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257E30u;
            // 0x257e34: 0x8e6216d0  lw          $v0, 0x16D0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257E48u;
            goto label_257e48;
        }
    }
    ctx->pc = 0x257E38u;
    // 0x257e38: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x257e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x257e3c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x257E3Cu;
    {
        const bool branch_taken_0x257e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x257e3c) {
            ctx->pc = 0x257E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257E3Cu;
            // 0x257e40: 0x966203ac  lhu         $v0, 0x3AC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257E58u;
            goto label_257e58;
        }
    }
    ctx->pc = 0x257E44u;
    // 0x257e44: 0x8e6216d0  lw          $v0, 0x16D0($s3)
    ctx->pc = 0x257e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
label_257e48:
    // 0x257e48: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x257e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x257e4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x257e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x257e50: 0xae6216d0  sw          $v0, 0x16D0($s3)
    ctx->pc = 0x257e50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5840), GPR_U32(ctx, 2));
    // 0x257e54: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x257e54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
label_257e58:
    // 0x257e58: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x257e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x257e5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257E5Cu;
    {
        const bool branch_taken_0x257e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E5Cu;
        // 0x257e60: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e5c) {
            ctx->pc = 0x257E70u;
            goto label_257e70;
        }
    }
    ctx->pc = 0x257E64u;
    // 0x257e64: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x257E64u;
    SET_GPR_U32(ctx, 31, 0x257E6Cu);
    ctx->pc = 0x257E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E64u;
    // 0x257e68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x257E64u, 0x257E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E6Cu;
label_257e6c:
    // 0x257e6c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x257e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_257e70:
    // 0x257e70: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x257e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257e74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x257e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e78: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x257e78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257e7c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x257e7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257e84: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x257e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x257e88: 0x3e00008  jr          $ra
    ctx->pc = 0x257E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E88u;
        // 0x257e8c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257E90u;
}
