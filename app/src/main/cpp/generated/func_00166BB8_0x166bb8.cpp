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

// Function: func_00166BB8
// Address: 0x166bb8 - 0x1672f0
void func_00166BB8_0x166bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00166BB8_0x166bb8");
#endif

    switch (ctx->pc) {
        case 0x166c64u: goto label_166c64;
        case 0x166cbcu: goto label_166cbc;
        case 0x166cccu: goto label_166ccc;
        case 0x166cdcu: goto label_166cdc;
        case 0x166cecu: goto label_166cec;
        case 0x166d40u: goto label_166d40;
        case 0x166d48u: goto label_166d48;
        case 0x166d88u: goto label_166d88;
        case 0x166d98u: goto label_166d98;
        case 0x166da8u: goto label_166da8;
        case 0x166decu: goto label_166dec;
        case 0x166df4u: goto label_166df4;
        case 0x166e34u: goto label_166e34;
        case 0x166e44u: goto label_166e44;
        case 0x166e54u: goto label_166e54;
        case 0x166ea8u: goto label_166ea8;
        case 0x166f0cu: goto label_166f0c;
        case 0x166f54u: goto label_166f54;
        case 0x166fb4u: goto label_166fb4;
        case 0x166fbcu: goto label_166fbc;
        case 0x167004u: goto label_167004;
        case 0x167064u: goto label_167064;
        case 0x1670c8u: goto label_1670c8;
        case 0x16713cu: goto label_16713c;
        case 0x16719cu: goto label_16719c;
        case 0x1671d8u: goto label_1671d8;
        case 0x167240u: goto label_167240;
        case 0x167280u: goto label_167280;
        case 0x1672c8u: goto label_1672c8;
        default: break;
    }

    ctx->pc = 0x166bb8u;

    // 0x166bb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166bbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x166bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x166bc0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x166bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x166bc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x166bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166bc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x166bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x166bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166bd0: 0x8223005a  lb          $v1, 0x5A($s1)
    ctx->pc = 0x166bd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x166bd4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x166bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x166bd8: 0x104001be  beqz        $v0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x166BD8u;
    {
        const bool branch_taken_0x166bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BD8u;
        // 0x166bdc: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166bd8) {
            ctx->pc = 0x1672D4u;
            goto label_1672d4;
        }
    }
    ctx->pc = 0x166BE0u;
    // 0x166be0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x166be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x166be4: 0x2442fae0  addiu       $v0, $v0, -0x520
    ctx->pc = 0x166be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
    // 0x166be8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166bec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x166becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166bf0: 0x800008  jr          $a0
    ctx->pc = 0x166BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166BF8u: goto label_166bf8;
            case 0x167164u: goto label_167164;
            case 0x1671E4u: goto label_1671e4;
            case 0x1672D4u: goto label_1672d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166BF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x166BF8u;
