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

// Function: KillEventEmitter
// Address: 0x300900 - 0x3009f8
void KillEventEmitter_0x300900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KillEventEmitter_0x300900");
#endif

    switch (ctx->pc) {
        case 0x300950u: goto label_300950;
        case 0x3009bcu: goto label_3009bc;
        default: break;
    }

    ctx->pc = 0x300900u;

    // 0x300900: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x300900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x300904: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x300904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300908: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x300908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30090c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x30090cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x300910: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x300910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x300914: 0x24751960  addiu       $s5, $v1, 0x1960
    ctx->pc = 0x300914u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 6496));
    // 0x300918: 0x24561940  addiu       $s6, $v0, 0x1940
    ctx->pc = 0x300918u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
    // 0x30091c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x30091cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x300920: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x300920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x300924: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x300924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300928: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x300928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x30092c: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x30092cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x300930: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x300930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x300934: 0x2471b940  addiu       $s1, $v1, -0x46C0
    ctx->pc = 0x300934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949184));
    // 0x300938: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x300938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x30093c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30093cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x300944: 0x24541980  addiu       $s4, $v0, 0x1980
    ctx->pc = 0x300944u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x300948: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x300948u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x30094c: 0x241200d7  addiu       $s2, $zero, 0xD7
    ctx->pc = 0x30094cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
label_300950:
    // 0x300950: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x300950u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x300954: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x300954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x300958: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x300958u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30095c: 0x932006  srlv        $a0, $s3, $a0
    ctx->pc = 0x30095cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x300960: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x300960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x300964: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300968: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x30096c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x30096Cu;
    {
        const bool branch_taken_0x30096c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30096Cu;
        // 0x300970: 0xb51821  addu        $v1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30096c) {
            ctx->pc = 0x3009BCu;
            goto label_3009bc;
        }
    }
    ctx->pc = 0x300974u;
    // 0x300974: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300978: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x30097c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x30097Cu;
    {
        const bool branch_taken_0x30097c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30097c) {
            ctx->pc = 0x300980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30097Cu;
            // 0x300980: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3009C0u;
            goto label_3009c0;
        }
    }
    ctx->pc = 0x300984u;
    // 0x300984: 0xb41821  addu        $v1, $a1, $s4
    ctx->pc = 0x300984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x300988: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30098c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x30098cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300990: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x300990u;
    {
        const bool branch_taken_0x300990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300990) {
            ctx->pc = 0x300994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300990u;
            // 0x300994: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3009C0u;
            goto label_3009c0;
        }
    }
    ctx->pc = 0x300998u;
    // 0x300998: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x300998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x30099c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x30099cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3009a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3009A0u;
    {
        const bool branch_taken_0x3009a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3009a0) {
            ctx->pc = 0x3009A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3009A0u;
            // 0x3009a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3009C0u;
            goto label_3009c0;
        }
    }
    ctx->pc = 0x3009A8u;
    // 0x3009a8: 0x8622018c  lh          $v0, 0x18C($s1)
    ctx->pc = 0x3009a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x3009ac: 0x50520004  beql        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3009ACu;
    {
        const bool branch_taken_0x3009ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x3009ac) {
            ctx->pc = 0x3009B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3009ACu;
            // 0x3009b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3009C0u;
            goto label_3009c0;
        }
    }
    ctx->pc = 0x3009B4u;
    // 0x3009b4: 0xc0c0a46  jal         func_302918
    ctx->pc = 0x3009B4u;
    SET_GPR_U32(ctx, 31, 0x3009BCu);
    ctx->pc = 0x3009B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3009B4u;
    // 0x3009b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302918u, 0x3009B4u, 0x3009BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3009BCu;
label_3009bc:
    // 0x3009bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3009bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3009c0:
    // 0x3009c0: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x3009c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3009c4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3009C4u;
    {
        const bool branch_taken_0x3009c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3009C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009C4u;
        // 0x3009c8: 0x26310260  addiu       $s1, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3009c4) {
            ctx->pc = 0x300950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300950;
        }
    }
    ctx->pc = 0x3009CCu;
    // 0x3009cc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3009ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3009d0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3009d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3009d4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3009d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3009d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3009d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3009dc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3009dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3009e0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3009e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3009e4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3009e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3009e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3009e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3009ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3009ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3009F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009ECu;
        // 0x3009f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3009ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3009F4u;
    // 0x3009f4: 0x0  nop
    ctx->pc = 0x3009f4u;
    // NOP
    ctx->pc = 0x3009f8u;
}
