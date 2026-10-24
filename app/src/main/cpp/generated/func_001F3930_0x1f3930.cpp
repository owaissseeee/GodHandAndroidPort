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

// Function: func_001F3930
// Address: 0x1f3930 - 0x1f3d38
void func_001F3930_0x1f3930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F3930_0x1f3930");
#endif

    switch (ctx->pc) {
        case 0x1f3984u: goto label_1f3984;
        case 0x1f39acu: goto label_1f39ac;
        case 0x1f3af8u: goto label_1f3af8;
        case 0x1f3b18u: goto label_1f3b18;
        case 0x1f3b98u: goto label_1f3b98;
        case 0x1f3ba8u: goto label_1f3ba8;
        case 0x1f3bbcu: goto label_1f3bbc;
        case 0x1f3be0u: goto label_1f3be0;
        case 0x1f3c00u: goto label_1f3c00;
        case 0x1f3c24u: goto label_1f3c24;
        case 0x1f3c50u: goto label_1f3c50;
        case 0x1f3c64u: goto label_1f3c64;
        case 0x1f3c7cu: goto label_1f3c7c;
        case 0x1f3c88u: goto label_1f3c88;
        case 0x1f3cacu: goto label_1f3cac;
        case 0x1f3d0cu: goto label_1f3d0c;
        case 0x1f3d14u: goto label_1f3d14;
        default: break;
    }

    ctx->pc = 0x1f3930u;

    // 0x1f3930: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f3930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f3934: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f3934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f3938: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f3938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f393c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f393cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3940: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f3940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f3944: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f3944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f3948: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f3948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1f394c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f394cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3950: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1f3950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f3954: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1f3954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f3958: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x1F3958u;
    {
        const bool branch_taken_0x1f3958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3958u;
        // 0x1f395c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3958) {
            ctx->pc = 0x1F3D00u;
            goto label_1f3d00;
        }
    }
    ctx->pc = 0x1F3960u;
    // 0x1f3960: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f3964: 0x2442bf50  addiu       $v0, $v0, -0x40B0
    ctx->pc = 0x1f3964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950736));
    // 0x1f3968: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f396c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f3970: 0x800008  jr          $a0
    ctx->pc = 0x1F3970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3978u: goto label_1f3978;
            case 0x1F398Cu: goto label_1f398c;
            case 0x1F39BCu: goto label_1f39bc;
            case 0x1F3CBCu: goto label_1f3cbc;
            case 0x1F3CDCu: goto label_1f3cdc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3970u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F3978u;
label_1f3978:
    // 0x1f3978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f397c: 0xc07d10a  jal         func_1F4428
    ctx->pc = 0x1F397Cu;
    SET_GPR_U32(ctx, 31, 0x1F3984u);
    ctx->pc = 0x1F3980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F397Cu;
    // 0x1f3980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4428u, 0x1F397Cu, 0x1F3984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3984u;
label_1f3984:
    // 0x1f3984: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F3984u;
    {
        const bool branch_taken_0x1f3984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3984u;
        // 0x1f3988: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3984) {
            ctx->pc = 0x1F39B0u;
            goto label_1f39b0;
        }
    }
    ctx->pc = 0x1F398Cu;
label_1f398c:
    // 0x1f398c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f398cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1f3990: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1f3990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1f3994: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1f3994u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1f3998: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f3998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f399c: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x1F399Cu;
    {
        const bool branch_taken_0x1f399c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F39A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F399Cu;
        // 0x1f39a0: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f399c) {
            ctx->pc = 0x1F3D04u;
            goto label_1f3d04;
        }
    }
    ctx->pc = 0x1F39A4u;
    // 0x1f39a4: 0xc07d138  jal         func_1F44E0
    ctx->pc = 0x1F39A4u;
    SET_GPR_U32(ctx, 31, 0x1F39ACu);
    ctx->pc = 0x1F39A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F39A4u;
    // 0x1f39a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F44E0u, 0x1F39A4u, 0x1F39ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39ACu;
label_1f39ac:
    // 0x1f39ac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1f39acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1f39b0:
    // 0x1f39b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f39b4: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x1F39B4u;
    {
        const bool branch_taken_0x1f39b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39B4u;
        // 0x1f39b8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f39b4) {
            ctx->pc = 0x1F3D00u;
            goto label_1f3d00;
        }
    }
    ctx->pc = 0x1F39BCu;