label_166bf8:
    // 0x166bf8: 0x82230130  lb          $v1, 0x130($s1)
    ctx->pc = 0x166bf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x166bfc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x166bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x166c00: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x166C00u;
    {
        const bool branch_taken_0x166c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C00u;
        // 0x166c04: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c00) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166C08u;
    // 0x166c08: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x166c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x166c0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x166c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x166c10: 0x2442fb00  addiu       $v0, $v0, -0x500
    ctx->pc = 0x166c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x166c14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166c18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x166c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166c1c: 0x800008  jr          $a0
    ctx->pc = 0x166C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166C24u: goto label_166c24;
            case 0x166C70u: goto label_166c70;
            case 0x166CF4u: goto label_166cf4;
            case 0x166E5Cu: goto label_166e5c;
            case 0x166ECCu: goto label_166ecc;
            case 0x166F14u: goto label_166f14;
            case 0x166F74u: goto label_166f74;
            case 0x166FC4u: goto label_166fc4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166C1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x166C24u;
label_166c24:
    // 0x166c24: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x166c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x166c28: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x166c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x166c2c: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x166c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x166c30: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x166c30u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x166c34: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x166c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x166c38: 0x104000f4  beqz        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x166C38u;
    {
        const bool branch_taken_0x166c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C38u;
        // 0x166c3c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c38) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166C40u;
    // 0x166c40: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x166c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x166c44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c48: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x166c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x166c4c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x166c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x166c50: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x166c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166c54: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166c54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166c58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x166c58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c5c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x166C5Cu;
    SET_GPR_U32(ctx, 31, 0x166C64u);
    ctx->pc = 0x166C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166C5Cu;
    // 0x166c60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x166C5Cu, 0x166C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166C64u;
label_166c64:
    // 0x166c64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166c68: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x166C68u;
    {
        const bool branch_taken_0x166c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C68u;
        // 0x166c6c: 0xa223005a  sb          $v1, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c68) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166C70u;
label_166c70:
    // 0x166c70: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x166c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x166c74: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x166c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x166c78: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x166c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x166c7c: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x166c7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x166c80: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x166c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x166c84: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x166c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x166c88: 0xdc8201b0  ld          $v0, 0x1B0($a0)
    ctx->pc = 0x166c88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x166c8c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x166c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x166c90: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x166C90u;
    {
        const bool branch_taken_0x166c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C90u;
        // 0x166c94: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c90) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166C98u;
    // 0x166c98: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x166c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x166c9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ca0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x166ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x166ca4: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x166ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x166ca8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x166ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166cac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166cb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x166cb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166cb4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x166CB4u;
    SET_GPR_U32(ctx, 31, 0x166CBCu);
    ctx->pc = 0x166CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166CB4u;
    // 0x166cb8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x166CB4u, 0x166CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CBCu;
label_166cbc:
    // 0x166cbc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x166cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x166cc0: 0x24709b70  addiu       $s0, $v1, -0x6490
    ctx->pc = 0x166cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x166cc4: 0xc07f1c2  jal         func_1FC708
    ctx->pc = 0x166CC4u;
    SET_GPR_U32(ctx, 31, 0x166CCCu);
    ctx->pc = 0x166CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166CC4u;
    // 0x166cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC708u, 0x166CC4u, 0x166CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CCCu;
label_166ccc:
    // 0x166ccc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x166CCCu;
    {
        const bool branch_taken_0x166ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166ccc) {
            ctx->pc = 0x166CE4u;
            goto label_166ce4;
        }
    }
    ctx->pc = 0x166CD4u;
    // 0x166cd4: 0xc07f1b2  jal         func_1FC6C8
    ctx->pc = 0x166CD4u;
    SET_GPR_U32(ctx, 31, 0x166CDCu);
    ctx->pc = 0x166CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166CD4u;
    // 0x166cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC6C8u, 0x166CD4u, 0x166CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CDCu;
label_166cdc:
    // 0x166cdc: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x166CDCu;
    {
        const bool branch_taken_0x166cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166CDCu;
        // 0x166ce0: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166cdc) {
            ctx->pc = 0x167010u;
            goto label_167010;
        }
    }
    ctx->pc = 0x166CE4u;
label_166ce4:
    // 0x166ce4: 0xc07f1ba  jal         func_1FC6E8
    ctx->pc = 0x166CE4u;
    SET_GPR_U32(ctx, 31, 0x166CECu);
    ctx->pc = 0x166CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166CE4u;
    // 0x166ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC6E8u, 0x166CE4u, 0x166CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CECu;
label_166cec:
    // 0x166cec: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x166CECu;
    {
        const bool branch_taken_0x166cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166CECu;
        // 0x166cf0: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166cec) {
            ctx->pc = 0x167010u;
            goto label_167010;
        }
    }
    ctx->pc = 0x166CF4u;
label_166cf4:
    // 0x166cf4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x166cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x166cf8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x166cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x166cfc: 0x52df8  dsll        $a1, $a1, 23
    ctx->pc = 0x166cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 23);
    // 0x166d00: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x166d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x166d04: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x166d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x166d08: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x166d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x166d0c: 0xdc8201b0  ld          $v0, 0x1B0($a0)
    ctx->pc = 0x166d0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x166d10: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x166d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x166d14: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x166D14u;
    {
        const bool branch_taken_0x166d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D14u;
        // 0x166d18: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d14) {
            ctx->pc = 0x166DA8u;
            goto label_166da8;
        }
    }
    ctx->pc = 0x166D1Cu;
    // 0x166d1c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x166d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x166d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d24: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x166d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x166d28: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x166d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x166d2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x166d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166d30: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166d34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x166d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d38: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x166D38u;
    SET_GPR_U32(ctx, 31, 0x166D40u);
    ctx->pc = 0x166D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D38u;
    // 0x166d3c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x166D38u, 0x166D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D40u;
