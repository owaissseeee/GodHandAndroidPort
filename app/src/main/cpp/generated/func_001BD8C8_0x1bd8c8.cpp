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

// Function: func_001BD8C8
// Address: 0x1bd8c8 - 0x1bd9e0
void func_001BD8C8_0x1bd8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BD8C8_0x1bd8c8");
#endif

    switch (ctx->pc) {
        case 0x1bd948u: goto label_1bd948;
        case 0x1bd990u: goto label_1bd990;
        case 0x1bd9acu: goto label_1bd9ac;
        default: break;
    }

    ctx->pc = 0x1bd8c8u;

    // 0x1bd8c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bd8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bd8cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bd8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bd8d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bd8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bd8d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8d8: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1bd8d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
    // 0x1bd8dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD8DCu;
    {
        const bool branch_taken_0x1bd8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD8DCu;
        // 0x1bd8e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8dc) {
            ctx->pc = 0x1BD8F4u;
            goto label_1bd8f4;
        }
    }
    ctx->pc = 0x1BD8E4u;
    // 0x1bd8e4: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1BD8E4u;
    {
        const bool branch_taken_0x1bd8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd8e4) {
            ctx->pc = 0x1BD9A4u;
            goto label_1bd9a4;
        }
    }
    ctx->pc = 0x1BD8ECu;
    // 0x1bd8ec: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1BD8ECu;
    {
        const bool branch_taken_0x1bd8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD8ECu;
        // 0x1bd8f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8ec) {
            ctx->pc = 0x1BD9D0u;
            goto label_1bd9d0;
        }
    }
    ctx->pc = 0x1BD8F4u;
label_1bd8f4:
    // 0x1bd8f4: 0x92020774  lbu         $v0, 0x774($s0)
    ctx->pc = 0x1bd8f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1908)));
    // 0x1bd8f8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD8F8u;
    {
        const bool branch_taken_0x1bd8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8f8) {
            ctx->pc = 0x1BD8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD8F8u;
            // 0x1bd8fc: 0x8e020778  lw          $v0, 0x778($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1912)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD908u;
            goto label_1bd908;
        }
    }
    ctx->pc = 0x1BD900u;
    // 0x1bd900: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1BD900u;
    {
        const bool branch_taken_0x1bd900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD900u;
        // 0x1bd904: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd900) {
            ctx->pc = 0x1BD9C0u;
            goto label_1bd9c0;
        }
    }
    ctx->pc = 0x1BD908u;
label_1bd908:
    // 0x1bd908: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BD908u;
    {
        const bool branch_taken_0x1bd908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd908) {
            ctx->pc = 0x1BD90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD908u;
            // 0x1bd90c: 0xc6000770  lwc1        $f0, 0x770($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD950u;
            goto label_1bd950;
        }
    }
    ctx->pc = 0x1BD910u;
    // 0x1bd910: 0xc60d0770  lwc1        $f13, 0x770($s0)
    ctx->pc = 0x1bd910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd914: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x1bd914u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x1bd918: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1bd918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1bd91c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bd91cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bd920: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bd920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd924: 0x24e77b00  addiu       $a3, $a3, 0x7B00
    ctx->pc = 0x1bd924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31488));
    // 0x1bd928: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x1bd928u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x1bd92c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1bd92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1bd930: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bd930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bd934: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1bd934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bd938: 0x26040610  addiu       $a0, $s0, 0x610
    ctx->pc = 0x1bd938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1bd93c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd940: 0xc071ada  jal         func_1C6B68
    ctx->pc = 0x1BD940u;
    SET_GPR_U32(ctx, 31, 0x1BD948u);
    ctx->pc = 0x1BD944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD940u;
    // 0x1bd944: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B68u, 0x1BD940u, 0x1BD948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD948u;
label_1bd948:
    // 0x1bd948: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BD948u;
    {
        const bool branch_taken_0x1bd948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD948u;
        // 0x1bd94c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd948) {
            ctx->pc = 0x1BD994u;
            goto label_1bd994;
        }
    }
    ctx->pc = 0x1BD950u;
label_1bd950:
    // 0x1bd950: 0x26040610  addiu       $a0, $s0, 0x610
    ctx->pc = 0x1bd950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1bd954: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1bd954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1bd958: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bd958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bd95c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bd95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd960: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd964: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bd964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bd968: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bd968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd96c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1bd96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd970: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1bd970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1bd974: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1bd974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bd978: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1bd978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1bd97c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1bd97cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd980: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bd980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1bd984: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1bd984u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1bd988: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x1BD988u;
    SET_GPR_U32(ctx, 31, 0x1BD990u);
    ctx->pc = 0x1BD98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD988u;
    // 0x1bd98c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x1BD988u, 0x1BD990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD990u;
label_1bd990:
    // 0x1bd990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd994:
    // 0x1bd994: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bd994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd998: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1bd998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd99c: 0xa2020775  sb          $v0, 0x775($s0)
    ctx->pc = 0x1bd99cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1909), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd9a0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bd9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1bd9a4:
    // 0x1bd9a4: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x1BD9A4u;
    SET_GPR_U32(ctx, 31, 0x1BD9ACu);
    ctx->pc = 0x1BD9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD9A4u;
    // 0x1bd9a8: 0x26040610  addiu       $a0, $s0, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x1BD9A4u, 0x1BD9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD9ACu;
label_1bd9ac:
    // 0x1bd9ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD9ACu;
    {
        const bool branch_taken_0x1bd9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd9ac) {
            ctx->pc = 0x1BD9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD9ACu;
            // 0x1bd9b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD9D0u;
            goto label_1bd9d0;
        }
    }
    ctx->pc = 0x1BD9B4u;
    // 0x1bd9b4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bd9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd9b8: 0xa2000774  sb          $zero, 0x774($s0)
    ctx->pc = 0x1bd9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1908), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd9bc: 0xa2000775  sb          $zero, 0x775($s0)
    ctx->pc = 0x1bd9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1909), (uint8_t)GPR_U32(ctx, 0));
label_1bd9c0:
    // 0x1bd9c0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1bd9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd9c4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1bd9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd9c8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bd9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd9cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bd9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bd9d0:
    // 0x1bd9d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bd9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD9D4u;
        // 0x1bd9d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD9DCu;
    // 0x1bd9dc: 0x0  nop
    ctx->pc = 0x1bd9dcu;
    // NOP
    ctx->pc = 0x1bd9e0u;
}