label_1f39bc:
    // 0x1f39bc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f39bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1f39c0: 0x3402cc00  ori         $v0, $zero, 0xCC00
    ctx->pc = 0x1f39c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1f39c4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1f39c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1f39c8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1f39c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1f39cc: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1f39ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1f39d0: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x1f39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1f39d4: 0xdc6401b0  ld          $a0, 0x1B0($v1)
    ctx->pc = 0x1f39d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1f39d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1f39d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1f39dc: 0x50400082  beql        $v0, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x1F39DCu;
    {
        const bool branch_taken_0x1f39dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f39dc) {
            ctx->pc = 0x1F39E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F39DCu;
            // 0x1f39e0: 0xdc6301a0  ld          $v1, 0x1A0($v1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3BE8u;
            goto label_1f3be8;
        }
    }
    ctx->pc = 0x1F39E4u;
    // 0x1f39e4: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1f39e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1f39e8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1f39e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1f39ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1f39ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1f39f0: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x1f39f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x1f39f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1f39f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1f39f8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F39F8u;
    {
        const bool branch_taken_0x1f39f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f39f8) {
            ctx->pc = 0x1F3A60u;
            goto label_1f3a60;
        }
    }
    ctx->pc = 0x1F3A00u;
    // 0x1f3a00: 0x962237d0  lhu         $v0, 0x37D0($s1)
    ctx->pc = 0x1f3a00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14288)));
    // 0x1f3a04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f3a08: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1f3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f3a0c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3A0Cu;
    {
        const bool branch_taken_0x1f3a0c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1F3A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A0Cu;
        // 0x1f3a10: 0xa62237d0  sh          $v0, 0x37D0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14288), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a0c) {
            ctx->pc = 0x1F3A20u;
            goto label_1f3a20;
        }
    }
    ctx->pc = 0x1F3A14u;
    // 0x1f3a14: 0x962237d6  lhu         $v0, 0x37D6($s1)
    ctx->pc = 0x1f3a14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14294)));
    // 0x1f3a18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f3a1c: 0xa62237d0  sh          $v0, 0x37D0($s1)
    ctx->pc = 0x1f3a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14288), (uint16_t)GPR_U32(ctx, 2));
label_1f3a20:
    // 0x1f3a20: 0x862237d6  lh          $v0, 0x37D6($s1)
    ctx->pc = 0x1f3a20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14294)));
    // 0x1f3a24: 0x862337d0  lh          $v1, 0x37D0($s1)
    ctx->pc = 0x1f3a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14288)));
    // 0x1f3a28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f3a2c: 0x962537d0  lhu         $a1, 0x37D0($s1)
    ctx->pc = 0x1f3a2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14288)));
    // 0x1f3a30: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3A30u;
    {
        const bool branch_taken_0x1f3a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A30u;
        // 0x1f3a34: 0x962437d6  lhu         $a0, 0x37D6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14294)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a30) {
            ctx->pc = 0x1F3A58u;
            goto label_1f3a58;
        }
    }
    ctx->pc = 0x1F3A38u;
    // 0x1f3a38: 0x962237d2  lhu         $v0, 0x37D2($s1)
    ctx->pc = 0x1f3a38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14290)));
    // 0x1f3a3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f3a40: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1f3a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f3a44: 0x4610027  bgez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1F3A44u;
    {
        const bool branch_taken_0x1f3a44 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1F3A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A44u;
        // 0x1f3a48: 0xa62237d2  sh          $v0, 0x37D2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14290), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a44) {
            ctx->pc = 0x1F3AE4u;
            goto label_1f3ae4;
        }
    }
    ctx->pc = 0x1F3A4Cu;
    // 0x1f3a4c: 0xa62537d4  sh          $a1, 0x37D4($s1)
    ctx->pc = 0x1f3a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14292), (uint16_t)GPR_U32(ctx, 5));
    // 0x1f3a50: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1F3A50u;
    {
        const bool branch_taken_0x1f3a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A50u;
        // 0x1f3a54: 0xa62037d2  sh          $zero, 0x37D2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14290), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a50) {
            ctx->pc = 0x1F3AE4u;
            goto label_1f3ae4;
        }
    }
    ctx->pc = 0x1F3A58u;