label_166d40:
    // 0x166d40: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x166D40u;
    SET_GPR_U32(ctx, 31, 0x166D48u);
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x166D40u, 0x166D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D48u;
label_166d48:
    // 0x166d48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x166d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166d50: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x166D50u;
    {
        const bool branch_taken_0x166d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D50u;
        // 0x166d54: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d50) {
            ctx->pc = 0x166D80u;
            goto label_166d80;
        }
    }
    ctx->pc = 0x166D58u;
    // 0x166d58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x166D58u;
    {
        const bool branch_taken_0x166d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D58u;
        // 0x166d5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d58) {
            ctx->pc = 0x166D70u;
            goto label_166d70;
        }
    }
    ctx->pc = 0x166D60u;
    // 0x166d60: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x166D60u;
    {
        const bool branch_taken_0x166d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D60u;
        // 0x166d64: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d60) {
            ctx->pc = 0x166D90u;
            goto label_166d90;
        }
    }
    ctx->pc = 0x166D68u;
    // 0x166d68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x166D68u;
    {
        const bool branch_taken_0x166d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d68) {
            ctx->pc = 0x166DACu;
            goto label_166dac;
        }
    }
    ctx->pc = 0x166D70u;
label_166d70:
    // 0x166d70: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x166D70u;
    {
        const bool branch_taken_0x166d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D70u;
        // 0x166d74: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d70) {
            ctx->pc = 0x166DA0u;
            goto label_166da0;
        }
    }
    ctx->pc = 0x166D78u;
    // 0x166d78: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x166D78u;
    {
        const bool branch_taken_0x166d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d78) {
            ctx->pc = 0x166DACu;
            goto label_166dac;
        }
    }
    ctx->pc = 0x166D80u;
label_166d80:
    // 0x166d80: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x166D80u;
    SET_GPR_U32(ctx, 31, 0x166D88u);
    ctx->pc = 0x166D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D80u;
    // 0x166d84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x166D80u, 0x166D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D88u;
label_166d88:
    // 0x166d88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x166D88u;
    {
        const bool branch_taken_0x166d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D88u;
        // 0x166d8c: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d88) {
            ctx->pc = 0x166DACu;
            goto label_166dac;
        }
    }
    ctx->pc = 0x166D90u;
label_166d90:
    // 0x166d90: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x166D90u;
    SET_GPR_U32(ctx, 31, 0x166D98u);
    ctx->pc = 0x166D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D90u;
    // 0x166d94: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x166D90u, 0x166D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D98u;
label_166d98:
    // 0x166d98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x166D98u;
    {
        const bool branch_taken_0x166d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D98u;
        // 0x166d9c: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d98) {
            ctx->pc = 0x166DACu;
            goto label_166dac;
        }
    }
    ctx->pc = 0x166DA0u;
label_166da0:
    // 0x166da0: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x166DA0u;
    SET_GPR_U32(ctx, 31, 0x166DA8u);
    ctx->pc = 0x166DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166DA0u;
    // 0x166da4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x166DA0u, 0x166DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166DA8u;
label_166da8:
    // 0x166da8: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x166da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_166dac:
    // 0x166dac: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x166dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x166db0: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x166db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x166db4: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x166db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x166db8: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x166db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x166dbc: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x166dbcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x166dc0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x166dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x166dc4: 0x10600091  beqz        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x166DC4u;
    {
        const bool branch_taken_0x166dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DC4u;
        // 0x166dc8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166dc4) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166DCCu;
    // 0x166dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166dd0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x166dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x166dd4: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x166dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x166dd8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x166dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166ddc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166de0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x166de0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166de4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x166DE4u;
    SET_GPR_U32(ctx, 31, 0x166DECu);
    ctx->pc = 0x166DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166DE4u;
    // 0x166de8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x166DE4u, 0x166DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166DECu;
label_166dec:
    // 0x166dec: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x166DECu;
    SET_GPR_U32(ctx, 31, 0x166DF4u);
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x166DECu, 0x166DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166DF4u;
label_166df4:
    // 0x166df4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x166df4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166dfc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x166DFCu;
    {
        const bool branch_taken_0x166dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DFCu;
        // 0x166e00: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166dfc) {
            ctx->pc = 0x166E2Cu;
            goto label_166e2c;
        }
    }
    ctx->pc = 0x166E04u;
    // 0x166e04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x166E04u;
    {
        const bool branch_taken_0x166e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E04u;
        // 0x166e08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e04) {
            ctx->pc = 0x166E1Cu;
            goto label_166e1c;
        }
    }
    ctx->pc = 0x166E0Cu;
    // 0x166e0c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x166E0Cu;
    {
        const bool branch_taken_0x166e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E0Cu;
        // 0x166e10: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e0c) {
            ctx->pc = 0x166E3Cu;
            goto label_166e3c;
        }
    }
    ctx->pc = 0x166E14u;
    // 0x166e14: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x166E14u;
    {
        const bool branch_taken_0x166e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e14) {
            ctx->pc = 0x167010u;
            goto label_167010;
        }
    }
    ctx->pc = 0x166E1Cu;
