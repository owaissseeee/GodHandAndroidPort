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

// Function: func_00336BA8
// Address: 0x336ba8 - 0x336ce0
void func_00336BA8_0x336ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336BA8_0x336ba8");
#endif

    switch (ctx->pc) {
        case 0x336c08u: goto label_336c08;
        case 0x336c10u: goto label_336c10;
        case 0x336c20u: goto label_336c20;
        case 0x336c28u: goto label_336c28;
        case 0x336c34u: goto label_336c34;
        case 0x336c40u: goto label_336c40;
        case 0x336c7cu: goto label_336c7c;
        default: break;
    }

    ctx->pc = 0x336ba8u;

    // 0x336ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x336ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x336bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336bb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336bb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x336bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x336bb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x336bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336bbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x336bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x336bc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x336bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x336bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x336bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x336bc8: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x336bc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x336bcc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x336bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x336bd0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x336BD0u;
    {
        const bool branch_taken_0x336bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336BD0u;
        // 0x336bd4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336bd0) {
            ctx->pc = 0x336C00u;
            goto label_336c00;
        }
    }
    ctx->pc = 0x336BD8u;
    // 0x336bd8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x336bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x336bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336be0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336be4: 0x24845290  addiu       $a0, $a0, 0x5290
    ctx->pc = 0x336be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21136));
    // 0x336be8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x336be8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336bec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x336becu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336bf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x336bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336bf4: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x336BF4u;
    ctx->pc = 0x336BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336BF4u;
    // 0x336bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x336BF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336BFCu;
    // 0x336bfc: 0x0  nop
    ctx->pc = 0x336bfcu;
    // NOP
label_336c00:
    // 0x336c00: 0xc0ca7aa  jal         func_329EA8
    ctx->pc = 0x336C00u;
    SET_GPR_U32(ctx, 31, 0x336C08u);
    ctx->pc = 0x329EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EA8u, 0x336C00u, 0x336C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C08u;
label_336c08:
    // 0x336c08: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x336C08u;
    SET_GPR_U32(ctx, 31, 0x336C10u);
    ctx->pc = 0x336C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336C08u;
    // 0x336c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x336C08u, 0x336C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C10u;
label_336c10:
    // 0x336c10: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x336c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x336c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x336c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336c18: 0xc0d00fe  jal         func_3403F8
    ctx->pc = 0x336C18u;
    SET_GPR_U32(ctx, 31, 0x336C20u);
    ctx->pc = 0x336C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336C18u;
    // 0x336c1c: 0x24846e70  addiu       $a0, $a0, 0x6E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403F8u, 0x336C18u, 0x336C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C20u;
label_336c20:
    // 0x336c20: 0xc0d0120  jal         func_340480
    ctx->pc = 0x336C20u;
    SET_GPR_U32(ctx, 31, 0x336C28u);
    ctx->pc = 0x336C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336C20u;
    // 0x336c24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340480u, 0x336C20u, 0x336C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C28u;
label_336c28:
    // 0x336c28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x336c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x336c2c: 0xc0c9718  jal         func_325C60
    ctx->pc = 0x336C2Cu;
    SET_GPR_U32(ctx, 31, 0x336C34u);
    ctx->pc = 0x336C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336C2Cu;
    // 0x336c30: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C60u, 0x336C2Cu, 0x336C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C34u;
label_336c34:
    // 0x336c34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x336c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336c38: 0xc0d014e  jal         func_340538
    ctx->pc = 0x336C38u;
    SET_GPR_U32(ctx, 31, 0x336C40u);
    ctx->pc = 0x336C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336C38u;
    // 0x336c3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340538u, 0x336C38u, 0x336C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C40u;
label_336c40:
    // 0x336c40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x336c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336c44: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x336C44u;
    {
        const bool branch_taken_0x336c44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x336C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C44u;
        // 0x336c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c44) {
            ctx->pc = 0x336C70u;
            goto label_336c70;
        }
    }
    ctx->pc = 0x336C4Cu;
    // 0x336c4c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x336c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x336c50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336c54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336c58: 0x248452d0  addiu       $a0, $a0, 0x52D0
    ctx->pc = 0x336c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21200));
    // 0x336c5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x336c5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336c60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x336c60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336c64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x336c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336c68: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x336C68u;
    ctx->pc = 0x336C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336C68u;
    // 0x336c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x336C68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336C70u;
label_336c70:
    // 0x336c70: 0x8e2500ec  lw          $a1, 0xEC($s1)
    ctx->pc = 0x336c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x336c74: 0xc0d0248  jal         func_340920
    ctx->pc = 0x336C74u;
    SET_GPR_U32(ctx, 31, 0x336C7Cu);
    ctx->pc = 0x336C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336C74u;
    // 0x336c78: 0x8e2600f0  lw          $a2, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340920u, 0x336C74u, 0x336C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C7Cu;
label_336c7c:
    // 0x336c7c: 0xae3000e8  sw          $s0, 0xE8($s1)
    ctx->pc = 0x336c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 16));
    // 0x336c80: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x336c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x336c84: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x336c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x336c88: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x336c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x336c8c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x336c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x336c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336c94: 0x24426db0  addiu       $v0, $v0, 0x6DB0
    ctx->pc = 0x336c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28080));
    // 0x336c98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336c9c: 0x24636e38  addiu       $v1, $v1, 0x6E38
    ctx->pc = 0x336c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28216));
    // 0x336ca0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x336ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336ca4: 0x24846e20  addiu       $a0, $a0, 0x6E20
    ctx->pc = 0x336ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28192));
    // 0x336ca8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x336ca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336cac: 0x24a56e58  addiu       $a1, $a1, 0x6E58
    ctx->pc = 0x336cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28248));
    // 0x336cb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x336cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336cb4: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x336cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x336cb8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x336cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x336cbc: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x336cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x336cc0: 0x3c09003d  lui         $t1, 0x3D
    ctx->pc = 0x336cc0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)61 << 16));
    // 0x336cc4: 0xacc21424  sw          $v0, 0x1424($a2)
    ctx->pc = 0x336cc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3D1424u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D1424u, _value); } while (0);
    // 0x336cc8: 0xace39d4c  sw          $v1, -0x62B4($a3)
    ctx->pc = 0x336cc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9D4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9D4Cu, _value); } while (0);
    // 0x336ccc: 0xad049d50  sw          $a0, -0x62B0($t0)
    ctx->pc = 0x336cccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3E9D50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9D50u, _value); } while (0);
    // 0x336cd0: 0xad25f9ec  sw          $a1, -0x614($t1)
    ctx->pc = 0x336cd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3CF9ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3CF9ECu, _value); } while (0);
    // 0x336cd4: 0x80c971e  j           func_325C78
    ctx->pc = 0x336CD4u;
    ctx->pc = 0x336CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336CD4u;
    // 0x336cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C78u, 0x336CD4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336CDCu;
    // 0x336cdc: 0x0  nop
    ctx->pc = 0x336cdcu;
    // NOP
    ctx->pc = 0x336ce0u;
}