label_1f3a58:
    // 0x1f3a58: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1F3A58u;
    {
        const bool branch_taken_0x1f3a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A58u;
        // 0x1f3a5c: 0x2483fff9  addiu       $v1, $a0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a58) {
            ctx->pc = 0x1F3ACCu;
            goto label_1f3acc;
        }
    }
    ctx->pc = 0x1F3A60u;
label_1f3a60:
    // 0x1f3a60: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1f3a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1f3a64: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1f3a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1f3a68: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1f3a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1f3a6c: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1f3a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1f3a70: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1f3a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1f3a74: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F3A74u;
    {
        const bool branch_taken_0x1f3a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A74u;
        // 0x1f3a78: 0x3c14003c  lui         $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a74) {
            ctx->pc = 0x1F3AE8u;
            goto label_1f3ae8;
        }
    }
    ctx->pc = 0x1F3A7Cu;
    // 0x1f3a7c: 0x962237d0  lhu         $v0, 0x37D0($s1)
    ctx->pc = 0x1f3a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14288)));
    // 0x1f3a80: 0x862437d6  lh          $a0, 0x37D6($s1)
    ctx->pc = 0x1f3a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14294)));
    // 0x1f3a84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f3a88: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1f3a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f3a8c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1f3a8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1f3a90: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1f3a90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f3a94: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3A94u;
    {
        const bool branch_taken_0x1f3a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A94u;
        // 0x1f3a98: 0xa62237d0  sh          $v0, 0x37D0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14288), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a94) {
            ctx->pc = 0x1F3AA0u;
            goto label_1f3aa0;
        }
    }
    ctx->pc = 0x1F3A9Cu;
    // 0x1f3a9c: 0xa62037d0  sh          $zero, 0x37D0($s1)
    ctx->pc = 0x1f3a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14288), (uint16_t)GPR_U32(ctx, 0));
label_1f3aa0:
    // 0x1f3aa0: 0x862237d0  lh          $v0, 0x37D0($s1)
    ctx->pc = 0x1f3aa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14288)));
    // 0x1f3aa4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F3AA4u;
    {
        const bool branch_taken_0x1f3aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3AA4u;
        // 0x1f3aa8: 0x962437d0  lhu         $a0, 0x37D0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3aa4) {
            ctx->pc = 0x1F3ADCu;
            goto label_1f3adc;
        }
    }
    ctx->pc = 0x1F3AACu;
    // 0x1f3aac: 0x962237d2  lhu         $v0, 0x37D2($s1)
    ctx->pc = 0x1f3aacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14290)));
    // 0x1f3ab0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f3ab4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1f3ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f3ab8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1f3ab8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1f3abc: 0x28630007  slti        $v1, $v1, 0x7
    ctx->pc = 0x1f3abcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f3ac0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F3AC0u;
    {
        const bool branch_taken_0x1f3ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3AC0u;
        // 0x1f3ac4: 0xa62237d2  sh          $v0, 0x37D2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14290), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ac0) {
            ctx->pc = 0x1F3AE4u;
            goto label_1f3ae4;
        }
    }
    ctx->pc = 0x1F3AC8u;
    // 0x1f3ac8: 0x2483fffa  addiu       $v1, $a0, -0x6
    ctx->pc = 0x1f3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967290));
label_1f3acc:
    // 0x1f3acc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f3ad0: 0xa62237d2  sh          $v0, 0x37D2($s1)
    ctx->pc = 0x1f3ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14290), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f3ad4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3AD4u;
    {
        const bool branch_taken_0x1f3ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3AD4u;
        // 0x1f3ad8: 0xa62337d4  sh          $v1, 0x37D4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14292), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ad4) {
            ctx->pc = 0x1F3AE4u;
            goto label_1f3ae4;
        }
    }
    ctx->pc = 0x1F3ADCu;
label_1f3adc:
    // 0x1f3adc: 0xa62037d2  sh          $zero, 0x37D2($s1)
    ctx->pc = 0x1f3adcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14290), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3ae0: 0xa62037d4  sh          $zero, 0x37D4($s1)
    ctx->pc = 0x1f3ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14292), (uint16_t)GPR_U32(ctx, 0));
label_1f3ae4:
    // 0x1f3ae4: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x1f3ae4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
label_1f3ae8:
    // 0x1f3ae8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f3ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3aec: 0x2693e8b0  addiu       $s3, $s4, -0x1750
    ctx->pc = 0x1f3aecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961328));
    // 0x1f3af0: 0x24120028  addiu       $s2, $zero, 0x28
    ctx->pc = 0x1f3af0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1f3af4: 0x862637d4  lh          $a2, 0x37D4($s1)
    ctx->pc = 0x1f3af4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14292)));