label_166e1c:
    // 0x166e1c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x166E1Cu;
    {
        const bool branch_taken_0x166e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E1Cu;
        // 0x166e20: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e1c) {
            ctx->pc = 0x166E4Cu;
            goto label_166e4c;
        }
    }
    ctx->pc = 0x166E24u;
    // 0x166e24: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x166E24u;
    {
        const bool branch_taken_0x166e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e24) {
            ctx->pc = 0x167010u;
            goto label_167010;
        }
    }
    ctx->pc = 0x166E2Cu;
label_166e2c:
    // 0x166e2c: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x166E2Cu;
    SET_GPR_U32(ctx, 31, 0x166E34u);
    ctx->pc = 0x166E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E2Cu;
    // 0x166e30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x166E2Cu, 0x166E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E34u;
label_166e34:
    // 0x166e34: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x166E34u;
    {
        const bool branch_taken_0x166e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E34u;
        // 0x166e38: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e34) {
            ctx->pc = 0x167010u;
            goto label_167010;
        }
    }
    ctx->pc = 0x166E3Cu;
label_166e3c:
    // 0x166e3c: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x166E3Cu;
    SET_GPR_U32(ctx, 31, 0x166E44u);
    ctx->pc = 0x166E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E3Cu;
    // 0x166e40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x166E3Cu, 0x166E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E44u;
label_166e44:
    // 0x166e44: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x166E44u;
    {
        const bool branch_taken_0x166e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E44u;
        // 0x166e48: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e44) {
            ctx->pc = 0x167010u;
            goto label_167010;
        }
    }
    ctx->pc = 0x166E4Cu;
label_166e4c:
    // 0x166e4c: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x166E4Cu;
    SET_GPR_U32(ctx, 31, 0x166E54u);
    ctx->pc = 0x166E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E4Cu;
    // 0x166e50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x166E4Cu, 0x166E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E54u;
label_166e54:
    // 0x166e54: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x166E54u;
    {
        const bool branch_taken_0x166e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E54u;
        // 0x166e58: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e54) {
            ctx->pc = 0x167010u;
            goto label_167010;
        }
    }
    ctx->pc = 0x166E5Cu;