label_1f3af8:
    // 0x1f3af8: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x1f3af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1f3afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3b04: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1f3b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1f3b08: 0xd21018  mult        $v0, $a2, $s2
    ctx->pc = 0x1f3b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f3b0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f3b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f3b10: 0xc07d01a  jal         func_1F4068
    ctx->pc = 0x1F3B10u;
    SET_GPR_U32(ctx, 31, 0x1F3B18u);
    ctx->pc = 0x1F3B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B10u;
    // 0x1f3b14: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4068u, 0x1F3B10u, 0x1F3B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B18u;
label_1f3b18:
    // 0x1f3b18: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x1f3b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f3b1c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1F3B1Cu;
    {
        const bool branch_taken_0x1f3b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3b1c) {
            ctx->pc = 0x1F3B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3B1Cu;
            // 0x1f3b20: 0x862637d4  lh          $a2, 0x37D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3af8;
        }
    }
    ctx->pc = 0x1F3B24u;
    // 0x1f3b24: 0x862237d0  lh          $v0, 0x37D0($s1)
    ctx->pc = 0x1f3b24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14288)));
    // 0x1f3b28: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1f3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1f3b2c: 0x2686e8b0  addiu       $a2, $s4, -0x1750
    ctx->pc = 0x1f3b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961328));
    // 0x1f3b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b34: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1f3b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f3b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f3b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3b3c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f3b40: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1f3b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f3b44: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1f3b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f3b48: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x1f3b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f3b4c: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x1f3b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f3b50: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x1f3b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f3b54: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x1f3b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f3b58: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x1f3b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f3b5c: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x1f3b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f3b60: 0xb22337af  sdl         $v1, 0x37AF($s1)
    ctx->pc = 0x1f3b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 14255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3b64: 0xb62337a8  sdr         $v1, 0x37A8($s1)
    ctx->pc = 0x1f3b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 14248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3b68: 0xb22637b7  sdl         $a2, 0x37B7($s1)
    ctx->pc = 0x1f3b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 14263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3b6c: 0xb62637b0  sdr         $a2, 0x37B0($s1)
    ctx->pc = 0x1f3b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 14256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3b70: 0xb22737bf  sdl         $a3, 0x37BF($s1)
    ctx->pc = 0x1f3b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 14271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3b74: 0xb62737b8  sdr         $a3, 0x37B8($s1)
    ctx->pc = 0x1f3b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 14264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3b78: 0xb22837c7  sdl         $t0, 0x37C7($s1)
    ctx->pc = 0x1f3b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 14279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3b7c: 0xb62837c0  sdr         $t0, 0x37C0($s1)
    ctx->pc = 0x1f3b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 14272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3b80: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x1f3b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f3b84: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x1f3b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f3b88: 0xb22337cf  sdl         $v1, 0x37CF($s1)
    ctx->pc = 0x1f3b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 14287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3b8c: 0xb62337c8  sdr         $v1, 0x37C8($s1)
    ctx->pc = 0x1f3b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 14280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3b90: 0xc07d092  jal         func_1F4248
    ctx->pc = 0x1F3B90u;
    SET_GPR_U32(ctx, 31, 0x1F3B98u);
    ctx->pc = 0x1F3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B90u;
    // 0x1f3b94: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4248u, 0x1F3B90u, 0x1F3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B98u;
label_1f3b98:
    // 0x1f3b98: 0x962537d2  lhu         $a1, 0x37D2($s1)
    ctx->pc = 0x1f3b98u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14290)));
    // 0x1f3b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ba0: 0xc07d4a8  jal         func_1F52A0
    ctx->pc = 0x1F3BA0u;
    SET_GPR_U32(ctx, 31, 0x1F3BA8u);
    ctx->pc = 0x1F3BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3BA0u;
    // 0x1f3ba4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F52A0u, 0x1F3BA0u, 0x1F3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BA8u;
label_1f3ba8:
    // 0x1f3ba8: 0x862537d6  lh          $a1, 0x37D6($s1)
    ctx->pc = 0x1f3ba8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14294)));
    // 0x1f3bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3bb0: 0x862737d4  lh          $a3, 0x37D4($s1)
    ctx->pc = 0x1f3bb0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14292)));
    // 0x1f3bb4: 0xc07d570  jal         func_1F55C0
    ctx->pc = 0x1F3BB4u;
    SET_GPR_U32(ctx, 31, 0x1F3BBCu);
    ctx->pc = 0x1F3BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3BB4u;
    // 0x1f3bb8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F55C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F55C0u, 0x1F3BB4u, 0x1F3BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BBCu;
label_1f3bbc:
    // 0x1f3bbc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f3bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f3bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3bc4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f3bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f3bc8: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1f3bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1f3bcc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f3bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3bd0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f3bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3bd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f3bd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3bd8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1F3BD8u;
    SET_GPR_U32(ctx, 31, 0x1F3BE0u);
    ctx->pc = 0x1F3BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3BD8u;
    // 0x1f3bdc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1F3BD8u, 0x1F3BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BE0u;
label_1f3be0:
    // 0x1f3be0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1F3BE0u;
    {
        const bool branch_taken_0x1f3be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BE0u;
        // 0x1f3be4: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3be0) {
            ctx->pc = 0x1F3D04u;
            goto label_1f3d04;
        }
    }
    ctx->pc = 0x1F3BE8u;
label_1f3be8:
    // 0x1f3be8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1f3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1f3bec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f3becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f3bf0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F3BF0u;
    {
        const bool branch_taken_0x1f3bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BF0u;
        // 0x1f3bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3bf0) {
            ctx->pc = 0x1F3C34u;
            goto label_1f3c34;
        }
    }
    ctx->pc = 0x1F3BF8u;
    // 0x1f3bf8: 0xc07d10a  jal         func_1F4428
    ctx->pc = 0x1F3BF8u;
    SET_GPR_U32(ctx, 31, 0x1F3C00u);
    ctx->pc = 0x1F3BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3BF8u;
    // 0x1f3bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4428u, 0x1F3BF8u, 0x1F3C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C00u;
label_1f3c00:
    // 0x1f3c00: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f3c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f3c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c08: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f3c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f3c0c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1f3c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1f3c10: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f3c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3c14: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f3c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3c18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f3c18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c1c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1F3C1Cu;
    SET_GPR_U32(ctx, 31, 0x1F3C24u);
    ctx->pc = 0x1F3C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C1Cu;
    // 0x1f3c20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1F3C1Cu, 0x1F3C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C24u;
label_1f3c24:
    // 0x1f3c24: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1f3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f3c28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f3c2c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1F3C2Cu;
    {
        const bool branch_taken_0x1f3c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C2Cu;
        // 0x1f3c30: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c2c) {
            ctx->pc = 0x1F3D00u;
            goto label_1f3d00;
        }
    }
    ctx->pc = 0x1F3C34u;
label_1f3c34:
    // 0x1f3c34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1f3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1f3c38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f3c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f3c3c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1F3C3Cu;
    {
        const bool branch_taken_0x1f3c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C3Cu;
        // 0x1f3c40: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c3c) {
            ctx->pc = 0x1F3D04u;
            goto label_1f3d04;
        }
    }
    ctx->pc = 0x1F3C44u;
    // 0x1f3c44: 0x862537a8  lh          $a1, 0x37A8($s1)
    ctx->pc = 0x1f3c44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14248)));
    // 0x1f3c48: 0xc07d14c  jal         func_1F4530
    ctx->pc = 0x1F3C48u;
    SET_GPR_U32(ctx, 31, 0x1F3C50u);
    ctx->pc = 0x1F3C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C48u;
    // 0x1f3c4c: 0x962637ac  lhu         $a2, 0x37AC($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4530u, 0x1F3C48u, 0x1F3C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C50u;
label_1f3c50:
    // 0x1f3c50: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F3C50u;
    {
        const bool branch_taken_0x1f3c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C50u;
        // 0x1f3c54: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c50) {
            ctx->pc = 0x1F3D00u;
            goto label_1f3d00;
        }
    }
    ctx->pc = 0x1F3C58u;
    // 0x1f3c58: 0x862537d0  lh          $a1, 0x37D0($s1)
    ctx->pc = 0x1f3c58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14288)));
    // 0x1f3c5c: 0xc07f146  jal         func_1FC518
    ctx->pc = 0x1F3C5Cu;
    SET_GPR_U32(ctx, 31, 0x1F3C64u);
    ctx->pc = 0x1F3C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C5Cu;
    // 0x1f3c60: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC518u, 0x1F3C5Cu, 0x1F3C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C64u;