label_166e5c:
    // 0x166e5c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x166e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x166e60: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x166e60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x166e64: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x166e64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x166e68: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x166e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x166e6c: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x166e6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x166e70: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x166e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x166e74: 0xdc8201b0  ld          $v0, 0x1B0($a0)
    ctx->pc = 0x166e74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x166e78: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x166e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x166e7c: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x166E7Cu;
    {
        const bool branch_taken_0x166e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E7Cu;
        // 0x166e80: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e7c) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166E84u;
    // 0x166e84: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x166e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x166e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e8c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x166e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x166e90: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x166e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x166e94: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x166e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166e98: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166e9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x166e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ea0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x166EA0u;
    SET_GPR_U32(ctx, 31, 0x166EA8u);
    ctx->pc = 0x166EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166EA0u;
    // 0x166ea4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x166EA0u, 0x166EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166EA8u;
label_166ea8:
    // 0x166ea8: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x166ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x166eac: 0x24638140  addiu       $v1, $v1, -0x7EC0
    ctx->pc = 0x166eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934848));
    // 0x166eb0: 0x906204b8  lbu         $v0, 0x4B8($v1)
    ctx->pc = 0x166eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5E85F8u));
    // 0x166eb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166EB4u;
    {
        const bool branch_taken_0x166eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EB4u;
        // 0x166eb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166eb4) {
            ctx->pc = 0x166EC4u;
            goto label_166ec4;
        }
    }
    ctx->pc = 0x166EBCu;
    // 0x166ebc: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x166EBCu;
    {
        const bool branch_taken_0x166ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EBCu;
        // 0x166ec0: 0xa06004b8  sb          $zero, 0x4B8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1208), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ebc) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166EC4u;
label_166ec4:
    // 0x166ec4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x166EC4u;
    {
        const bool branch_taken_0x166ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EC4u;
        // 0x166ec8: 0xa06204b8  sb          $v0, 0x4B8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1208), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ec4) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166ECCu;
label_166ecc:
    // 0x166ecc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x166eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x166ed0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x166ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x166ed4: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x166ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x166ed8: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x166ed8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x166edc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x166edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x166ee0: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x166EE0u;
    {
        const bool branch_taken_0x166ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EE0u;
        // 0x166ee4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ee0) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166EE8u;
    // 0x166ee8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x166ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x166eec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ef0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x166ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x166ef4: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x166ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x166ef8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x166ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166efc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166f00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x166f00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f04: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x166F04u;
    SET_GPR_U32(ctx, 31, 0x166F0Cu);
    ctx->pc = 0x166F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F04u;
    // 0x166f08: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x166F04u, 0x166F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F0Cu;
label_166f0c:
    // 0x166f0c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x166F0Cu;
    {
        const bool branch_taken_0x166f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F0Cu;
        // 0x166f10: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f0c) {
            ctx->pc = 0x167008u;
            goto label_167008;
        }
    }
    ctx->pc = 0x166F14u;
label_166f14:
    // 0x166f14: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x166f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x166f18: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x166f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x166f1c: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x166f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x166f20: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x166f20u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x166f24: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x166f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x166f28: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x166F28u;
    {
        const bool branch_taken_0x166f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F28u;
        // 0x166f2c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f28) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166F30u;
    // 0x166f30: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x166f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x166f34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f38: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x166f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x166f3c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x166f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x166f40: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x166f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166f44: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166f44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166f48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x166f48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f4c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x166F4Cu;
    SET_GPR_U32(ctx, 31, 0x166F54u);
    ctx->pc = 0x166F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F4Cu;
    // 0x166f50: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x166F4Cu, 0x166F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F54u;
label_166f54:
    // 0x166f54: 0x8e2500c8  lw          $a1, 0xC8($s1)
    ctx->pc = 0x166f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x166f58: 0x24022008  addiu       $v0, $zero, 0x2008
    ctx->pc = 0x166f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
    // 0x166f5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166f60: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x166f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x166f64: 0xa4a20090  sh          $v0, 0x90($a1)
    ctx->pc = 0x166f64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x166f68: 0xa2230131  sb          $v1, 0x131($s1)
    ctx->pc = 0x166f68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 305), (uint8_t)GPR_U32(ctx, 3));
    // 0x166f6c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x166F6Cu;
    {
        const bool branch_taken_0x166f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F6Cu;
        // 0x166f70: 0xa224005a  sb          $a0, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f6c) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166F74u;
label_166f74:
    // 0x166f74: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x166f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x166f78: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x166f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x166f7c: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x166f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x166f80: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x166f80u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x166f84: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x166f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x166f88: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x166F88u;
    {
        const bool branch_taken_0x166f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F88u;
        // 0x166f8c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f88) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166F90u;
    // 0x166f90: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x166f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x166f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f98: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x166f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x166f9c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x166f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x166fa0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x166fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166fa4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166fa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x166fa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166fac: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x166FACu;
    SET_GPR_U32(ctx, 31, 0x166FB4u);
    ctx->pc = 0x166FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FACu;
    // 0x166fb0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x166FACu, 0x166FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FB4u;
label_166fb4:
    // 0x166fb4: 0xc059cbc  jal         func_1672F0
    ctx->pc = 0x166FB4u;
    SET_GPR_U32(ctx, 31, 0x166FBCu);
    ctx->pc = 0x166FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FB4u;
    // 0x166fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1672F0u, 0x166FB4u, 0x166FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FBCu;
label_166fbc:
    // 0x166fbc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x166FBCu;
    {
        const bool branch_taken_0x166fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FBCu;
        // 0x166fc0: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166fbc) {
            ctx->pc = 0x167010u;
            goto label_167010;
        }
    }
    ctx->pc = 0x166FC4u;
label_166fc4:
    // 0x166fc4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x166fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x166fc8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x166fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x166fcc: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x166fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x166fd0: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x166fd0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x166fd4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x166fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x166fd8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x166FD8u;
    {
        const bool branch_taken_0x166fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FD8u;
        // 0x166fdc: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166fd8) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166FE0u;
    // 0x166fe0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x166fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x166fe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166fe8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x166fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x166fec: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x166fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x166ff0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x166ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166ff4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166ff8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x166ff8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ffc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x166FFCu;
    SET_GPR_U32(ctx, 31, 0x167004u);
    ctx->pc = 0x167000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FFCu;
    // 0x167000: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x166FFCu, 0x167004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167004u;
label_167004:
    // 0x167004: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x167004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_167008:
    // 0x167008: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x167008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
label_16700c:
    // 0x16700c: 0x264474a0  addiu       $a0, $s2, 0x74A0
    ctx->pc = 0x16700cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_167010:
    // 0x167010: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x167010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x167014: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x167014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x167018: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x167018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x16701c: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x16701cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x167020: 0xdc8201b0  ld          $v0, 0x1B0($a0)
    ctx->pc = 0x167020u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x167024: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x167024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x167028: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x167028u;
    {
        const bool branch_taken_0x167028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167028u;
        // 0x16702c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167028) {
            ctx->pc = 0x167070u;
            goto label_167070;
        }
    }
    ctx->pc = 0x167030u;
    // 0x167030: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x167030u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x167034: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x167034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x167038: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x167038u;
    {
        const bool branch_taken_0x167038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167038u;
        // 0x16703c: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167038) {
            ctx->pc = 0x167074u;
            goto label_167074;
        }
    }
    ctx->pc = 0x167040u;
    // 0x167040: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x167040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x167044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167048: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16704c: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16704cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x167050: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167054: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167058: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16705c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16705Cu;
    SET_GPR_U32(ctx, 31, 0x167064u);
    ctx->pc = 0x167060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16705Cu;
    // 0x167060: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16705Cu, 0x167064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167064u;
label_167064:
    // 0x167064: 0x92230130  lbu         $v1, 0x130($s1)
    ctx->pc = 0x167064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x167068: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x167068u;
    {
        const bool branch_taken_0x167068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167068u;
        // 0x16706c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167068) {
            ctx->pc = 0x1670D0u;
            goto label_1670d0;
        }
    }
    ctx->pc = 0x167070u;
label_167070:
    // 0x167070: 0x264474a0  addiu       $a0, $s2, 0x74A0
    ctx->pc = 0x167070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_167074:
    // 0x167074: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x167074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x167078: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x167078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x16707c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x16707cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x167080: 0x31ab8  dsll        $v1, $v1, 10
    ctx->pc = 0x167080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 10);
    // 0x167084: 0xdc8201b0  ld          $v0, 0x1B0($a0)
    ctx->pc = 0x167084u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x167088: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x167088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16708c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16708Cu;
    {
        const bool branch_taken_0x16708c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16708Cu;
        // 0x167090: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16708c) {
            ctx->pc = 0x1670D4u;
            goto label_1670d4;
        }
    }
    ctx->pc = 0x167094u;
    // 0x167094: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x167094u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x167098: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x167098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16709c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x16709Cu;
    {
        const bool branch_taken_0x16709c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16709c) {
            ctx->pc = 0x1670A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16709Cu;
            // 0x1670a0: 0x82220130  lb          $v0, 0x130($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1670D8u;
            goto label_1670d8;
        }
    }
    ctx->pc = 0x1670A4u;
    // 0x1670a4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1670a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1670a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1670a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670ac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1670acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1670b0: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1670b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1670b4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1670b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1670b8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1670b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1670bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1670bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670c0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1670C0u;
    SET_GPR_U32(ctx, 31, 0x1670C8u);
    ctx->pc = 0x1670C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670C0u;
    // 0x1670c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1670C0u, 0x1670C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670C8u;
label_1670c8:
    // 0x1670c8: 0x92230130  lbu         $v1, 0x130($s1)
    ctx->pc = 0x1670c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1670cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1670ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1670d0:
    // 0x1670d0: 0xa2230130  sb          $v1, 0x130($s1)
    ctx->pc = 0x1670d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 304), (uint8_t)GPR_U32(ctx, 3));
label_1670d4:
    // 0x1670d4: 0x82220130  lb          $v0, 0x130($s1)
    ctx->pc = 0x1670d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 304)));
label_1670d8:
    // 0x1670d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1670D8u;
    {
        const bool branch_taken_0x1670d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1670DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670D8u;
        // 0x1670dc: 0x92240130  lbu         $a0, 0x130($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670d8) {
            ctx->pc = 0x1670F4u;
            goto label_1670f4;
        }
    }
    ctx->pc = 0x1670E0u;
    // 0x1670e0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1670e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1670e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1670E4u;
    {
        const bool branch_taken_0x1670e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670E4u;
        // 0x1670e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670e4) {
            ctx->pc = 0x1670F8u;
            goto label_1670f8;
        }
    }
    ctx->pc = 0x1670ECu;
    // 0x1670ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1670ECu;
    {
        const bool branch_taken_0x1670ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670ECu;
        // 0x1670f0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670ec) {
            ctx->pc = 0x1670F8u;
            goto label_1670f8;
        }
    }
    ctx->pc = 0x1670F4u;