label_1f3c64:
    // 0x1f3c64: 0x922337ae  lbu         $v1, 0x37AE($s1)
    ctx->pc = 0x1f3c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14254)));
    // 0x1f3c68: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1f3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x1f3c6c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1f3c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1f3c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c74: 0xc07d4ea  jal         func_1F53A8
    ctx->pc = 0x1F3C74u;
    SET_GPR_U32(ctx, 31, 0x1F3C7Cu);
    ctx->pc = 0x1F3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C74u;
    // 0x1f3c78: 0xa0436aa4  sb          $v1, 0x6AA4($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 27300), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F53A8u, 0x1F3C74u, 0x1F3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C7Cu;
label_1f3c7c:
    // 0x1f3c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c80: 0xc07d10a  jal         func_1F4428
    ctx->pc = 0x1F3C80u;
    SET_GPR_U32(ctx, 31, 0x1F3C88u);
    ctx->pc = 0x1F3C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C80u;
    // 0x1f3c84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4428u, 0x1F3C80u, 0x1F3C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C88u;
label_1f3c88:
    // 0x1f3c88: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f3c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f3c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c90: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f3c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f3c94: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1f3c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1f3c98: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f3c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3c9c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f3c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3ca0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f3ca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ca4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1F3CA4u;
    SET_GPR_U32(ctx, 31, 0x1F3CACu);
    ctx->pc = 0x1F3CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3CA4u;
    // 0x1f3ca8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1F3CA4u, 0x1F3CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3CACu;
label_1f3cac:
    // 0x1f3cac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1f3cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f3cb0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1f3cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1f3cb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F3CB4u;
    {
        const bool branch_taken_0x1f3cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CB4u;
        // 0x1f3cb8: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3cb4) {
            ctx->pc = 0x1F3D00u;
            goto label_1f3d00;
        }
    }
    ctx->pc = 0x1F3CBCu;
label_1f3cbc:
    // 0x1f3cbc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1f3cc0: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1f3cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1f3cc4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1f3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1f3cc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f3cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f3ccc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F3CCCu;
    {
        const bool branch_taken_0x1f3ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CCCu;
        // 0x1f3cd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ccc) {
            ctx->pc = 0x1F3D00u;
            goto label_1f3d00;
        }
    }
    ctx->pc = 0x1F3CD4u;
    // 0x1f3cd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F3CD4u;
    {
        const bool branch_taken_0x1f3cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CD4u;
        // 0x1f3cd8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3cd4) {
            ctx->pc = 0x1F3CF8u;
            goto label_1f3cf8;
        }
    }
    ctx->pc = 0x1F3CDCu;
label_1f3cdc:
    // 0x1f3cdc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f3cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1f3ce0: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1f3ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1f3ce4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1f3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1f3ce8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f3ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f3cec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3CECu;
    {
        const bool branch_taken_0x1f3cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CECu;
        // 0x1f3cf0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3cec) {
            ctx->pc = 0x1F3D00u;
            goto label_1f3d00;
        }
    }
    ctx->pc = 0x1F3CF4u;
    // 0x1f3cf4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1f3cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1f3cf8:
    // 0x1f3cf8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1f3cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1f3cfc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1f3cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1f3d00:
    // 0x1f3d00: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x1f3d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1f3d04:
    // 0x1f3d04: 0xc07d1c0  jal         func_1F4700
    ctx->pc = 0x1F3D04u;
    SET_GPR_U32(ctx, 31, 0x1F3D0Cu);
    ctx->pc = 0x1F3D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3D04u;
    // 0x1f3d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4700u, 0x1F3D04u, 0x1F3D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D0Cu;
label_1f3d0c:
    // 0x1f3d0c: 0xc07d1d6  jal         func_1F4758
    ctx->pc = 0x1F3D0Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D14u);
    ctx->pc = 0x1F3D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3D0Cu;
    // 0x1f3d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4758u, 0x1F3D0Cu, 0x1F3D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D14u;
label_1f3d14:
    // 0x1f3d14: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f3d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f3d18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f3d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3d1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f3d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3d20: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f3d20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3d24: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f3d24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D2Cu;
        // 0x1f3d30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3D34u;
    // 0x1f3d34: 0x0  nop
    ctx->pc = 0x1f3d34u;
    // NOP
    ctx->pc = 0x1f3d38u;
}