label_1670f4:
    // 0x1670f4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1670f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1670f8:
    // 0x1670f8: 0xa2230130  sb          $v1, 0x130($s1)
    ctx->pc = 0x1670f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 304), (uint8_t)GPR_U32(ctx, 3));
    // 0x1670fc: 0x265074a0  addiu       $s0, $s2, 0x74A0
    ctx->pc = 0x1670fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
    // 0x167100: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x167100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x167104: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x167104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x167108: 0xde0301a0  ld          $v1, 0x1A0($s0)
    ctx->pc = 0x167108u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x16710c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x16710cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x167110: 0x5464000d  bnel        $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x167110u;
    {
        const bool branch_taken_0x167110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x167110) {
            ctx->pc = 0x167114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167110u;
            // 0x167114: 0xde0201a0  ld          $v0, 0x1A0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167148u;
            goto label_167148;
        }
    }
    ctx->pc = 0x167118u;
    // 0x167118: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x167118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16711c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16711cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167120: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167124: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x167124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x167128: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16712c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16712cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167130: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167130u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167134: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167134u;
    SET_GPR_U32(ctx, 31, 0x16713Cu);
    ctx->pc = 0x167138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167134u;
    // 0x167138: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167134u, 0x16713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16713Cu;
label_16713c:
    // 0x16713c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16713cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x167140: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x167140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x167144: 0xde0201a0  ld          $v0, 0x1A0($s0)
    ctx->pc = 0x167144u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 416)));
label_167148:
    // 0x167148: 0x3c031020  lui         $v1, 0x1020
    ctx->pc = 0x167148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4128 << 16));
    // 0x16714c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x16714cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x167150: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x167150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x167154: 0x14440060  bne         $v0, $a0, . + 4 + (0x60 << 2)
    ctx->pc = 0x167154u;
    {
        const bool branch_taken_0x167154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x167158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167154u;
        // 0x167158: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167154) {
            ctx->pc = 0x1672D8u;
            goto label_1672d8;
        }
    }
    ctx->pc = 0x16715Cu;
    // 0x16715c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16715Cu;
    {
        const bool branch_taken_0x16715c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16715Cu;
        // 0x167160: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16715c) {
            ctx->pc = 0x1671B8u;
            goto label_1671b8;
        }
    }
    ctx->pc = 0x167164u;
label_167164:
    // 0x167164: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x167164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x167168: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x167168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x16716c: 0xdc637640  ld          $v1, 0x7640($v1)
    ctx->pc = 0x16716cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x167170: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x167170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x167174: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x167174u;
    {
        const bool branch_taken_0x167174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167174u;
        // 0x167178: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167174) {
            ctx->pc = 0x1671A8u;
            goto label_1671a8;
        }
    }
    ctx->pc = 0x16717Cu;
    // 0x16717c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16717cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167180: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167184: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x167184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x167188: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16718c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16718cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167190: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167190u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167194: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167194u;
    SET_GPR_U32(ctx, 31, 0x16719Cu);
    ctx->pc = 0x167198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167194u;
    // 0x167198: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167194u, 0x16719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16719Cu;
label_16719c:
    // 0x16719c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1671a0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1671A0u;
    {
        const bool branch_taken_0x1671a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1671A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671A0u;
        // 0x1671a4: 0xa223005a  sb          $v1, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671a0) {
            ctx->pc = 0x1672D4u;
            goto label_1672d4;
        }
    }
    ctx->pc = 0x1671A8u;
label_1671a8:
    // 0x1671a8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1671a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1671ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1671acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1671b0: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1671B0u;
    {
        const bool branch_taken_0x1671b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1671B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671B0u;
        // 0x1671b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671b0) {
            ctx->pc = 0x1672D8u;
            goto label_1672d8;
        }
    }
    ctx->pc = 0x1671B8u;
label_1671b8:
    // 0x1671b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1671b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671bc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1671bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1671c0: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1671c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1671c4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1671c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1671c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1671c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1671cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1671ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671d0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1671D0u;
    SET_GPR_U32(ctx, 31, 0x1671D8u);
    ctx->pc = 0x1671D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1671D0u;
    // 0x1671d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1671D0u, 0x1671D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1671D8u;
label_1671d8:
    // 0x1671d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1671d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1671dc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1671DCu;
    {
        const bool branch_taken_0x1671dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1671E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671DCu;
        // 0x1671e0: 0xae230060  sw          $v1, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671dc) {
            ctx->pc = 0x1672D4u;
            goto label_1672d4;
        }
    }
    ctx->pc = 0x1671E4u;
label_1671e4:
    // 0x1671e4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1671e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1671e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1671e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1671ec: 0x244474a0  addiu       $a0, $v0, 0x74A0
    ctx->pc = 0x1671ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1671f0: 0xdc8401a0  ld          $a0, 0x1A0($a0)
    ctx->pc = 0x1671f0u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x747640u));
    // 0x1671f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1671f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1671f8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1671F8u;
    {
        const bool branch_taken_0x1671f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1671FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671F8u;
        // 0x1671fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671f8) {
            ctx->pc = 0x16724Cu;
            goto label_16724c;
        }
    }
    ctx->pc = 0x167200u;
    // 0x167200: 0x82230131  lb          $v1, 0x131($s1)
    ctx->pc = 0x167200u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 305)));
    // 0x167204: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x167204u;
    {
        const bool branch_taken_0x167204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167204u;
        // 0x167208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167204) {
            ctx->pc = 0x16721Cu;
            goto label_16721c;
        }
    }
    ctx->pc = 0x16720Cu;
    // 0x16720c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16720Cu;
    {
        const bool branch_taken_0x16720c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16720Cu;
        // 0x167210: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16720c) {
            ctx->pc = 0x16725Cu;
            goto label_16725c;
        }
    }
    ctx->pc = 0x167214u;
    // 0x167214: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x167214u;
    {
        const bool branch_taken_0x167214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167214) {
            ctx->pc = 0x167288u;
            goto label_167288;
        }
    }
    ctx->pc = 0x16721Cu;
label_16721c:
    // 0x16721c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16721cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x167220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167224: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167228: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x167228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x16722c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16722cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167230: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167234: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167234u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167238: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167238u;
    SET_GPR_U32(ctx, 31, 0x167240u);
    ctx->pc = 0x16723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167238u;
    // 0x16723c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167238u, 0x167240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167240u;
label_167240:
    // 0x167240: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x167240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x167244: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x167244u;
    {
        const bool branch_taken_0x167244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167244u;
        // 0x167248: 0xae230060  sw          $v1, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167244) {
            ctx->pc = 0x167284u;
            goto label_167284;
        }
    }
    ctx->pc = 0x16724Cu;
label_16724c:
    // 0x16724c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x16724cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x167250: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x167250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x167254: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x167254u;
    {
        const bool branch_taken_0x167254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167254u;
        // 0x167258: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167254) {
            ctx->pc = 0x167288u;
            goto label_167288;
        }
    }
    ctx->pc = 0x16725Cu;
label_16725c:
    // 0x16725c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16725cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x167260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167264: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167268: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x167268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x16726c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16726cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167270: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167274: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167274u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167278: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167278u;
    SET_GPR_U32(ctx, 31, 0x167280u);
    ctx->pc = 0x16727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167278u;
    // 0x16727c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167278u, 0x167280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167280u;
label_167280:
    // 0x167280: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x167280u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
label_167284:
    // 0x167284: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x167284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_167288:
    // 0x167288: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x167288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x16728c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x16728cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x167290: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x167290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x167294: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x167294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x167298: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x167298u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x16729c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16729cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1672a0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1672A0u;
    {
        const bool branch_taken_0x1672a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672A0u;
        // 0x1672a4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672a0) {
            ctx->pc = 0x1672D4u;
            goto label_1672d4;
        }
    }
    ctx->pc = 0x1672A8u;
    // 0x1672a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1672a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672ac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1672acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1672b0: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1672b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1672b4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1672b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1672b8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1672b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1672bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1672bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672c0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1672C0u;
    SET_GPR_U32(ctx, 31, 0x1672C8u);
    ctx->pc = 0x1672C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672C0u;
    // 0x1672c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1672C0u, 0x1672C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672C8u;
label_1672c8:
    // 0x1672c8: 0x92230131  lbu         $v1, 0x131($s1)
    ctx->pc = 0x1672c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 305)));
    // 0x1672cc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1672ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1672d0: 0xa2230131  sb          $v1, 0x131($s1)
    ctx->pc = 0x1672d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 305), (uint8_t)GPR_U32(ctx, 3));
label_1672d4:
    // 0x1672d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1672d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1672d8:
    // 0x1672d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1672d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1672dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1672dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1672e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1672e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1672e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1672E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1672E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672E4u;
        // 0x1672e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1672E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1672ECu;
    // 0x1672ec: 0x0  nop
    ctx->pc = 0x1672ecu;
    // NOP
    ctx->pc = 0x1672f0u;
}
